#!/bin/bash
export GPGKEY=48FF70B8434078A7F830E720D91EF4A55F9D3B3C
CARCH=any makepkg -cef --config makepkg.conf --sign
