/****************************************************************************
**
** Copyright (C) 2009-11 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Pekka Marjola <pekka.marjola@nokia.com>
**
** This file is part of the Quill Image Filters package.
**
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at qt-sales@nokia.com.
**
****************************************************************************/

/*!
  \class QuillImageFilterFactory

  \brief A factory to register and create QuillImageFilter objects

The factory automatically registers any default filters. Third-party
developers can use registerImageFilter() to register their own filters
for use by other programs. Filters can be created by
createImageFilter() calls by using either name-based or role-based
approach. Roles belong to specific types of filters which are
required by LibQuill to perform a certain task.
*/

#ifndef __QUILL_IMAGE_FILTER_FACTORY_H__
#define __QUILL_IMAGE_FILTER_FACTORY_H__

#include "quillimagefilter.h"

class QuillImageFilter;

class QuillImageFilterFactory
{
public:
    static QuillImageFilter *createImageFilter (const QString &name);
    static QuillImageFilter *createImageFilter (QuillImageFilter::QuillFilterRole role);
};

#endif
