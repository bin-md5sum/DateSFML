---

# SFML Date Display Thing

This project is a simple C++ application that uses the SFML to display the current date in a graphical window. The date is dynamically updated in the format `YYYY/MM/DD`.

I made this because i was bored

---

## Requirements

To compile and run this project, you need the following:

1. **SFML Library**:
   - Install the SFML development libraries for your system.
   - Includes `sfml-graphics`, `sfml-window`, `sfml-system`, and `sfml-audio`.

2. **C++ Compiler**:
   - A compiler that supports at least **C++11** (e.g., GCC, Clang, or MSVC).
   - Usually comes preinstalled in modern distros (Ubuntu, Arch)

3. **Font File**:
   - The project uses the `NotoSerifTangut-Regular.ttf` font. (You can always download this font in [Google Fonts](https://fonts.google.com/noto/specimen/Noto+Serif+Tangut) or use the one provided in the repo) Ensure this font file is available in the same directory as the executable or provide the correct path.

---

## Who Would Use This?

Nobody.

## Installation

### Linux

1. Install SFML (Debian):
   ```bash
   sudo apt update #Recommended.
   sudo apt install libsfml-dev
   ```
1. Install SFML (Arch):
   ```bash
   sudo pacman -Syyu #Recommended.
   sudo pacman -S sfml
   ```
2. Clone repo:
   ```bash
   git clone https://github.com/bin-md5sum/DateSFML.git
   cd DateSFML
   ```
3. Compile the code:
  ```bash
  g++ -o app index.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
  ```
4. Run the app.
  ```bash
  ./app
  ```

## Windows
### Tutorial Coming Soon or never idk. (Mainly because I'm too lazy to write tutorial)
