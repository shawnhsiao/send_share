#/bin/sh
KEYCHAIN_NAME="ios-build.keychain"
CERT_NAME="certificate"
DISTRIBUTION_CERT_NAME="destribution_certificate"
DISTRIBUTION_KEY_PASSWORD="aktsk"

security create-keychain -p travis $KEYCHAIN_NAME
security import TravisGo/script/travis/apple.cer -k ~/Library/Keychains/$KEYCHAIN_NAME -T /usr/bin/codesign
security import TravisGo/script/travis/$CERT_NAME.cer -k ~/Library/Keychains/$KEYCHAIN_NAME -T /usr/bin/codesign
security import TravisGo/script/travis/$CERT_NAME.p12 -k ~/Library/Keychains/$KEYCHAIN_NAME -P "$KEY_PASSWORD" -T /usr/bin/codesign
# used only in ios_aktsk_release
security import TravisGo/script/travis/$DISTRIBUTION_CERT_NAME.cer -k ~/Library/Keychains/$KEYCHAIN_NAME -T /usr/bin/codesign
security import TravisGo/script/travis/$DISTRIBUTION_CERT_NAME.p12 -k ~/Library/Keychains/$KEYCHAIN_NAME -P "$DISTRIBUTION_KEY_PASSWORD" -T /usr/bin/codesign
security default-keychain -s $KEYCHAIN_NAME
# specifies no timeout
security set-keychain-settings $KEYCHAIN_NAME

mkdir -p ~/Library/MobileDevice/Provisioning\ Profiles
cp ./scripts/travis/profiles/* ~/Library/MobileDevice/Provisioning\ Profiles/
