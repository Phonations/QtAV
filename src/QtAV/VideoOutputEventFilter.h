/******************************************************************************
    QtAV:  Media play library based on Qt and FFmpeg
    Copyright (C) 2013 Wang Bin <wbsecg1@gmail.com>

*   This file is part of QtAV

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
******************************************************************************/

#ifndef QTAV_VIDEOOUTPUTEVENTFILTER_H
#define QTAV_VIDEOOUTPUTEVENTFILTER_H

#include <QtCore/QObject>
#include <QtAV/QtAV_Global.h>

namespace QtAV {

class VideoRenderer;
class Q_EXPORT VideoOutputEventFilter : public QObject
{
    Q_OBJECT
public:
    VideoOutputEventFilter(VideoRenderer *renderer = 0);
    virtual bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void stopFiltering();
private:
    bool mRendererIsQObj;
    VideoRenderer *mpRenderer;
};

} //namespace QtAV

#endif // QTAV_VIDEOOUTPUTEVENTFILTER_H
