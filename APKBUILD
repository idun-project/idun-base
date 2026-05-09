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
73c54a3d503bde3a0abf2f8a258da6b3e2a5c6bbd8f8e68d93bee41346e48ebae801a9bee258efd7da753054cd0bd216502f6bd1831c8cc891ca02a56564ba82  idun-base-1.2.3.tar.gz
"
