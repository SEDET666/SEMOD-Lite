<div align="center">

# SEMOD Lite

**逃离后室 Escape the Backrooms 的轻量级开源模组菜单。**  
解除原版 4 人房间限制，支持最高 16 人联机，并提供地图、Actor、玩家、设置等实用功能。

[English](https://github.com/SEDET666/SEMOD-Lite/blob/main/README.md) | [中文](https://github.com/SEDET666/SEMOD-Lite/blob/main/README_Zh.md)

![项目](https://img.shields.io/badge/SEMOD-Lite-brightgreen.svg)
![游戏](https://img.shields.io/badge/Game-Escape%20the%20Backrooms-blue.svg)
![最大玩家](https://img.shields.io/badge/Max%20Players-16-orange.svg)
![协议](https://img.shields.io/badge/License-GPL-red.svg)
![默认按键](https://img.shields.io/badge/Default%20Key-F3-purple.svg)

</div>

---

## 项目简介

**SEMOD Lite** 是一个面向《逃离后室 / Escape the Backrooms》的轻量级开源模组项目，主要目标是在保持菜单简单易用的同时，提供多人联机扩展和常用游戏功能。

模组内置菜单名称为 **SEDET MOD MENU Lite Version**。默认使用 **F3** 打开模组菜单，打开按键可以在模组菜单的 **Setting / 设置** 页面中更改。

项目地址：**https://github.com/SEDET666/SEMOD-Lite**

---

## 主要功能

### 解除最大玩家限制：4 人 → 16 人

SEMOD Lite 可以解除游戏原本的最大玩家数量限制，将房间最大人数从 **4 人** 提升到 **16 人**。

![最大玩家数量设置为16](https://raw.githubusercontent.com/SEDET666/SEMOD-Lite/refs/heads/main/Pics/MaxPlayer16.png)

![16人大厅列表](https://raw.githubusercontent.com/SEDET666/SEMOD-Lite/refs/heads/main/Pics/MaxPlayer16_2.png)

### 模组菜单页面

SEMOD Lite 菜单包含多个功能页面，不同页面负责不同类型的功能。

#### Map 页面

Map 页面包含地图加载和房间相关功能，其中包括 **MaxPlayers** 最大玩家数量设置。

![SEMOD Lite Map页面](https://raw.githubusercontent.com/SEDET666/SEMOD-Lite/refs/heads/main/Pics/SEMOD_Lite_1.png)

#### Actor 页面

Actor 页面提供 Actor、实体、物品相关功能，例如生成实体、销毁已生成实体、生成物品、使用物品、清理所有物品和清理所有实体等。

![SEMOD Lite Actor页面](https://raw.githubusercontent.com/SEDET666/SEMOD-Lite/refs/heads/main/Pics/SEMOD_Lite_2.png)

#### Setting 页面

Setting 页面用于修改模组的通用设置。截图中默认打开菜单按键为 **F3**，销毁 Actor 按键为 **Num -**。该页面还包含 **MaxPlayers16**、**CanJoin**、**Is English** 等开关。

如果要切换到中文语言，请在模组菜单设置里取消勾选 **"Is English"** 选项。

![SEMOD Lite Setting页面](https://raw.githubusercontent.com/SEDET666/SEMOD-Lite/refs/heads/main/Pics/SEMOD_Lite_3.png)

#### Player 页面

Player 页面提供玩家相关实用功能，包括获取位置、传送、全员传送、自由视角、碰撞开关、名字标签开关、烟花安全相关开关、无限体力选项，以及行走速度和奔跑速度设置等。

![SEMOD Lite Player页面](https://raw.githubusercontent.com/SEDET666/SEMOD-Lite/refs/heads/main/Pics/SEMOD_Lite_4.png)

---

## 默认按键

| 功能 | 默认按键 / 位置 |
| --- | --- |
| 打开模组菜单 | **F3** |
| 修改打开菜单按键 | 模组菜单 → **Setting / 设置** 页面 |
| 销毁 Actor 按键 | 默认 **Num -**，可在 Setting 页面中修改 |

---

## 功能列表

| 分类 | 功能 |
| --- | --- |
| 多人联机 | 将最大玩家数量从 4 人解除到 16 人，CanJoin 加入开关 |
| 地图 | 地图选择与加载、MaxPlayers 设置、关卡相关选项 |
| Actor | 生成实体、销毁已生成实体、生成物品、使用物品、清理实体/物品 |
| 玩家 | 获取位置、传送、全员传送、自由视角、无碰撞、名字标签、体力选项、移动速度设置 |
| 设置 | 修改菜单热键、修改销毁 Actor 热键、MaxPlayers16 开关、CanJoin 开关、语言开关 |

---

## 语言切换

中文用户请注意：如果要切换到中文语言，请打开模组菜单，进入 **Setting / 设置** 页面，然后取消勾选 **"Is English"** 选项。

---

## 完整版 SEMOD V3

**SEMOD Lite** 是轻量级开源版本。完整版 **SEMOD V3** **不开源**。

需要下载完整版 SEMOD V3 的用户，请前往 **https://etbsemod.sedet.top** 进群下载。

---

## 编译要求

如果要从源码编译本项目，需要先使用 **ETBAssetGenPlus** 项目生成并补齐《逃离后室 / Escape the Backrooms》所需的游戏资产文件。

由于本仓库不会包含原游戏资产，如果没有先通过 **ETBAssetGenPlus** 补齐缺失的游戏资产，项目可能无法正常编译或打包。

---

## 开源协议

本项目使用 **GPL 协议** 开源。  
使用、修改、分发本项目时，请遵守 GPL 协议的相关要求。

---

## 免责声明

SEMOD Lite 是《逃离后室 / Escape the Backrooms》的非官方社区模组项目，与游戏开发者或发行商没有官方关联，也不代表官方支持。

请合理使用模组。多人联机模组可能影响其他玩家体验，建议在房间内所有玩家知情并同意的情况下使用。

