/*  smplayer, GUI front-end for mplayer.
    Copyright (C) 2006-2021 Ricardo Villalba <ricardo@smplayer.info>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef RENDERERYUY2_H
#define RENDERERYUY2_H

#include "renderer.h"

class QGLShaderProgram;

class RendererYUY2 : public Renderer
{
	Q_OBJECT

public:
	RendererYUY2(QObject * parent = 0);
	~RendererYUY2();

	virtual void initializeGL(int window_width, int window_height);
	virtual void paintGL(int window_width, int window_height, int image_width, int image_height, uint32_t image_format, unsigned char * image_buffer);
	virtual void resizeGL(int w, int h);

protected:
	GLuint screen_texture[1];
	QGLShaderProgram * program;
};

#endif

