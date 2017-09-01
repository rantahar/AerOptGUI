/*********************************************
**
**	Created on: 	09/04/2015 2015
**	Author: 	matt - Matt Edmunds
**	File:		OptimisationRun.cpp
**
**********************************************/

#include <QDebug>
#include <QPointF>
#include <QRectF>
#include <iostream>
#include "BoundaryPoint.h"

BoundaryPoint::BoundaryPoint(qreal xcoord, qreal ycoord) :
    mCoord(xcoord,ycoord),
    mControlPointRect(-10,-10,20,20)
{
}

QRectF BoundaryPoint::controlPointRect() {
    return mControlPointRect;
}

qreal BoundaryPoint::x() const {
    return mCoord.x();
}

qreal BoundaryPoint::y() const {
    return mCoord.y();
}

uint BoundaryPoint::getSmoothing() {
    return mSmooth;
}

uint BoundaryPoint::getSmoothFactor() {
    return mSmooth / 10;
}

void BoundaryPoint::setSmoothing(uint smoothing) {
    mSmooth = smoothing;
}

bool BoundaryPoint::isControlPoint() {
    return mIsControlPoint;
}

void BoundaryPoint::setTopLeftBound(QPointF pos) {
    mControlPointRect.setTopLeft(pos);
}

void BoundaryPoint::setBottomRightBound(QPointF pos) {
    mControlPointRect.setBottomRight(pos);
}