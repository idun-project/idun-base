#!/bin/bash
# use my publig GPG key
export GPGKEY=48FF70B8434078A7F830E720D91EF4A55F9D3B3C
# remove old package
rm ~/Development/idun-project.github.io/packages/idun-base-*.zst
rm ~/Development/idun-project.github.io/packages/idun-base-*.zst.sig
# copy latest package
cp idun-base-*any*.zst ../idun-project.github.io/packages
cp idun-base-*any*.zst.sig ../idun-project.github.io/packages
# update the repo database
cd ~/Development/idun-project.github.io/packages
repo-add --sign --verify idun-repo.db.tar.zst idun-base-*any*.zst
