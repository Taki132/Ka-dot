echo "$(install paru)"
sudo pacman -S --needed base-devel
git clone https://aur.archlinux.org/paru.git
cd paru
makepkg -si
echo "$(install require)"
paru -S hyprpicker-git waybar-git \
dunst nwg-look wf-recorder wlogout wlsunset
paru -S colord ffmpegthumbnailer gnome-keyring grimblast-git gtk-engine-murrine \
imagemagick kvantum pamixer playerctl polkit-kde-agent qt5-quickcontrols        \
qt5-quickcontrols2 qt5-wayland qt6-wayland swww ttf-font-awesome tumbler     \
ttf-jetbrains-mono ttf-icomoon-feather xdg-desktop-portal-hyprland-git xdotool  \
xwaylandvideobridge-cursor-mode-2-git cliphist qt5-imageformats qt5ct
paru -S everforest-gtk-theme-git ibus ibus-bamboo i3-gnome-pomodoro-git
echo "$(install neovim)"
paru -S neovim
