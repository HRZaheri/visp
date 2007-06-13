/****************************************************************************
 *
 * $Id: vpColor.h,v 1.4 2007-06-13 08:57:19 asaunier Exp $
 *
 * Copyright (C) 1998-2006 Inria. All rights reserved.
 *
 * This software was developed at:
 * IRISA/INRIA Rennes
 * Projet Lagadic
 * Campus Universitaire de Beaulieu
 * 35042 Rennes Cedex
 * http://www.irisa.fr/lagadic
 *
 * This file is part of the ViSP toolkit
 *
 * This file may be distributed under the terms of the Q Public License
 * as defined by Trolltech AS of Norway and appearing in the file
 * LICENSE included in the packaging of this file.
 *
 * Licensees holding valid ViSP Professional Edition licenses may
 * use this file in accordance with the ViSP Commercial License
 * Agreement provided with the Software.
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Contact visp@irisa.fr if any conditions of this licensing are
 * not clear to you.
 *
 * Description:
 * Color definition.
 *
 * Authors:
 * Eric Marchand
 *
 *****************************************************************************/


#ifndef vpColor_hh
#define vpColor_hh


#include <visp/vpConfig.h>

class VISP_EXPORT vpColor
{
public:
  typedef enum {
    black,
    white,
    red,
    green,
    blue,
    yellow,
    cyan,
    orange,
    none
  } vpColorType;
} ;

#endif

/*
 * Local variables:
 * c-basic-offset: 2
 * End:
 */
