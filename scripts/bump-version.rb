##
## Copyright (c) 2021, Fougue Ltd. <http://www.fougue.pro>
## All rights reserved.
## See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
##

#!/usr/bin/ruby

if ARGV.empty?
    puts "Error: no version argument"
    return
end

version_array = ARGV.first.split('.')
if version_array.size != 3
    puts "Error: wrong version format(maj.min.patch)"
    return
end

major = version_array[0]
minor = version_array[1]
patch = version_array[2]
puts "Major: #{major}"
puts "Minor: #{minor}"
puts "Patch: #{patch}"
scripts_dir_name = File.expand_path(File.dirname(__FILE__))

# ../README.md
path_README_md = "#{scripts_dir_name}/../README.md"
README_md = File.open(path_README_md, "r").read
README_md.sub!(/(img.shields.io\/badge\/version-v)\d+\.\d+.\d+/, "\\1#{major}.#{minor}.#{patch}")
README_md.sub!(/(Bohdan_VersionMinor\s+)\d+/, "\\1#{minor}")
README_md.sub!(/(Bohdan_VersionPatch\s+)\d+/, "\\1#{patch}")
File.open(path_README_md, "w").write(README_md)
puts "Bumped #{path_README_md}"

# ../CMakeLists.txt
path_CMakeLists_txt = "#{scripts_dir_name}/../CMakeLists.txt"
CMakeLists_txt = File.open(path_CMakeLists_txt, "r").read
CMakeLists_txt.sub!(/(Bohdan_VersionMajor\s+)\d+/, "\\1#{major}")
CMakeLists_txt.sub!(/(Bohdan_VersionMinor\s+)\d+/, "\\1#{minor}")
CMakeLists_txt.sub!(/(Bohdan_VersionPatch\s+)\d+/, "\\1#{patch}")
File.open(path_CMakeLists_txt, "w").write(CMakeLists_txt)
puts "Bumped #{path_CMakeLists_txt}"
