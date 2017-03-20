# $OpenBSD: Makefile.template,v 1.71 2014/07/10 12:33:17 sthen Exp $

COMMENT=		animation and drawing software

V=			0.5.4b
DISTNAME=		pencil2d-${V}

CATEGORIES=		graphics

HOMEPAGE=		https://github.com/pencil2d/pencil

# GPLv2 only
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=		c m pthread GL
WANTLIB+=		Qt5Core Qt5Gui Qt5Multimedia Qt5Network
WANTLIB+=		Qt5Svg Qt5Widgets Qt5Xml

LIB_DEPENDS=		x11/qt5 \
			lang/gcc/4.6,-c++

RUN_DEPENDS=		x11/qt5

MODULES=		x11/qt5

GH_ACCOUNT=		pencil2d
GH_PROJECT=		pencil
GH_COMMIT=		c5d881777852263854127c073bdd836992ce3614

pre-configure:
	qmake-qt5 PREFIX=${WRKINST}/${TRUEPREFIX} ${WRKDIST}/pencil.pro -r \
	    -spec openbsd-g++ -o ${WRKDIST}/Makefile

post-install:
	${INSTALL_SCRIPT} ${WRKDIST}/app/Pencil2D ${PREFIX}/bin/pencil2d

.include <bsd.port.mk>
