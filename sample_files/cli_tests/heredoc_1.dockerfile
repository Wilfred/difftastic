FROM archlinux:latest

RUN <<-EOF
    echo hello
    pacman -Syu
EOF
