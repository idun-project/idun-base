pkgname=idun-base
pkgver=1.2.1
pkgrel=1
pkgdesc="Idun basic content files"
arch=("any")
url="https://github.com/idun-project/idun-base"
depends=()
optdepends=()
makedepends=()
provides=(idun-base)
install="perms.install"

package() {
  cd "${srcdir}"/..
  find apps -type f -exec install -Dm 644 "{}" "${pkgdir}/home/idun/idun-base/{}" \;
  find demos -type f -exec install -Dm 644 "{}" "${pkgdir}/home/idun/idun-base/{}" \;
  find games -type f -exec install -Dm 644 "{}" "${pkgdir}/home/idun/idun-base/{}" \;
  find pics -type f -exec install -Dm 644 "{}" "${pkgdir}/home/idun/idun-base/{}" \;
  find sids -type f -exec install -Dm 644 "{}" "${pkgdir}/home/idun/idun-base/{}" \;
  find C64-PD-Games -type f -exec install -Dm 644 "{}" "${pkgdir}/home/idun/idun-base/{}" \;
  find z80 -type f -exec install -Dm 644 "{}" "${pkgdir}/home/idun/idun-base/{}" \;
}
