 
/*
 * Web Upload Engine -- MeeGo social networking uploads
 * Copyright (c) 2010-2011 Nokia Corporation and/or its subsidiary(-ies).
 * Contact: Jukka Tiihonen <jukka.t.tiihonen@nokia.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU Lesser General Public License,
 * version 2.1, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 */
 
#include "WebUpload/PluginBase"

using namespace WebUpload;

PluginBase::PluginBase (QObject *parent) : QObject (parent),
    PluginInterface () {

}

PluginBase::~PluginBase () {

}

bool PluginBase::init() {
    return true;
}

void PluginBase::deinit() {
}

PostInterface * PluginBase::getPost() {
    return 0;
}

UpdateInterface * PluginBase::getUpdate() {
    return 0;
}
