pkgname=idun-base
pkgver=1.2.3
pkgrel=0
pkgdesc="Idun basic content files"
arch="noarch"
license="MIT"
url="https://github.com/idun-project/idun-base"
source="$pkgname-$pkgver.tar.gz"
builddir="$srcdir"
options="!check"

package() {
  cd "${srcdir}"/..
  find apps -type f -exec install -Dm 666 "{}" "${pkgdir}/usr/share/idun/base/{}" \;
  find demos -type f -exec install -Dm 666 "{}" "${pkgdir}/usr/share/idun/base/{}" \;
  find games -type f -exec install -Dm 666 "{}" "${pkgdir}/usr/share/idun/base/{}" \;
  find pics -type f -exec install -Dm 666 "{}" "${pkgdir}/usr/share/idun/base/{}" \;
  find sids -type f -exec install -Dm 666 "{}" "${pkgdir}/usr/share/idun/base/{}" \;
  find z80 -type f -exec install -Dm 666 "{}" "${pkgdir}/usr/share/idun/base/{}" \;
}
sha512sums="
8c4a3dd84fc5d0b01ab0ea9e3790d6564618871f5bdf5aae4ce0dee5ec841f43db984085030b16c727d3d25722f28f27a5c03d31ed3d433732ad8ef69174db97  idun-base-1.2.3.tar.gz
"
