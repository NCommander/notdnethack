/*	SCCS Id: @(#)coord.h	3.4	1990/02/22	*/
/* Copyright (c) Stichting Mathematisch Centrum, Amsterdam, 1985. */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef COORD_H
#define COORD_H

typedef struct nhcoord {
	xchar x,y;
} coord;

struct seekspot {
	xchar x,y;
	boolean found;
};

/*struct clist{
	xchar x,y;
	boolean alive;
	struct clist *next;
};*/


#endif /* COORD_H */
