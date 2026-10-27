# MKLink V4 钓鱼 / North Wetland Fishing

运行于 **MKLink V4（HPM5301）** 的240×240 RGB565像素钓鱼游戏，使用ST7789屏幕和一颗可双向旋转、按下的编码器。当前版本 **D16 / 2026-10-27**，包含D15全部更新；108项主机检查通过，新功能待实机确认。

A 240×240 RGB565 pixel fishing game for **MKLink V4 (HPM5301)** with an ST7789 screen and a single rotary encoder. Current release: **D16 / 2026-10-27**, including D15. All108 host checks pass; new features await device acceptance.

## D16更新 / D16 changes

- 都市便利店外加入流浪猫：抚摸+1、喂食+5，好感50跟船；每次见面最多3次互动、每天最多喂2次，罐头与小鱼共享。猫可跟随两图，符合条件的四种变异概率由1%升到2.5%。
- 互动改为小选项框；岸边实际往返走动、坐下或蜷睡，靠近主角会停下转向。玩家在附近时保持有猫/没猫状态，离开视野后更新；本次状态与次数随存档保留。船上只坐或睡，配有zzz/爱心。
- 24游戏日八阶段月相，保留原轨迹与山体遮挡；便利店屋檐、鱼摊棚下可遮雨并逐渐消退潮湿，打烊后仍有效。
- 鱼罐头描述为“喵”；栩栩如生的假饵描述为“他的饵比我的鱼都大”，600G永久使用。
- 修复储鱼箱空间不足时未使用空船尾位而放流大鱼；竹竿仅适配细线/通用线组；钓深只显示钓底、顶层、中层。包含商店滚轮反向与岸上两档快走。
- 船猫坐位、人与猫之间的细伞杆、船尾鱼头系绳/部分入水与20～42像素鱼长调整。雨伞下雨自动展开，停雨收起。

City cats gain friendship from petting/feeding and join at50, following both maps and raising eligible variants from1% to2.5%. Encounters allow three actions and two feeds daily, shared across cans and new small catches. A small menu leaves the scene visible; cats pace on shore and keep their visible/absent state until the player leaves. Boat idle poses are seated or asleep with zzz. Eight moon phases cycle over24 game days; city eaves and canopies shelter walkers even after closing. Cargo overflow, bamboo-rig restrictions, three depth choices, reusable600G lure, shop-wheel direction and two-speed shore walking are included. Stern fish, cat seating and the automatically opening umbrella have been refined.

V16存档1511B，使用独立A/B文件并保留所有旧档。SD资源仍为2026.10.19.5，无需重拷。详见 [D16设定 / settings](docs/cat-ui-and-moon-d16.md)、[内存 / memory](docs/cat-ui-and-moon-d16-memory.md) 与 [核验 / evidence](docs/cat-ui-and-moon-d16-build-validation.json)。

V16 remains1511bytes with separate A/B files and all older files retained. Existing2026.10.19.5 SD packs work unchanged. Source artwork and previews are excluded; only used C artwork and required SD packs are provided.

## D14已发布基线 / Published D14 baseline

- 都市鱼摊新增3500G高碳长竿，最大抛距7.2米、收线效率125%；6.5kg以上鱼每次收线有1点张力缓冲。500g以下小鱼在低张力时松线积累快50%，到1.5kg逐渐恢复正常，旧鱼竿仍适合近岸和小鱼。
- 便利店新增160G永久雨伞，岸上手持、船上固定，阻止继续淋湿。泡面28G，持续4游戏小时，只提升收放线速度10%；热拿铁35G，持续6小时，收放线和提竿窗口各提升10%，后购买的替换前一个。
- 普通断线仅10%概率损坏线组，90%保留。河豚中钩后逃脱额外独立20%概率咬断线组，提示“它咬断了线组”；与普通损坏同时触发也只扣一副，断线逃脱总损坏概率28%。
- V14存档仍1503B，保留旧存档、密钥、目录及进度；原2026.10.19.5资源包继续使用，无需重拷。

