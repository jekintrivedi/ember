//
// C++ Interface: AssetsManager
//
// Description: 
//
//
// Author: Erik Hjortsberg <erik.hjortsberg@iteam.se>, (C) 2007
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.//
//
#ifndef EMBEROGRE_GUIASSETSMANAGER_H
#define EMBEROGRE_GUIASSETSMANAGER_H

#include <string>
#include <OgreTexture.h>

namespace CEGUI
{
class OgreCEGUITexture;
class Imageset;
class Image;
class Texture;
}

namespace EmberOgre {

namespace Gui {

/**
	@author Erik Hjortsberg <erik.hjortsberg@iteam.se>
*/
class AssetsManager{
public:
    AssetsManager();

    ~AssetsManager();
    
    const CEGUI::Image* getCEGUIImage();
    
    void showTexture(const std::string textureName);
    
private:

	void createTextureImage(Ogre::TexturePtr texturePtr);

	CEGUI::Texture* mOgreCEGUITexture;
	const CEGUI::Image* mTextureImage;
	CEGUI::Imageset* mTextureImageset;
};

}

}

#endif