# $OpenBSD$

COMMENT=	yahtzee with text, curses, and graphical modes
DISTNAME=	yahtzee-1.6
CATEGORIES=	games

HOMEPAGE=	http://www.muppetlabs.com/~breadbox/software/yahtzee.html

# MIT
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=	c ncurses

MASTER_SITES=	http://www.muppetlabs.com/~breadbox/pub/software/

FLAVORS=	no_x11
FLAVOR?=

.if ${FLAVOR:Mno_x11}
MAKE_ENV+=	NO_SDL=1
.else
WANTLIB+=	m pthread SDL SDL_ttf
LIB_DEPENDS=	devel/sdl-ttf
.endif

USE_GMAKE=	Yes

NO_TEST=	Yes

.include <bsd.port.mk>
