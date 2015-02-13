# $OpenBSD: Makefile.inc,v 1.8 2013/05/17 09:40:35 sthen Exp $

CONFIG=		i386-jos-elf
PKGNAME?=	${CONFIG}-${DISTNAME}
CATEGORIES+=	devel

# GPLv3
PERMIT_PACKAGE_CDROM=	Yes

CONFIGURE_STYLE=gnu
CONFIGURE_ARGS+=--target=${CONFIG}	\
		--disable-shared	\
		--disable-nls		\
		--disable-werror

EXTRACT_SUFX?=	.tar.bz2

USE_GROFF?=	Yes
