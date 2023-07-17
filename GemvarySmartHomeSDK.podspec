#
# Be sure to run `pod lib lint GemvarySmartHomeSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GemvarySmartHomeSDK'
  s.version          = '0.1.2'
  s.summary          = 'A short description of GemvarySmartHomeSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/Gemvary/GemvarySmartHomeSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'songmenglong' => 'apple@gemvary.com' }
  s.source           = { :git => 'https://github.com/Gemvary/GemvarySmartHomeSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  #s.source_files = 'GemvarySmartHomeSDK/Classes/**/*'
  
  s.vendored_frameworks = "GemvarySmartHomeSDK/Frameworks/*.framework"

#  s.static_framework = true
#  s.library = 'c++'
#  s.requires_arc = true


#  s.swift_versions = ['5.0']

  # mqtt依赖
  s.dependency 'MQTTClient'
  # websocket依赖
  s.dependency 'Starscream' # websocket swift sdk
  s.dependency 'SocketRocket' # websocket oc sdk
  # 局域网依赖
  s.dependency 'CocoaAsyncSocket'
  
  s.xcconfig = {
    'ONLY_ACTIVE_ARCH' => 'YES',
    'ENABLE_BITCODE' => 'NO',
    'VALID_ARCHS[sdk=iphonesimulator*]' => '',
    #'OTHER_LDFLAGS' => '-ObjC',
    #'GENERATE_INFOPLIST_FILE' => 'YES'
  }
  
  s.pod_target_xcconfig = {
    'ONLY_ACTIVE_ARCH' => 'YES',
    'ENABLE_BITCODE' => 'NO',
    'VALID_ARCHS[sdk=iphonesimulator*]' => '',
    #'OTHER_LDFLAGS' => '-ObjC',
    #'GENERATE_INFOPLIST_FILE' => 'YES'
  }
  
  s.user_target_xcconfig = {
    'ONLY_ACTIVE_ARCH' => 'YES',
    'ENABLE_BITCODE' => 'NO',
    'VALID_ARCHS[sdk=iphonesimulator*]' => '',
    #'OTHER_LDFLAGS' => '-ObjC',
    #'GENERATE_INFOPLIST_FILE' => 'YES'
  }

  
  
  s.dependency 'CleanJSON'
  s.dependency 'RealReachability' # 网络状态工具
  s.dependency 'GemvaryToolSDK'

  # s.resource_bundles = {
  #   'GemvarySmartHomeSDK' => ['GemvarySmartHomeSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