The city adds a3500G long rod (7.2m,125% retrieval, lower added tension for fish over6.5kg) with a small-fish slack penalty that preserves the role of older rods. A permanent160G umbrella prevents further wetness. Noodles cost28G and grant10% handling only for four game hours; the35G six-hour latte retains both handling and strike-window bonuses. Refreshments replace rather than stack.

Ordinary breaks have a10% damage chance. Hooked puffer escapes add an independent20% bite-through chance, for28% total damage on break escapes. At most one active rig is consumed. V14 remains1503bytes, preserves old progress and uses the same SD packs. See [D14 balance](docs/line-damage-d14.md) and [gear additions](docs/city-gear-d13.md).

## 下载与资源 / Firmware and resources

- 固件：[MicroLink.uf2](MicroLink.uf2)。资源版本：**2026.10.19.5**（格式2）。
- 首次使用，复制完整的 [FishingGame_Resources_DO_NOT_DELETE](sdcard/FishingGame_Resources_DO_NOT_DELETE) 目录到SD根目录，保留其中`maps/`等子目录。不要只复制两个`.fgpk`文件或ZIP本身。
- 已有2026.10.19.5配套资源时，只更新UF2，无需重拷。旧版本资源需要更新完整目录。
- 缺少或不匹配资源时，设备检查原文件系统及容量后才开放SD供电脑复制；校验完成后自动隐藏磁盘并进入游戏。正常游戏期间不开放USB磁盘。保留原下载器文件及存档目录；不要格式化磁盘。

Download the UF2 above and copy the **entire matching resource directory** to the SD root, preserving its subdirectories. Existing2026.10.19.5 packs need no recopy. Missing/mismatched packs trigger guarded, exclusive SD import; successful validation detaches USB and starts the game. Keep downloader files and saves; do not format the disk. See [resource import](docs/resource-import.md).

## 游戏内容 / Gameplay

湿地湖泊与城市江河两处钓点，通过24小时车站和纸质路线图往返，每次180G并推进5游戏小时。都市有独立鱼种、深河道、现代天际线和夜间灯光，使用气垫筏。

鱼种依水域、游戏时间、鱼饵和天气分配出现权重；24项活动图鉴包含四种条件1%稀有变异，特殊鱼获为彩色外框并获得10倍售价。鱼竿、线组、浮漂、饵料、容器、金币、买卖、图鉴及声音设置均已实现。

两地独立天气，降雨持续2～48游戏小时，包含远景薄雾、分层雨线和水面涟漪。淋雨1游戏小时潮湿满，最多降低20%收放线速度；热拿铁持续6游戏小时，收放线和提竿窗口提高10%。都市便利店09:00–21:00，露天鱼摊06:00–16:00；湿地渔具店07:00–18:00。

大鱼压力通过张力、可见冲刺和线长变化体现，没有最后一段距离锁。真正断线有10%概率损坏当前线组；金币不足120G且没有细线小钩时，可免费补一副。都市鱼摊提供600G八编PE线组，降低小鱼上鱼率并延长等待。

Two regions connect through a24-hour station: each trip costs180G and five game hours. The city adds independent fish profiles, a deeper river, night lighting and an inflatable raft. Equipment, bait attraction, fish sales, cargo upgrades, a24-entry active collection, four conditional1% variants and sound settings are implemented. Regional rain lasts2–48game hours. Wetness and hot-latte buffs affect handling. Giant fights use visible surges and tension without an artificial final-distance gate. Line breaks have a10% chance to destroy the rig; damaged rigs require replacement; qualifying players can obtain a free fine rig.

## 操作 / Controls

旋转用于移动、浏览或收放线，短按用于交互和确认；钓鱼时按住蓄力、松开抛竿。移动到码头后先停，再次向岸/水方向旋转即可上下船。反向旋转先停止，再次旋转反向移动。图鉴短按翻页、长按返回。只有一颗编码器，没有鼠标或额外方向键。

Rotate to move, browse or handle line; press to interact/confirm, hold and release to cast. Stop at a dock and rotate again toward shore/water to disembark/board. Reverse once to stop, then again to reverse direction. In the guide, tap to change page and hold to return.

