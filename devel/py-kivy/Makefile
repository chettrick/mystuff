# $OpenBSD: Makefile.template,v 1.68 2013/10/02 07:34:45 ajacoutot Exp $

COMMENT =		platform for developing touch applications in Python

MODPY_EGG_VERSION =	1.11.1
DISTNAME =		kivy-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		devel x11

HOMEPAGE =		https://www.kivy.org

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/python

WANTLIB +=		${MODPY_WANTLIB}
WANTLIB +=		GL SDL2 SDL2_image SDL2_mixer SDL2_ttf
WANTLIB +=		expat ffi fontconfig freetype fribidi
WANTLIB +=		glib-2.0 gmodule-2.0 gobject-2.0 graphite2
WANTLIB +=		gstreamer-1.0 harfbuzz intl m
WANTLIB +=		pango-1.0 pangoft2-1.0 pcre pthread z

GH_ACCOUNT =		kivy
GH_PROJECT =		kivy
GH_TAGNAME =		${MODPY_EGG_VERSION}

MODPY_VERSION =		${MODPY_DEFAULT_VERSION_3}
MODPY_PI =		No
MODPY_SETUPTOOLS =	Yes
MODPY_PYTEST =		No

LIB_DEPENDS +=		devel/sdl2 \
			devel/sdl2-image \
			devel/sdl2-mixer \
			devel/sdl2-ttf \
			devel/fribidi \
			devel/glib2 \
			devel/harfbuzz \
			devel/pango \
			devel/pcre \
			multimedia/gstreamer1/core

BUILD_DEPENDS +=	lang/cython${MODPY_FLAVOR} \
			devel/py-setuptools${MODPY_FLAVOR}

RUN_DEPENDS +=		x11/xclip \
			x11/xsel

USE_GMAKE =		Yes

NO_TEST =		Yes

CFLAGS +=		-I${LOCALBASE}/include

.include <bsd.port.mk>
