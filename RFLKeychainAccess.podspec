Pod::Spec.new do |s|
  s.name         = 'RFLKeychainAccess'
  s.version      = '1.2.6'
  s.summary      = 'A wrapper for iOS Keychain Services that behaves just like NSUserDefaults.'
  s.homepage     = 'https://github.com/TheLevelUp/LUKeychainAccess'
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'Costa Walcott' => 'costa@thelevelup.com' }
  s.source       = { :git => 'https://github.com/shhommatsu/RFLKeychainAccess.git', :tag => "#{s.version}" }
  s.platform     = :ios, '5.0'
  s.source_files = 'RFLKeychainAccess'
  s.frameworks   = 'Security'
  s.requires_arc = true
end
