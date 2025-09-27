// SPDX-FileCopyrightText: 2002-2025 PCSX2 Dev Team
// SPDX-License-Identifier: GPL-3.0+

#pragma once

#include "ui_CompressDialog.h"
#include <QtWidgets/QDialog>

class CompressDialog final : public QDialog
{
	Q_OBJECT

public:
	explicit CompressDialog(QWidget* parent, const QString& file_path);
	~CompressDialog();

private Q_SLOTS:
	

private:
	Ui::CompressDialog m_ui;
};
