/*  Misfit Model 3D
 * 
 *  Copyright (c) 2004-2007 Kevin Worcester
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, 
 *  USA.
 *
 *  See the COPYING file for full license text.
 */


#include "menuconf.h"
#include "simplifycmd.h"

#include "model.h"
#include "log.h"
#include "modelstatus.h"

#include <QObject>
#include <QApplication>

SimplifyMeshCommand::SimplifyMeshCommand()
{
}

SimplifyMeshCommand::~SimplifyMeshCommand()
{
}

bool SimplifyMeshCommand::activated( int arg, Model * model )
{
   model->simplifySelectedMesh();
   return true;
}

const char * SimplifyMeshCommand::getPath()
{
   return GEOM_MESHES_MENU;
}

const char * SimplifyMeshCommand::getName( int arg )
{
   return QT_TRANSLATE_NOOP( "Command", "Simplify Mesh" );
}

