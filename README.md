# cs-network
## 安装vmware以及Ubuntu
## 配置虚拟机网络
## 配置虚拟机显示器等个性装置
## 安装cmake
## 配置及安装git以及ssh密钥
## git clone自建库
## 试图理解lab
根据上个学期ics的知识 可以使用
g++ *.cpp -o app
就可以编译文件夹里的所有cpp文件生成一个名叫app的可执行文件
但是这个lab要求我们不要那么做
## 编写hellonetwork.cpp文件
先在vscode中试水 使用g++生成app.exe后进行debug 发现argc代表传进的参数个数（实际上是输在后面的参数个数➕1因为还多了个地址） argv数组是字符串 要使用atoi来转化成整型参数 其中argv0是地址
## 编写CMakeLists.txt
注意大小写 里面比较重要的几个函数是cmake_minimum_required(填最小要求编译的版本，以防出现一些警告问题) 
project（随便填什么都可以，项目名称）
add_executable（可执行文件名称 需要编译的源代码 中间用空格隔开）
## 编译准备
mkdir -p build
cd build
cmake .. -G “Unix Makefiles”
## 编译
make
## 执行
./hellonetwork 0
## 用git传到GitHub上去
git add .
git commit -am “Update”
git push
