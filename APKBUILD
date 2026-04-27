pkgname=idun-base
pkgver=1.2.3
pkgrel=0
pkgdesc="Idun basic content files"
arch="any"
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
