/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

namespace Main {
class Session;
} // namespace Main

namespace Ui {
class RpWidget;
} // namespace Ui

namespace Ui {

not_null<Ui::RpWidget*> AddChatFiltersTabsStrip(
	not_null<Ui::RpWidget*> parent,
	not_null<Main::Session*> session,
	Fn<void(FilterId)> choose,
	bool trackActiveFilterAndUnreadAndReorder = false);

} // namespace Ui
