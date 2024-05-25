#pragma once
#include <iostream>

std::string en_US = R"(
    form.main.title=Check Player Inventory
    form.main.content=Please select a query mode.
    form.main.checkOnline=Query online players
    form.main.checkAll=Query all players
    form.main.searchPlayer=Search player
    form.main.resumeInventory=Resume yor inventory
    form.checkList.title=Player List
    form.checkList.content=Please select the player you want to check.
    form.searchPlayer.title=Search Player
    form.searchPlayer.description=Please enter the player's name to search.
    form.searchPlayer.input=Player's name
    form.searchPlayer.inputName=Please enter name information.
    form.searchForm.searchMode=Search mode
    form.searchPlayer.fuzzySearch=Fuzzy Search
    form.searchPlayer.preciseSearch=Precise Search
    form.notFound.title=No match found
    form.notFound.content=No match for %s was found.
    form.notFound.returnSearch=Return to the search menu
    form.returnMainForm=Return to the main menu
    form.checkPlayer.title=Check Player Inventory
    form.checkPlayer.content=You are looking for player %s's backpack.\nPlease select the mode of operation.
    form.checkPlayer.copyInventory=Copy player inventory
    form.checkPlayer.writeInventory=Write player inventory
    form.checkPlayer.deleteData=Delete player data
    form.invalidInput.title=Invalid Input
    form.invalidInput.content=The player name entered cannot be empty!
    form.invalidInput.returnSearch=Search again
    command.error.console=This command can only be executed by the player
    command.inventorycheck.desc=Check player inventory.
    checkPlayer.copyInventory.success=Successfully copied player %s's inventory to yours!
    checkPlayer.copyInventory.failed=It is not possible to copy player %s's backpack to yours! \nPlayer %s doesn't have any data!
    form.confirmWrite.title=Confirm Action
    form.confirmWrite.content=Are you sure you want to cover player %s's backpack with your backpack? \n\nAttention! \nThis operation is irreversible!
    form.confirmAction=Confirm
    form.cancelAction=Cancel
    checkPlayer.writeInventory.success=Successfully overwrote player %s's backpack!
    checkPlayer.writeInventory.failed=Cannot cover player %s's backpack! nPlayer %s doesn't have any data!
    form.confirmDelete.title=Confirm Delete Data
    form.confirmDelete.content=Are you sure you want to delete all of player %s's data? \nThis contains all the player's data in the save! \nIt's not just a backpack! \n\nAttention! nThis operation is irreversible! \nPlease proceed with caution
    checkPlayer.deleteNbt.success=Successfully deleted all of player %s's data!
    form.deleteFailed.title=Deletion failed
    form.deleteFailed.content=Players %s online! You can't delete all of your players' data! \n\nIf you want to delete all player data, please kick the player out of the game before you do it!
    form.deleteFailed.returnCheck=Return to the check menu
    checkOnline.empty=You are online alone on the whole server, and you are still checking online players here? \nWhy don't you go and recruit people?
    checkAll.empty=You've played the entire archive alone, and you're still playing here to check the bag? \nWhy don't you go and recruit people?
    resumeInventory.success=Your backpack has been resumed!
    resumeInventory.failed=Unable to resume your backpack, no data was found on your backpack!
    error.protocolMismatch.info=You are running on an unsupport protocol version! This may result in crash!
    error.protocolMismatch.version=Support protocol %1$s, current protocol %2$s.
)";

std::string zh_CN = R"(
    form.main.title=查询玩家背包
    form.main.content=请选择查询模式
    form.main.checkOnline=查询在线玩家
    form.main.checkAll=查询全部玩家
    form.main.searchPlayer=搜索玩家
    form.main.resumeInventory=恢复查包前背包
    form.checkList.title=玩家列表
    form.checkList.content=请选择你要查询的玩家
    form.searchPlayer.title=搜索玩家
    form.searchPlayer.description=请输入玩家名进行搜索
    form.searchPlayer.input=玩家名
    form.searchPlayer.inputName=请输入玩家名称信息
    form.searchForm.searchMode=搜索模式
    form.searchPlayer.fuzzySearch=模糊搜索
    form.searchPlayer.preciseSearch=精确搜索
    form.notFound.title=未找到匹配结果
    form.notFound.content=没有找到和 %s 匹配的玩家数据
    form.notFound.returnSearch=返回搜索菜单
    form.returnMainForm=返回主菜单
    form.checkPlayer.title=查询玩家背包
    form.checkPlayer.content=你正在查询玩家 %s 的背包\n请选择操作模式
    form.checkPlayer.copyInventory=将玩家背包复制到自身背包
    form.checkPlayer.writeInventory=用自身背包覆盖玩家背包
    form.checkPlayer.deleteData=删除玩家全部数据（不仅仅是背包）
    form.invalidInput.title=非法的输入
    form.invalidInput.content=输入的玩家名不能为空！
    form.invalidInput.returnSearch=重新搜索
    command.error.console=该命令只能由玩家执行
    command.inventorycheck.desc=查询玩家背包
    checkPlayer.copyInventory.success=已成功将玩家 %s 的背包复制到你的背包！
    checkPlayer.copyInventory.failed=无法将玩家 %s 的背包复制到你的背包！\n玩家 %s 没有任何数据！
    form.confirmWrite.title=确认覆盖背包
    form.confirmWrite.content=你确定要用你的背包覆盖玩家 %s 的背包吗？\n\n注意！\n此操作不可逆！
    form.confirmAction=确认操作
    form.cancelAction=我再想想
    checkPlayer.writeInventory.success=已成功覆盖玩家 %s 的背包！
    checkPlayer.writeInventory.failed=无法覆盖玩家 %s 的背包！\n玩家 %s 没有任何数据！
    form.confirmDelete.title=确认删除数据
    form.confirmDelete.content=你确定要删除玩家 %s 的全部数据吗？\n这包含玩家在存档的全部数据！\n不仅仅是背包！\n\n注意！\n此操作不可逆！\n请谨慎操作
    checkPlayer.deleteNbt.success=已成功删除玩家 %s 的全部数据！
    form.deleteFailed.title=删除失败
    form.deleteFailed.content=玩家 %s 在线！无法删除玩家全部数据！\n\n如需删除全部玩家数据，请先将该玩家踢出游戏再操作！
    form.deleteFailed.returnCheck=返回操作界面
    checkOnline.empty=全服就你一个人在线，还在这查在线玩家呢？\n还不快去招人？
    checkAll.empty=整个存档就你一个人玩过，还在这玩查包呢？\n还不快去招人？
    resumeInventory.success=已成功复原你的背包！
    resumeInventory.failed=无法复原你的背包，没有找到你的背包数据！
    error.protocolMismatch.info=此插件正在不兼容的版本协议上运行！这可能造成服务器崩溃！
    error.protocolMismatch.version=此插件支持版本协议 %1$s，服务器版本协议 %2$s。
)";
