DESCRIPTION = "Protocol Buffers are a way of encoding structured data in \
an efficient yet extensible format. Google uses Protocol Buffers for \
almost all of its internal RPC protocols and file formats."
HOMEPAGE = "https://developers.google.com/protocol-buffers/"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=35953c752efc9299b184f91bef540095"

SRC_URI = "git://github.com/google/protobuf.git"
SRCREV = "a428e42072765993ff674fda72863c9f1aa2d268"

S = "${WORKDIR}/git"