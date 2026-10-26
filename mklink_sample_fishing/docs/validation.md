# MKLink V4 D14 线组与泡面 / Rig damage and noodles

断线后仅10%概率损坏线组，其余保留；河豚中钩后逃脱额外独立20%概率咬断，最多消耗一副；泡面4游戏小时只提升收放线速度10%，不增加提竿窗口。热拿铁保持6游戏小时、收放线和提竿窗口各+10%。采用情境化提示，旧存档和配套SD资源保持兼容。以下为继承的D13功能。
Each line break makes one10% rig-damage roll. Hooked puffer escapes add an independent20% bite-through chance, consuming at most one rig. Noodles grant10% handling only for four game hours; latte keeps both10% bonuses for six hours. Existing saves and packs remain compatible. Inherited D13 features follow.

D13新增都市3500G高碳长竿（7.2米、125%收线、大鱼张力缓冲）、160G永久雨伞及28G泡面（4游戏小时、收放线速度+10%）。雨伞岸上手持、船上固定，阻止新潮湿。泡面和35G拿铁共用状态，后买替换不叠加。V14仍1503B并独立保留V13等旧档；配套资源2026.10.19.5不变。D13新增内容待实机验证，D12稳定反馈不等同新功能已验收。
D13 adds a3500G city long rod (7.2m,125% retrieval, reduced detent tension above6.5kg), a160G permanent umbrella and28G noodles (four game hours,+10% handling only). The umbrella is held on shore and mounted on the boat. Meal/drink buffs replace rather than stack. V14 remains1503bytes and retains V13 files. The same SD packs work. New D13 features await on-device testing.

GNU RISC-V GCC 13.2、HPM SDK 1.11.0。2026-10-26。本次仅重建 GNU flash_uf2，SEGGER 工程输入已检查，未重新编译 SEGGER。

旧的容量错误测试版保持撤回。当前版本恢复原下载器的 SD 扇区映射，开放前检查原文件系统、容量和 MBR/BPB 边界；CPU 阻塞 SPI 路径不做 DMA 地址转换或接收后缓存失效。
The original faulty-capacity build remains withdrawn. The current local importer restores stock SD LBA mapping with existing-volume/geometry checks, exclusive ownership and CPU-blocking SPI pointers. Model checks do not establish integrity of user media or hardware acceptance. No user-device writes or flashing were performed. Test results are recorded separately.

Resource version: 2026.10.19.5; format 2. Valid resources keep USB hidden. Missing packages can expose the existing SD only after its filesystem/geometry pass preflight; complete CRC checks and command drain precede detach. The author approved publishing D12 after reporting basic stability on2026-10-20.

地图测试覆盖两个真实 SD 包、CRC/文件长度/版本/地图/布局错误、预检失败不擦写、缓存复用、部分写入中断与重试、Flash 写失败、双向扣费与时间、金币不足、长按返回和随机状态不变。
Map tests cover real packs, corrupt identities/CRC/size, no erases on failed preflight, cache reuse, interrupted writes and retry, flash failures, both-way fare/time, insufficient funds, hold-to-return and unchanged fishing RNG.

应用在 0x80023000–0x80080000；460 KiB 地图缓存在 0x80080000–0x800F3000。下载器和末尾 52 KiB 不写入。NOR 初始化和擦写函数均在 ILM，ROM 调用期间关闭中断，调用前后刷新看门狗。原两块 240×24 PFB 保留，另有 4 KiB 加载缓冲和 960 B 夜景行缓冲。
The application ends before 0x80080000. The 460 KiB map cache ends before 0x800F3000; bootloader and final 52 KiB remain outside every write. The flash writer is in ILM, with IRQs masked during ROM operations. Original 240×24 PFB blocks remain; the loader adds a 4 KiB staging buffer and the night decoder uses 960 bytes.

| 工具链/区域 / Toolchain/region | 占用 / Used | 容量 / Capacity | 余量 / Free |
|---|---:|---:|---:|
| GNU / APP_FLASH | 372,468 B | 380,928 B | 8,460 B |
| GNU / ILM | 2,440 B | 131,072 B | 128,632 B |
| GNU / DLM | 126,480 B | 130,304 B | 3,824 B |
| GNU / AHB_SRAM | 28 B | 32,768 B | 32,740 B |

SD payload: 447,884 B; cache header: 4,096 B; unused: 19,060 B.

v14 存档 1503 字节，独立 A/B，保留原密钥、UUID、目录和所有 v1–v13 文件；保留旧红尾和旧白鲢记录，追加鳙鱼与来源。装备、声音、金币、图鉴和单鱼售价继续保留。
The 1503-byte V14 save uses separate A/B files, preserving keys, UUID, directory and all V1–V13 files. Bighead is appended; old redtail and D6 silver carp records remain valid. Gear, sound, coins, collection and exact fish prices survive.

城市12种鱼采用独立数值与饵料权重，超级体型不为旧装备削弱。两图资源包包含24项活动鱼及旧红尾兼容贴图。路线图和坐船加载图标留在固件，缓存损坏时仍可显示错误与重试。
The twelve city fish use independent profiles and bait weights; giants are not weakened for old gear. Both packs carry twenty-four active collection portraits plus the retired redtail art. Route UI and the seated fisherman/boat icon stay in firmware for failure/retry screens.

未执行实板烧录、拔卡/掉电、电气、帧率、栈水位或蜂鸣器试听；中断测试使用主机 Flash 模型。保留第三方库已有宏/未使用变量警告。
No hardware flashing, card-removal/power-loss, electrical, FPS, stack-watermark or audio-audition tests were performed. Interruption tests use a host flash model. Existing third-party warnings remain.

GNU UF2 SHA-256: `905f20591570db8da18aa09846974f8d8a931a05ca794576fa6a4eaf4fddea6a`.
