//
//  RFLKeychainAccessAccessibility.h
//  RFLKeychainAccess
//
//  Created by Gordon Fontenot on 5/15/15.
//  Copyright (c) 2015 SCVNGR. All rights reserved.
//

typedef NS_ENUM(NSInteger, RFLKeychainAccessAccessibility) {
  RFLKeychainAccessAttrAccessibleAfterFirstUnlock,
  RFLKeychainAccessAttrAccessibleAfterFirstUnlockThisDeviceOnly,
  RFLKeychainAccessAttrAccessibleAlways,
  RFLKeychainAccessAttrAccessibleAlwaysThisDeviceOnly,
  RFLKeychainAccessAttrAccessibleWhenUnlocked,
  RFLKeychainAccessAttrAccessibleWhenUnlockedThisDeviceOnly
};
