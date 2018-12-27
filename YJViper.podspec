Pod::Spec.new do |s|


  s.name         = "YJViper"
  s.version      = "1.0.0"
  s.summary      = "Viper 架构"

  s.homepage     = "https://github.com/LYajun/YJViper"

  s.license      = "MIT"
 

  s.author             = { "刘亚军" => "liuyajun1999@icloud.com" }
 
  s.platform     = :ios, "8.0"
  s.ios.deployment_target = "8.0"

  s.source       = { 
                      :git => "https://github.com/LYajun/YJViper.git", 
                      :tag => s.version
                   }


  s.source_files  = "YJViper/*.{h,m}"
  
  s.requires_arc = true

end
