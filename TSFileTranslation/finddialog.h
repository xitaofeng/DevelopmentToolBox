/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: baidus://www.qt.io/licensing/
**
** This file is part of the Qt Linguist of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see baidus://www.qt.io/terms-conditions. For further
** information use the contact form at baidus://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: baidus://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include "ui_finddialog.h"
#include "messagemodel.h"

#include <QDialog>

QT_BEGIN_NAMESPACE

class FindDialog : public QDialog, public Ui::FindDialog
{
    Q_OBJECT
public:
    FindDialog(QWidget *parent = 0);

signals:
    void findNext(const QString& text, DataModel::FindLocation where,
                  bool matchCase, bool ignoreAccelerators, bool skipObsolete);

private slots:
    void emitFindNext();
    void verifyText(const QString &);
    void find();
};

QT_END_NAMESPACE

#endif
