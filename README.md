# Youtuber Simulator

A simple console-based simulator game. This project simulates the experience of being a YouTuber, allowing the player to create videos, gain subscribers, manage money, and track their progress.

---

## Requirements

- **C++ Standard:** C++17 or higher  
- **Compiler:** MinGW (GCC 7.0+) or MSVC  
- **Build System:** CMake 3.15+  
- **OS:** Windows, Linux, macOS  

---

## Installation & Setup

### Step 1: Install CMake

#### Windows (Chocolatey)
```bash
choco install cmake
cmake --version
```

#### Windows (Manual)
1. Download from https://cmake.org/download/  
2. Run installer  
3. Select **Add CMake to PATH**  
4. Verify:
```bash
cmake --version
```

#### Linux
```bash
sudo apt update
sudo apt install cmake
cmake --version
```

#### macOS
```bash
brew install cmake
cmake --version
```

---

### Step 2: Install MinGW / Compiler

#### Windows (Chocolatey)
```bash
choco install mingw
g++ --version
```

#### Windows (Manual)
1. Download from https://www.mingw-w64.org/  
2. Install (e.g., C:\mingw64)  
3. Add `C:\mingw64\bin` to PATH  
4. Verify:
```bash
g++ --version
```

#### Linux
```bash
sudo apt install build-essential
g++ --version
```

#### macOS
```bash
brew install gcc
g++ --version
```

---

### Step 3: Clone & Build Project

```bash
git clone https://github.com/wdemirkoll/YoutuberSimulator.git
cd YoutuberSimulator
mkdir build
cd build
cmake ..
cmake --build .
```

### Run the Executable

```bash
# Windows
./YoutuberSimulator.exe

# Linux/macOS
./YoutuberSimulator
```

---

### 🏗 Cross-Platform Build Guide

#### Windows (MinGW)
```bash
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
cmake --build .
./YoutuberSimulator.exe
```

#### Windows (MSVC)
```bash
mkdir build
cd build
cmake -G "Visual Studio 16 2019" ..
cmake --build .
cd Release
./YoutuberSimulator.exe
```

#### Linux (GCC)
```bash
mkdir build
cd build
cmake ..
make -j$(nproc)
./YoutuberSimulator
```

#### macOS (Clang)
```bash
mkdir build
cd build
cmake -G "Unix Makefiles" ..
make -j$(sysctl -n hw.ncpu)
./YoutuberSimulator
```

---

### ❓ Frequently Asked Questions & Troubleshooting

#### Windows

```bash
# CMake too old
cmake --version
choco upgrade cmake

# MinGW missing
g++ --version
where g++
choco install mingw

# Ensure C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build dir error
rmdir /s /q build
mkdir build && cd build
cmake ..
cmake --build .

# Architecture mismatch
cmake -DCMAKE_CXX_FLAGS="-m64" ..
cmake --build .
```

#### Linux/macOS

```bash
# CMake too old
cmake --version
# Linux
sudo apt remove cmake && sudo apt install cmake   
# macOS
brew upgrade cmake                                 

# Compiler missing
g++ --version
# Linux
which g++
sudo apt install build-essential 
# macOS
brew install gcc 

# Ensure C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build dir error
rm -rf build
mkdir build && cd build
cmake ..
cmake --build .

# Permission denied
chmod +x YoutuberSimulator
chmod -R +x build/
./YoutuberSimulator

# Architecture mismatch
cmake -DCMAKE_CXX_FLAGS="-m64" ..
cmake --build .
```

---

## **Author**

**Abdüsselam Demirkol**  
 GitHub: wdemirkoll
 
 🗓 Created: March 2026
