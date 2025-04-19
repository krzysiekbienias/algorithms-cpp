#!/bin/bash

# Find the project root by locating the root-level CMakeLists.txt
PROJECT_ROOT=$(git rev-parse --show-toplevel 2>/dev/null)

# Fallback if not a git repo (fallback to current dir if CMakeLists.txt is here)
if [[ -z "$PROJECT_ROOT" && -f "./CMakeLists.txt" ]]; then
  PROJECT_ROOT=$(pwd)
fi

if [[ -z "$PROJECT_ROOT" ]]; then
  echo "❌ Could not determine project root. Please run from within your project directory."
  exit 1
fi

echo "📁 Moving to project root: $PROJECT_ROOT"
cd "$PROJECT_ROOT" || exit 1

# Remove old build
echo "🧹 Removing previous build directory..."
rm -rf xcode-build

# Rebuild with CMake
echo "⚙️  Generating Xcode project with CMake..."
cmake -G Xcode -S . -B xcode-build

echo "✅ Done! You can now open the project with:"
echo "   open xcode-build/algorithms-cpp.xcodeproj"
