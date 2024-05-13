#!/bin/bash
sudo pacman -Syu
sudo pacman -S SFML
git clone https://github.com/siiiinj/install-csfml-arch ~/csfml-install
./csfml-install/installCSFML.sh
sudo pacman -S discord hyperidle hyprpaper Thunar hyprlock neofetch waybar rofi kitty btop
yay -S visual-studio-code-bin
cp -r .files ~/.config
reboot
