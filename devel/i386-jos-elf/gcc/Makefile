# $OpenBSD: Makefile,v 1.16 2014/06/07 20:20:42 sthen Exp $

COMMENT=	gcc for i386-jos-elf cross-development

V=		4.4.4
REVISION=	1
DISTNAME=	gcc-${V}
PKGNAME=	${CONFIG}-gcc-${V}

HOMEPAGE=	https://www.gnu.org/software/gcc/

SUBST_VARS+=	V

WANTLIB=	c gmp mpfr
DIST_SUBDIR=	gcc

MAKE_CXX=	No
MAKE_GXX=	No
MAKE_FORTRAN=	No
MAKE_OBJC=	No
MAKE_JAVA=	No
MAKE_ADA=	No

MASTER_SITES= 	${MASTER_SITE_GCC:=releases/gcc-$(V)/}

BUILD_DEPENDS+=	devel/autoconf/2.13	\
		devel/bison		\
		devel/metaauto		\
		devel/${CONFIG}/binutils

LIB_DEPENDS=	devel/mpfr

LANGS=		c
CC=		/usr/bin/gcc
CFLAGS=		-O2 -g

CONFIGURE_ARGS+=--enable-languages=${LANGS}

CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include"	\
		LDFLAGS="-L${LOCALBASE}/lib"

# cope with user settings in /etc/mk.conf
MAKE_FLAGS=	LANGUAGES="${LANGS}" CFLAGS="-I/usr/local/include"
MAKE_ENV=	MACHINE_ARCH=${CONFIG}

SEPARATE_BUILD=	Yes
USE_GMAKE=	Yes
YACC=		bison

TEST_DEPENDS=	devel/dejagnu

post-install:
	chown -R ${SHAREOWN}:${SHAREGRP}	\
		${PREFIX}/lib/gcc/${CONFIG}/${V}/

.include <bsd.port.mk>
