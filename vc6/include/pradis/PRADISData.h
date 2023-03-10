/***************************************************************************
                                 ground.h
                                ----------
    begin                : Sat Aug 23 2003
    copyright            : (C) 2003 by Michael Margraf
    email                : michael.margraf@alumni.tu-berlin.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef PRADISDATA_H
#define PRADISDATA_H

#include "../components/component.h"
#include "PRADISComponent.h"


class PRADISData : public PRADISComponent  {
public:
  PRADISData();
 ~PRADISData();
  Component* newOne();
	
	void setData(const QString& str);
	QString getData();
protected:
  Property* text;
};

#endif
