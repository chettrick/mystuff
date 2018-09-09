# $OpenBSD: Makefile,v 1.2 2011/09/16 09:48:10 espie Exp $

COMMENT=		2D games framework for use with Lua

V=			0.7.2
DISTNAME=		love-$V-linux-src
PKGNAME=		love-$V
REVISION=		0

HOMEPAGE=		http://love2d.org/

CATEGORIES=		games lang/lua

# code: zlib license
# docs: freebsd license
PERMIT_PACKAGE_CDROM=	Yes

#XXX MODULES=		converters/libiconv

WANTLIB += ${MODLUA_WANTLIB}
WANTLIB += GL Half IL Iex IlmImf IlmThread Imath SDL X11 Xdamage
WANTLIB += Xext Xfixes Xxf86vm c drm freetype jasper jpeg lcms
#WANTLIB += ltdl lua m mng modplug mpg123 ogg openal physfs-1.0
WANTLIB += m mng modplug mpg123 ogg openal physfs
WANTLIB += png pthread sndio stdc++ tiff usbhid vorbis vorbisfile
WANTLIB += xcb z

MASTER_SITES=		http://bitbucket.org/rude/love/downloads/

MODULES=		lang/lua

LIB_DEPENDS=		audio/libmodplug \
			audio/mpg123 \
			audio/openal \
			audio/libvorbis \
			devel/physfs \
			devel/sdl \
			graphics/DevIL \
			graphics/ilmbase \
			graphics/libmng \
			graphics/openexr \
			${MODLUA_LIB_DEPENDS}

USE_LIBTOOL=		Yes

CONFIGURE_STYLE=	gnu
CONFIGURE_ENV=		CPPFLAGS="-I${LOCALBASE}/include -I${LOCALBASE}/include/SDL/ \
				-I${X11BASE}/include/ -I${X11BASE}/include/freetype2 \
				`pkg-config --cflags ${MODLUA_DEP}`" \
			LDFLAGS="-L${X11BASE}/lib -L${LOCALBASE}/lib -pthread"

WRKDIST=		${WRKDIR}/love-HEAD

post-extract:
# Add missing newlines
	cd ${WRKSRC} && \
		for i in `find . -type f`; \
			do [ "$(tail -c1 $i)" == "$(printf '\n')" ] || ls -l $i; \
		done


.include <bsd.port.mk>