## 存档与核验 / Saves and validation

V16存档1511B，沿用原密钥、设备UUID和目录，独立V16 A/B文件读取并保留所有V1–V15旧档。保存位置、朝向、地图、时间、天气、潮湿、雨伞、泡面/拿铁、声音、装备、金币、图鉴、鱼获和猫状态；离线不推进时间。建议备份整个`FishingGame_Saves_DO_NOT_DELETE`目录。

108项主机检查通过（主工程78、独立demo30），覆盖真实PC文件和FatFs模型的A/B写入、回读、旧档迁移、下载器哨兵文件与卷引导扇区保留。两图各17页的主机Arm-2D临时申请均为0。实际余量见[D16内存报告](docs/cat-ui-and-moon-d16-memory.md)。没有烧录设备或操作实体SD；新功能的掉电、硬件堆峰值和栈水位仍需实机验收。

V16 preserves original keys, UUID, save directory and all older files. All108 host checks pass, including A/B recovery and V15 migration without modifying old files. Both maps' seventeen loaded pages use zero host Arm-2D scratch allocations. Physical-device power-loss behavior, heap peaks and stack watermarks remain unmeasured.

## 构建与工程 / Building

需要HPM SDK1.11.0、RISC-V GCC13.2和CMake/Ninja，先按主仓库说明初始化子模块。设置`HPM_SDK_BASE`、`GNURISCV_TOOLCHAIN_PATH`并把工具加入PATH。

```sh
cmake -S . -B build-fishing -G Ninja -DBOARD=hpm5301evklite -DBOARD_SEARCH_PATH=.. -DHPM_BUILD_TYPE=flash_uf2 -DPYTHON_EXECUTABLE=python -DFISH_PYTHON_EXECUTABLE=python
cmake --build build-fishing
python scripts/verify_build.py --build-dir build-fishing --gnu-only --write-report
python scripts/verify_public_assets.py
```

默认`FISH_LCD_ROTATION=0`修正屏幕方向，编码器方向可用`-DFISH_ENCODER_DIRECTION=-1`反转。生成的Embedded Studio工程位于`build-fishing/segger_embedded_studio/mklink_sample_fishing.emProject`。应用区`0x80023000–0x80080000`，资源缓存`0x80080000–0x800F3000`；下载器和末尾52KiB不在游戏写入范围。

Use the SDK/toolchain above and initialise repository submodules. CMake generates the GNU build and Embedded Studio project. Pre-generated runtime artwork is included; normal builds need no artwork conversion tools. Host tests use a native GCC/CMake toolchain:

```sh
cmake -S tests -B build-tests -G Ninja
cmake --build build-tests
ctest --test-dir build-tests --output-on-failure
```

安装SDK在其他位置时，可通过`-DFISH_CHERRYUSB_DIR=/path/to/hpm_sdk/middleware/cherryusb`指定协议测试头文件路径。The optional SDK protocol tests use that configurable header path.

## 设定、台词与素材 / Design, dialogue and assets

[整体设定](docs/game-design.md) · [D14调整](docs/line-damage-d14.md) · [鱼类评语](docs/catch-comments.md) · [装备描述](docs/tackle-descriptions.md) · [湿地店主](docs/merchant-dialogue.md) · [都市摊主](docs/city-fishmonger-dialogue.md) · [便利店员](docs/city-merchant-dialogue.md)

仓库只提供C代码用到的共享位图/蒙版/字形、地图tile描述、实际运行`.fgpk`包及必要许可；不提供原画、未采用素材、PNG图集、字体源文件、生成提示词或预览截图。`data/`和Markdown用于编辑设定；运行读取已生成C表，改文字需同步生成表和字形。第三方许可见[THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md)。

Only runtime C assets, required map packs and licenses are published. Source artwork, unused alternatives, image exports, font masters, prompts and previews stay out of the repository. Editable design/dialogue files accompany the generated runtime tables; new glyphs require regeneration.
