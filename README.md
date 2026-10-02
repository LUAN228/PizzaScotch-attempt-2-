<div align="center">
<img width="256" height="256" alt="PizzaScotch Logo" src="icon.png" />
</div>

<h1 align="center">🍕 PizzaScotch 🥧</h1>

<p align="center">
  <b>A customized Android-focused fork of Butterscotch with built-in FMOD audio support.</b>
</p>

---

## 📌 Overview

**PizzaScotch** is a specialized fork of [Butterscotch](https://github.com/ButterscotchRunner/Butterscotch), an open-source C re-implementation of the GameMaker: Studio runner created by [@mrpowergamerbr](https://github.com/mrpowergamerbr) and contributors.

While the original Butterscotch target covers a wide range of retro consoles and desktop operating systems, **PizzaScotch** focuses on delivering a streamlined experience for **Android devices**, integrating native **FMOD / FMOD Studio** audio libraries for full audio playback support.

> [!NOTE]
> PizzaScotch is an independent community fork and is maintained separately from the upstream Butterscotch repository.

---

## ✨ Features & Key Changes in PizzaScotch

- **Native FMOD Integration:** Embedded FMOD and FMOD Studio native libraries (`libfmod.so` and `libfmodstudio.so`) pre-configured for Android builds (`arm64-v8a`, `armeabi-v7a`, `x86`, `x86_64`).
- **Android Target Optimizations:** Tailored `CMakeLists.txt` build configuration designed specifically for Android NDK toolchains.
- **GameMaker Bytecode Compatibility:** Inherits Butterscotch’s compatibility with GameMaker: Studio bytecode formats (WAD versions 8 through 17).

---

## 🎮 Game Compatibility

PizzaScotch inherits bytecode compatibility from Butterscotch, supporting games compiled with GameMaker: Studio VM (Virtual Machine).

### Supported WAD Versions:
- **WAD Version 8** (GMS 1.0.198+)
- **WAD Version 9** (GMS 1.0.527+)
- **WAD Version 10** (GMS 1.1.609+)
- **WAD Version 11** (GMS 1.1.754+)
- **WAD Version 12** (GMS 1.1.867+)
- **WAD Version 13** (GMS 1.1.917+)
- **WAD Version 14** (GMS 1.4.1464+)
- **WAD Version 15** (GMS 1.4.1675+)
- **WAD Version 16** (GMS 1.4.1767+)
- **WAD Version 17** (GMS 2.2+)

> [!IMPORTANT]
> Games compiled using **YYC (YoYo Compiler)** or **GMRT** contain native code instead of VM bytecode and are not supported.

---

### warning:
the project is still a work in progress, so there might be some issues or it might be incomplete. I'm still working on it, but I'll get a good version ready.

---

## 🛠️ Building for Android

PizzaScotch is built using CMake and the Android NDK.

### Prerequisites:
- Android NDK (r21 or newer recommended)
- CMake 3.10+
- FMOD Android SDK headers placed under `vendor/fmod/include/`
- FMOD `.so` binaries placed under `vendor/fmod/lib/android/${ANDROID_ABI}/`

### Build Command:
```bash
mkdir build && cd build
cmake -DPLATFORM=android \
      -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK/build/cmake/android.toolchain.cmake \
      -DANDROID_ABI=arm64-v8a \
      -DANDROID_PLATFORM=android-21 \
      ..
make







