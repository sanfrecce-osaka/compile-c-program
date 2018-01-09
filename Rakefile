require 'rake/clean'

CC = 'gcc'
SOURCES = FileList['**/*.c']
OBJECTS = SOURCES.ext('o')
PROGRAM_NAMES = SOURCES.map { |source| source.split(/\.c$/)[0] }

task :default => 'all:compile'

PROGRAM_NAMES.each do |program_name|
  namespace :all do
    desc '全Cプログラムのコンパイル'
    task :compile => PROGRAM_NAMES.map { |task_name| task_name } + [:clean]
  end

  namespace program_name.to_sym do
    desc "#{program_name}のコンパイル"
    task :compile => [program_name, :clean]
  end

  file program_name => "#{program_name}.o" do |t|
    sh "#{CC} -o #{t.name} #{t.prerequisites[0]}"
  end
end

rule '.o' => '.c' do |t|
  sh "#{CC} -c #{t.source}"
end

CLEAN.include(OBJECTS)
CLOBBER.include(PROGRAM_NAMES)
