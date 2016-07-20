#bin/bash
KEYCHAIN_NAME="ios-build.keychain"
security delete-keychain $KEYCHAIN_NAME
rm -f ~/Library/MobileDevice/Provisioning\ Profiles/$PROFILE_NAME.mobileprovision
