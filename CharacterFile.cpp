//
//  CharacterFile.cpp
//  Security
//
//  Created by flh on 2018/4/3.
//

#include "include/CharacterFile.hpp"
#include <codecvt>
namespace security {
    void characterList(vector<string> &vecStr,unsigned kind) {
        string str = "一 乙 二 十 丁 厂 七 卜 人 入 八 九 几 儿 了 力 乃 刀 又 三 于 干 亏 士 工 土 才 寸 下 大 丈 与 万 上 小 口 巾 山 千 乞 川 亿 个 勺 久 凡 及 夕 丸 么 广 亡 门 义 之 尸 弓 己 已 子 卫 也 女 飞 刃 习 叉 马 乡 丰 王 井 开 夫 天 无 元 专 云 扎 艺 木 五 支 厅 不 太 犬 区 历 尤 友 匹 车 巨 牙 屯 比 互 切 瓦 止 少 日 中 冈 贝 内 水 见 午 牛 手 毛 气 升 长 仁 什 片 仆 化 仇 币 仍 仅 斤 爪 反 介 父 从 今 凶 分 乏 公 仓 月 氏 勿 欠 风 丹 匀 乌 凤 勾 文 六 方 火 为 斗 忆 订 计 户 认 心 尺 引 丑 巴 孔 队 办 以 允 予 劝 双 书 幻 玉 刊 示 末 未 击 打 巧 正 扑 扒 功 扔 去 甘 世 古 节 本 术 可 丙 左 厉 右 石 布 龙 平 灭 轧 东 卡 北 占 业 旧 帅 归 且 旦 目 叶 甲 申 叮 电 号 田 由 史 只 央 兄 叼 叫 另 叨 叹 四 生 失 禾 丘 付 仗 代 仙 们 仪 白 仔 他 斥 瓜 乎 丛 令 用 甩 印 乐 句 匆 册 犯 外 处 冬 鸟 务 包 饥 主 市 立 闪 兰 半 汁 汇 头 汉 宁 穴 它 讨 写 让 礼 训 必 议 讯 记 永 司 尼 民 出 辽 奶 奴 加 召 皮 边 发 孕 圣 对 台 矛 纠 母 幼 丝 式 刑 动 扛 寺 吉 扣 考 托 老 执 巩 圾 扩 扫 地 扬 场 耳 共 芒 亚 芝 朽 朴 机 权 过 臣 再 协 西 压 厌 在 有 百 存 而 页 匠 夸 夺 灰 达 列 死 成 夹 轨 邪 划 迈 毕 至 此 贞 师 尘 尖 劣 光 当 早 吐 吓 虫 曲 团 同 吊 吃 因 吸 吗 屿 帆 岁 回 岂 刚 则 肉 网 年 朱 先 丢 舌 竹 迁 乔 伟 传 乒 乓 休 伍 伏 优 伐 延 件 任 伤 价 份 华 仰 仿 伙 伪 自 血 向 似 后 行 舟 全 会 杀 合 兆 企 众 爷 伞 创 肌 朵 杂 危 旬 旨 负 各 名 多 争 色 壮 冲 冰 庄 庆 亦 刘 齐 交 次 衣 产 决 充 妄 闭 问 闯 羊 并 关 米 灯 州 汗 污 江 池 汤 忙 兴 宇 守 宅 字 安 讲 军 许 论 农 讽 设 访 寻 那 迅 尽 导 异 孙 阵 阳 收 阶 阴 防 奸 如 妇 好 她 妈 戏 羽 观 欢 买 红 纤 级 约 纪 驰 巡 寿 弄 麦 形 进 戒 吞 远 违 运 扶 抚 坛 技 坏 扰 拒 找 批 扯 址 走 抄 坝 贡 攻 赤 折 抓 扮 抢 孝 均 抛 投 坟 抗 坑 坊 抖 护 壳 志 扭 块 声 把 报 却 劫 芽 花 芹 芬 苍 芳 严 芦 劳 克 苏 杆 杠 杜 材 村 杏 极 李 杨 求 更 束 豆 两 丽 医 辰 励 否 还 歼 来 连 步 坚 旱 盯 呈 时 吴 助 县 里 呆 园 旷 围 呀 吨 足 邮 男 困 吵 串 员 听 吩 吹 呜 吧 吼 别 岗 帐 财 针 钉 告 我 乱 利 秃 秀 私 每 兵 估 体 何 但 伸 作 伯 伶 佣 低 你 住 位 伴 身 皂 佛 近 彻 役 返 余 希 坐 谷 妥 含 邻 岔 肝 肚 肠 龟 免 狂 犹 角 删 条 卵 岛 迎 饭 饮 系 言 冻 状 亩 况 床 库 疗 应 冷 这 序 辛 弃 冶 忘 闲 间 闷 判 灶 灿 弟 汪 沙 汽 沃 泛 沟 没 沈 沉 怀 忧 快 完 宋 宏 牢 究 穷 灾 良 证 启 评 补 初 社 识 诉 诊 词 译 君 灵 即 层 尿 尾 迟 局 改 张 忌 际 陆 阿 陈 阻 附 妙 妖 妨 努 忍 劲 鸡 驱 纯 纱 纳 纲 驳 纵 纷 纸 纹 纺 驴 纽 奉 玩 环 武 青 责 现 表 规 抹 拢 拔 拣 担 坦 押 抽 拐 拖 拍 者 顶 拆 拥 抵 拘 势 抱 垃 拉 拦 拌 幸 招 坡 披 拨 择 抬 其 取 苦 若 茂 苹 苗 英 范 直 茄 茎 茅 林 枝 杯 柜 析 板 松 枪 构 杰 述 枕 丧 或 画 卧 事 刺 枣 雨 卖 矿 码 厕 奔 奇 奋 态 欧 垄 妻 轰 顷 转 斩 轮 软 到 非 叔 肯 齿 些 虎 虏 肾 贤 尚 旺 具 果 味 昆 国 昌 畅 明 易 昂 典 固 忠 咐 呼 鸣 咏 呢 岸 岩 帖 罗 帜 岭 凯 败 贩 购 图 钓 制 知 垂 牧 物 乖 刮 秆 和 季 委 佳 侍 供 使 例 版 侄 侦 侧 凭 侨 佩 货 依 的 迫 质 欣 征 往 爬 彼 径 所 舍 金 命 斧 爸 采 受 乳 贪 念 贫 肤 肺 肢 肿 胀 朋 股 肥 服 胁 周 昏 鱼 兔 狐 忽 狗 备 饰 饱 饲 变 京 享 店 夜 庙 府 底 剂 郊 废 净 盲 放 刻 育 闸 闹 郑 券 卷 单 炒 炊 炕 炎 炉 沫 浅 法 泄 河 沾 泪 油 泊 沿 泡 注 泻 泳 泥 沸 波 泼 泽 治 怖 性 怕 怜 怪 学 宝 宗 定 宜 审 宙 官 空 帘 实 试 郎 诗 肩 房 诚 衬 衫 视 话 诞 询 该 详 建 肃 录 隶 居 届 刷 屈 弦 承 孟 孤 陕 降 限 妹 姑 姐 姓 始 驾 参 艰 线 练 组 细 驶 织 终 驻 驼 绍 经 贯 奏 春 帮 珍 玻 毒 型 挂 封 持 项 垮 挎 城 挠 政 赴 赵 挡 挺 括 拴 拾 挑 指 垫 挣 挤 拼 挖 按 挥 挪 某 甚 革 荐 巷 带 草 茧 茶 荒 茫 荡 荣 故 胡 南 药 标 枯 柄 栋 相 查 柏 柳 柱 柿 栏 树 要 咸 威 歪 研 砖 厘 厚 砌 砍 面 耐 耍 牵 残 殃 轻 鸦 皆 背 战 点 临 览 竖 省 削 尝 是 盼 眨 哄 显 哑 冒 映 星 昨 畏 趴 胃 贵 界 虹 虾 蚁 思 蚂 虽 品 咽 骂 哗 咱 响 哈 咬 咳 哪 炭 峡 罚 贱 贴 骨 钞 钟 钢 钥 钩 卸 缸 拜 看 矩 怎 牲 选 适 秒 香 种 秋 科 重 复 竿 段 便 俩 贷 顺 修 保 促 侮 俭 俗 俘 信 皇 泉 鬼 侵 追 俊 盾 待 律 很 须 叙 剑 逃 食 盆 胆 胜 胞 胖 脉 勉 狭 狮 独 狡 狱 狠 贸 怨 急 饶 蚀 饺 饼 弯 将 奖 哀 亭 亮 度 迹 庭 疮 疯 疫 疤 姿 亲 音 帝 施 闻 阀 阁 差 养 美 姜 叛 送 类 迷 前 首 逆 总 炼 炸 炮 烂 剃 洁 洪 洒 浇 浊 洞 测 洗 活 派 洽 染 济 洋 洲 浑 浓 津 恒 恢 恰 恼 恨 举 觉 宣 室 宫 宪 突 穿 窃 客 冠 语 扁 袄 祖 神 祝 误 诱 说 诵 垦 退 既 屋 昼 费 陡 眉 孩 除 险 院 娃 姥 姨 姻 娇 怒 架 贺 盈 勇 怠 柔 垒 绑 绒 结 绕 骄 绘 给 络 骆 绝 绞 统 耕 耗 艳 泰 珠 班 素 蚕 顽 盏 匪 捞 栽 捕 振 载 赶 起 盐 捎 捏 埋 捉 捆 捐 损 都 哲 逝 捡 换 挽 热 恐 壶 挨 耻 耽 恭 莲 莫 荷 获 晋 恶 真 框 桂 档 桐 株 桥 桃 格 校 核 样 根 索 哥 速 逗 栗 配 翅 辱 唇 夏 础 破 原 套 逐 烈 殊 顾 轿 较 顿 毙 致 柴 桌 虑 监 紧 党 晒 眠 晓 鸭 晃 晌 晕 蚊 哨 哭 恩 唤 啊 唉 罢 峰 圆 贼 贿 钱 钳 钻 铁 铃 铅 缺 氧 特 牺 造 乘 敌 秤 租 积 秧 秩 称 秘 透 笔 笑 笋 债 借 值 倚 倾 倒 倘 俱 倡 候 俯 倍 倦 健 臭 射 躬 息 徒 徐 舰 舱 般 航 途 拿 爹 爱 颂 翁 脆 脂 胸 胳 脏 胶 脑 狸 狼 逢 留 皱 饿 恋 桨 浆 衰 高 席 准 座 脊 症 病 疾 疼 疲 效 离 唐 资 凉 站 剖 竞 部 旁 旅 畜 阅 羞 瓶 拳 粉 料 益 兼 烤 烘 烦 烧 烛 烟 递 涛 浙 涝 酒 涉 消 浩 海 涂 浴 浮 流 润 浪 浸 涨 烫 涌 悟 悄 悔 悦 害 宽 家 宵 宴 宾 窄 容 宰 案 请 朗 诸 读 扇 袜 袖 袍 被 祥 课 谁 调 冤 谅 谈 谊 剥 恳 展 剧 屑 弱 陵 陶 陷 陪 娱 娘 通 能 难 预 桑 绢 绣 验 继 球 理 捧 堵 描 域 掩 捷 排 掉 堆 推 掀 授 教 掏 掠 培 接 控 探 据 掘 职 基 著 勒 黄 萌 萝 菌 菜 萄 菊 萍 菠 营 械 梦 梢 梅 检 梳 梯 桶 救 副 票 戚 爽 聋 袭 盛 雪 辅 辆 虚 雀 堂 常 匙 晨 睁 眯 眼 悬 野 啦 晚 啄 距 跃 略 蛇 累 唱 患 唯 崖 崭 崇 圈 铜 铲 银 甜 梨 犁 移 笨 笼 笛 符 第 敏 做 袋 悠 偿 偶 偷 您 售 停 偏 假 得 衔 盘 船 斜 盒 鸽 悉 欲 彩 领 脚 脖 脸 脱 象 够 猜 猪 猎 猫 猛 馅 馆 凑 减 毫 麻 痒 痕 廊 康 庸 鹿 盗 章 竟 商 族 旋 望 率 着 盖 粘 粗 粒 断 剪 兽 清 添 淋 淹 渠 渐 混 渔 淘 液 淡 深 婆 梁 渗 情 惜 惭 悼 惧 惕 惊 惨 惯 寇 寄 宿 窑 密 谋 谎 祸 谜 逮 敢 屠 弹 随 蛋 隆 隐 婚 婶 颈 绩 绪 续 骑 绳 维 绵 绸 绿 琴 斑 替 款 堪 搭 塔 越 趁 趋 超 提 堤 博 揭 喜 插 揪 搜 煮 援 裁 搁 搂 搅 握 揉 斯 期 欺 联 散 惹 葬 葛 董 葡 敬 葱 落 朝 辜 葵 棒 棋 植 森 椅 椒 棵 棍 棉 棚 棕 惠 惑 逼 厨 厦 硬 确 雁 殖 裂 雄 暂 雅 辈 悲 紫 辉 敞 赏 掌 晴 暑 最 量 喷 晶 喇 遇 喊 景 践 跌 跑 遗 蛙 蛛 蜓 喝 喂 喘 喉 幅 帽 赌 赔 黑 铸 铺 链 销 锁 锄 锅 锈 锋 锐 短 智 毯 鹅 剩 稍 程 稀 税 筐 等 筑 策 筛 筒 答 筋 筝 傲 傅 牌 堡 集 焦 傍 储 奥 街 惩 御 循 艇 舒 番 释 禽 腊 脾 腔 鲁 猾 猴 然 馋 装 蛮 就 痛 童 阔 善 羡 普 粪 尊 道 曾 焰 港 湖 渣 湿 温 渴 滑 湾 渡 游 滋 溉 愤 慌 惰 愧 愉 慨 割 寒 富 窜 窝 窗 遍 裕 裤 裙 谢 谣 谦 属 屡 强 粥 疏 隔 隙 絮 嫂 登 缎 缓 编 骗 缘 瑞 魂 肆 摄 摸 填 搏 塌 鼓 摆 携 搬 摇 搞 塘 摊 蒜 勤 鹊 蓝 墓 幕 蓬 蓄 蒙 蒸 献 禁 楚 想 槐 榆 楼 概 赖 酬 感 碍 碑 碎 碰 碗 碌 雷 零 雾 雹 输 督 龄 鉴 睛 睡 睬 鄙 愚 暖 盟 歇 暗 照 跨 跳 跪 路 跟 遣 蛾 蜂 嗓 置 罪 罩 错 锡 锣 锤 锦 键 锯 矮 辞 稠 愁 筹 签 简 毁 舅 鼠 催 傻 像 躲 微 愈 遥 腰 腥 腹 腾 腿 触 解 酱 痰 廉 新 韵 意 粮 数 煎 塑 慈 煤 煌 满 漠 源 滤 滥 滔 溪 溜 滚 滨 粱 滩 慎 誉 塞 谨 福 群 殿 辟 障 嫌 嫁 叠 缝 缠 静 碧 璃 墙 撇 嘉 摧 截 誓 境 摘 摔 聚 蔽 慕 暮 蔑 模 榴 榜 榨 歌 遭 酷 酿 酸 磁 愿 需 弊 裳 颗 嗽 蜻 蜡 蝇 蜘 赚 锹 锻 舞 稳 算 箩 管 僚 鼻 魄 貌 膜 膊 膀 鲜 疑 馒 裹 敲 豪 膏 遮 腐 瘦 辣 竭 端 旗 精 歉 熄 熔 漆 漂 漫 滴 演 漏 慢 寨 赛 察 蜜 谱 嫩 翠 熊 凳 骡 缩 慧 撕 撒 趣 趟 撑 播 撞 撤 增 聪 鞋 蕉 蔬 横 槽 樱 橡 飘 醋 醉 震 霉 瞒 题 暴 瞎 影 踢 踏 踩 踪 蝶 蝴 嘱 墨 镇 靠 稻 黎 稿 稼 箱 箭 篇 僵 躺 僻 德 艘 膝 膛 熟 摩 颜 毅 糊 遵 潜 潮 懂 额 慰 劈 操 燕 薯 薪 薄 颠 橘 整 融 醒 餐 嘴 蹄 器 赠 默 镜 赞 篮 邀 衡 膨 雕 磨 凝 辨 辩 糖 糕 燃 澡 激 懒 壁 避 缴 戴 擦 鞠 藏 霜 霞 瞧 蹈 螺 穗 繁 辫 赢 糟 糠 燥 臂 翼 骤 鞭 覆 蹦 镰 翻 鹰 警 攀 蹲 颤 瓣 爆 疆 壤 耀 躁 嚼 嚷 籍 魔 灌 蠢 霸 露";
        
        if (kind == 1) {
            str = "THE BE OF AND A TO IN HE HAVE IT THAT FOR THEY I WITH AS NOT ON SHE AT BY THIS WE YOU DO BUT FROM OR WHICH ONE WOULD ALL WILL THERE SAY WHO MAKE WHEN CAN MORE IF NO MAN OUT OTHER SO WHAT TIME UP GO ABOUT THAN INTO COULD STATE ONLY NEW YEAR SOME TAKE COME THESE KNOW SEE USE GET LIKE THEN FIRST ANY WORK NOW MAY SUCH GIVE OVER THINK MOST EVEN FIND DAY ALSO AFTER WAY MANY MUST LOOK BEFORE GREAT BACK THROUGH LONG WHERE MUCH SHOULD WELL PEOPLE DOWN OWN JUST BECAUSE GOOD EACH THOSE FEEL SEEM HOW HIGH TOO PLACE LITTLE WORLD VERY STILL NATION HAND OLD LIFE TELL WRITE BECOME HERE SHOW HOUSE BOTH BETWEEN NEED MEAN CALL DEVELOP UNDER LAST RIGHT MOVE THING GENERAL SCHOOL NEVER SAME ANOTHER BEGIN WHILE NUMBER PART TURN REAL LEAVE MIGHT WANT POINT FORM OFF CHILD FEW SMALL SINCE AGAINST ASK LATE HOME INTEREST LARGE PERSON END OPEN PUBLIC FOLLOW DURING PRESENT WITHOUT AGAIN HOLD GOVERN AROUND POSSIBLE HEAD CONSIDER WORD PROGRAM PROBLEM HOWEVER LEAD SYSTEM SET ORDER EYE PLAN RUN KEEP FACE FACT GROUP PLAY STAND INCREASE EARLY COURSE CHANGE HELP LINE CITY PUT CLOSE CASE FORCE MEET ONCE WATER UPON WAR BUILD HEAR LIGHT UNITE LIVE EVERY COUNTRY BRING CENTER LET SIDE TRY PROVIDE CONTINUE NAME CERTAIN POWER PAY RESULT QUESTION STUDY WOMAN MEMBER UNTIL FAR NIGHT ALWAYS SERVICE AWAY REPORT SOMETHING COMPANY WEEK CHURCH TOWARD START SOCIAL ROOM FIGURE NATURE THOUGH YOUNG LESS ENOUGH ALMOST READ INCLUDE PRESIDENT NOTHING YET BETTER BIG BOY COST BUSINESS VALUE SECOND WHY CLEAR EXPECT FAMILY COMPLETE ACT SENSE MIND EXPERIENCE ART NEXT NEAR DIRECT CAR LAW INDUSTRY IMPORTANT GIRL GOD SEVERAL MATTER USUAL RATHER PER OFTEN KIND AMONG WHITE REASON ACTION RETURN FOOT CARE SIMPLE WITHIN LOVE HUMAN ALONG APPEAR DOCTOR BELIEVE SPEAK ACTIVE STUDENT MONTH DRIVE CONCERN BEST DOOR HOPE EXAMPLE INFORM BODY EVER LEAST PROBABLE UNDERSTAND REACH EFFECT DIFFERENT IDEA WHOLE CONTROL CONDITION FIELD PASS FALL NOTE SPECIAL TALK PARTICULAR TODAY MEASURE WALK TEACH LOW HOUR TYPE CARRY RATE REMAIN FULL STREET EASY ALTHOUGH RECORD SIT DETERMINE LEVEL LOCAL SURE RECEIVE THUS MOMENT SPIRIT TRAIN COLLEGE RELIGION PERHAPS MUSIC GROW FREE CAUSE SERVE AGE BOOK BOARD RECENT SOUND OFFICE CUT STEP CLASS TRUE HISTORY POSITION ABOVE STRONG FRIEND NECESSARY ADD COURT DEAL TAX SUPPORT PARTY WHETHER EITHER LAND MATERIAL HAPPEN EDUCATION AGREE ARM MOTHER ACROSS QUITE ANYTHING TOWN PAST VIEW SOCIETY MANAGE ANSWER BREAK ORGANIZE HALF FIRE LOSE MONEY STOP ACTUAL ALREADY EFFORT WAIT DEPARTMENT ABLE POLITICAL LEARN *** AIR TOGETHER SHALL COVER COMMON SUBJECT DRAW SHORT WIFE TREAT LIMIT ROAD LETTER COLOR BEHIND PRODUCE SEND TERM TOTAL UNIVERSITY RISE CENTURY SUCCESS MINUTE REMEMBER PURPOSE TEST FIGHT WATCH SITUATION SOUTH AGO DIFFERENCE STAGE FATHER TABLE REST BEAR ENTIRE MARKET PREPARE EXPLAIN OFFER PLANT CHARGE GROUND WEST PICTURE HARD FRONT LIE MODERN DARK SURFACE RULE REGARD DANCE PEACE OBSERVE FUTURE WALL FARM CLAIM FIRM OPERATION FURTHER PRESSURE PROPERTY MORNING AMOUNT TOP OUTSIDE PIECE SOMETIMES BEAUTY TRADE FEAR DEMAND WONDER LIST ACCEPT JUDGE PAINT MILE SOON RESPONSIBLE ALLOW SECRETARY HEART UNION SLOW ISLAND ENTER DRINK STORY EXPERIMENT STAY PAPER SPACE APPLY DECIDE SHARE DESIRE SPEND SIGN THEREFORE VARIOUS VISIT SUPPLY OFFICER DOUBT PRIVATE IMMEDIATE WISH CONTAIN FEED RAISE DESCRIBE READY HORSE SON EXIST NORTH SUGGEST STATION EFFECTIVE FOOD DEEP WIDE ALONE CHARACTER ENGLISH HAPPY CRITIC UNIT PRODUCT RESPECT DROP NOR FILL COLD REPRESENT SUDDEN BASIC KILL FINE TROUBLE MARK SINGLE PRESS HEAVY ATTEMPT ORIGIN STANDARD EVERYTHING COMMITTEE MORAL BLACK RED BAD EARTH ACCORD ELSE MERE DIE REMARK BASIS EXCEPT EQUAL EAST EVENT EMPLOY DEFENSE SMILE RIVER IMPROVE GAME DETAIL ACCOUNT CENT SORT REDUCE CLUB BUY ATTENTION SHIP DECISION WEAR INSIDE WIN SUPPOSE RIDE OPERATE REALIZE SALE CHOOSE PARK SQUARE VOTE PRICE DISTRICT DEAD FOREIGN WINDOW BEYOND DIRECTION STRIKE INSTEAD TRIAL PRACTICE CATCH OPPORTUNITY LIKELY RECOGNIZE PERMIT SERIOUS ATTACK FLOOR ASSOCIATION SPRING LOT STOCK LACK HAIR SCIENCE RELATION PROFESSION PATTERN QUICK MEDICAL INFLUENCE OCCASION MACHINE COMPARE HUSBAND BLUE INTERNATIONAL FAIR ESPECIALLY INDEED IMAGINE SURPRISE AVERAGE OFFICIAL TEMPERATURE DIFFICULT SING HIT TREE RACE POLICE TOUCH RELATIVE THROW QUALITY FORMER PULL CHANCE PROVE ARGUE SETTLE GROWTH DATE HEAT SAVE PERFORMANCE COUNT PRODUCTION LISTEN MAIN PICK SIZE COOL ARMY PATIENT COMBINE SUMMER HALL SLIGHT COMMAND ENJOY LENGTH PROPER EXPRESS HEALTH CHIEF EVENING STORE LANGUAGE DEGREE LAY CURRENT GUN DOG HOTEL STRANGE SEPARATE BOAT FAIL CLEAN DRESS ANYONE GAIN PAIN OBJECT KNOWLEDGE DEPEND RELATE BELOW DOLLAR ADVANCE SHAPE ARRANGE POPULATION YES SELL MENTION DRY CHECK POET SLEEP JOIN HOT BED ELECTRIC DREAM DUE SEASON MANNER FIT LEFT PROGRESS NEITHER STRENGTH NOTICE FINISH OPINION BILL WESTERN TRUTH WRONG TRAVEL SUIT BANK EXACT HONOR BROTHER QUIET MARRY CORNER HANDLE DANGER HOSPITAL POOL PROMISE BLOOD SHOOT SCENE LITERATURE ARRIVE FILM BASE FREEDOM BAR MAYBE HANG SUFFER MANUFACTURE FREQUENT ROCK LOSS SUN AUDIENCE ESSENTIAL GLASS PREVENT POEM POOR INCH SONG SKILL POST POPULAR RADIO ANIMAL CONSCIOUS WORTH EAT ELECTION FAITH WAVE MURDER MODEL FORGET EXTEND EDGE DISTANCE MEMORY RECOMMEND DIVISION STAFF LEG DISCUSSION ADDRESS FLY DEPENDENT BALL SHAKE FRAME EXTREME ENGINEER THICK COMFORT LATTER CAMP OIL DISCOVER EXAMINE DIFFICULTY TOOTH MIDDLE CHOICE REFER ENEMY PRACTICAL MARRIAGE BRIDGE DECLARE LADY CROSS DAILY AFTERNOON ATTEND DIRECTOR BALANCE WASH CAPITAL SPEED BLOCK CITIZEN MOUTH HILL GREEN PLEASE MOTOR AGENCY ENCOURAGE GOVERNOR WORRY AFFAIR SHOULDER BRIGHT MASS SAMPLE PRETTY REPEAT ROLL PUSH TRIP COUNCIL CLOTHE PARENT FORWARD SHARP STRAIGHT GAS WEIGHT DISCUSS FIX LOAD MASTER WHATEVER ROUND RAPID LAUGH FINGER SPOT PROPOSE SHOP BROAD REPLACE REPLY EXTENT LOCK EMPLOYEE AHEAD SIGHT SPREAD WIND APPROVE DESTROY NONE POUND FAME IMPORTANCE REFLECT ADVANTAGE MATCH REGULAR WAGE REFUSE EXISTENCE HARDLY PERFORM TITLE TEND EXERCISE THIN COAT BIT MOUNTAIN YOUTH BEHAVIOR NEWSPAPER SECRET ABILITY SEA SOFT JUSTICE REASONABLE CIRCLE SOLID PAGE WEAPON FAST REPRESENTATIVE SEARCH PURE ESCAPE CROWD STICK TELEPHONE AVOID GARDEN FAVOR NEWS UNLESS DINNER SOMEONE SIGNAL YARD IDEAL WARM MISS SHELTER SOLDIER ARTICLE CRY CAPTAIN FAMILIAR SEAT GUEST WEAK EXCITE KING EVERYONE WINE HOLE DUTY BEAT PERFECT BOTTOM COMPOSE BATTLE EXPENSE CATTLE FLOW KITCHEN DUST BOTTLE ADMIT TEAR TIRE EXPRESSION EXCEPTION APPLICATION BELONG RICH FAILURE STRUGGLE INSTRUMENT VARIETY NARROW THEATER COLLECTION RAIN REVIEW PRESERVE LEADERSHIP CLAY DAUGHTER FELLOW SWING THANK LIBRARY FAT RESERVE TOUR NICE WARN RING BITTER CHAIR YESTERDAY SCIENTIFIC FLOWER WHEEL SOLUTION AIM GATHER INVITE MOREOVER FRESH FOREST WINTER BOX BELIEF ORDINARY IMPOSSIBLE PRINT GRAY TASTE LIP SPEECH REFERENCE STAIN CONNECTION OTHERWISE STRETCH KNIFE VILLAGE BLOW MISTAKE SWEET SHOUT DIVIDE GUARD WORSE EXCHANGE RARE COMMERCIAL REQUEST APPOINT AGENT DEPENDENCE BIRD WILD MOTION GUESS NEIGHBOR SEED FASHION LOAN CORRECT PLAIN MAIL RETIRE OPPOSITE PREFER SAFE EVIL DOUBLE WOOD EMPTY BABY ADVISE CONTENT SPORT LIFT LITERARY CURIOUS TIE FLAT MESSAGE NECK HATE DIRT DELIGHT TRUST NOBODY VALLEY TOOL PRESENCE COOK RAILROAD MINISTER COFFEE BRUSH BESIDE COLLECT GUIDE LUCK PROFIT LORD EVERYBODY PRISON CLOUD SLAVE CHAIRMAN SOIL DISTINGUISH INTRODUCE URGE BLIND ARISE UPPER CURVE MEMBERSHIP KEY ENTERTAIN SOUL NEIGHBORHOOD FRIENDLY PAIR STONE LEAN PROTECT ADVERTISE MYSTERY WELCOME KNEE JUMP SNAKE STREAM AVENUE BROWN DISEASE HAT EXCELLENT FORMAL SNOW SHEET SOMEHOW UNITY SKY ROUGH SMOOTH WEATHER STEADY THREATEN DEPTH OPPOSE DELIVER ANCIENT PRAY ADOPT BIRTH APPEARANCE UNIVERSE BUSY HURRY COAST FORTH SMELL FURNISH FEMALE HIDE WIRE PROPOSAL OUGHT VICTORY QUARTER ENGINE CUSTOMER WASTE FOOL INTEND INTENTION DESK POLITICS LAWYER ROOT CLIMB METAL GRADUAL HUNT PROTECTION SATISFY ROOF BRANCH PLEASURE WITNESS LOOSE NOSE MINE BAND ASIDE RISK TOMORROW REMIND EAR FISH SHORE OPERATOR CIVILIZE BEING SILENT SCREEN BIND EARN PACK COLONY BESIDES SLIP COUSIN SCALE RELIEF EXPLORE STEM BRAIN MUSICIAN DEFEND BEND SOMEBODY SHADOW MIX SMOKE DESCRIPTION FRUIT GUILT YIELD SENSITIVE SALT PALE SWEEP COMPLETION THROAT AGRICULTURE ADMIRE GENTLE DOZEN PARTICLE PLEASANT BAY CUP COMPETITION MOON TERRIBLE STRIP MECHANIC SHOCK CONVERSATION ANGLE TALL PLENTY STAR YELLOW SICK THOROUGH ABSOLUTE SUCCEED SURROUND PROUD DEAR CARD LAKE BREATH AFRAID SILENCE ONTO SHOE SOMEWHERE CHAIN SLIDE COPY MACHINERY WAKE SEVERE POCKET BONE HONEST FREEZE DICTIONARY CALM SWIM ICE MALE SKIN CRACK RUSH WET MEAT COMMERCE JOINT GIFT HOST SUSPECT PATH UNCLE AFFORD INSTANT SATISFACTORY HEIGHT TRACK CONFIDENCE GRASS SUGGESTION FAVORITE BREAKFAST APART CHEST ENTRANCE MARCH SINK NORTHERN IRON ALIVE ILL BAG DISTURB NATIVE BEDROOM VIOLENT BENEATH PAUSE TOUGH SUBSTANCE THREAT CHARM ABSENCE FACTORY SPITE MEAL UNIVERSAL ACCIDENT HIGHWAY SENTENCE LIBERTY WISE NOISE DISCOVERY TUBE FLASH TWIST FENCE CHILDHOOD JOY SISTER SAD EFFICIENCY DISAPPEAR DEFEAT EXTENSIVE RENT COMPARISON POSSESS GRACE FLESH LIQUID SCIENTIST EASE HEAVEN MILK SYMPATHY RANK RESTAURANT FREQUENCY ANGRY SHADE ACCUSE NECESSITY KNOCK LOUD PERMANENT ROW LOVELY CONFUSE GOLD FRIGHTEN SOLVE GRAVE SALARY PHOTOGRAPH ADVICE ABROAD WOUND VIRTUE DARE QUEEN EXTRA ATTRACT NUMEROUS PINK GATE EXPENSIVE SHUT CHICKEN FORGIVE HOLY WOODEN PROMPT CRIME SORRY REPUBLIC ANGER VISITOR PILE VIOLENCE STEEL WING STAIR PARTNER DELAY GENTLEMAN POUR CONFUSION DAMAGE KICK SAFETY BURST *** RESISTANCE SCREW PRIDE TILL HIRE VERB PREACH CLERK EVERYWHERE ANYWAY FAN CONNECT EGG EFFICIENT GRAIN CALCULATE DRAG OPPOSITION WORSHIP ARREST DISCIPLINE STRING HARBOR CAMERA MECHANISM COW GRAND FUNNY INSURANCE REDUCTION STRICT LESSON TIGHT SAND PLATE QUALIFY ELSEWHERE MAD INTERFERENCE PUPIL FOLD ROYAL VALUABLE WHISPER ANYBODY HURT EXCESS QUANTITY FUN MUD EXTENSION RECOGNITION KISS CROP SAIL ATTRACTIVE HABIT RELIEVE WISDOM PERSUADE CERTAINTY CLOTH EAGER DESERVE SYMPATHETIC CURE TRAP PUZZLE POWDER RAW MANKIND GLAD BLAME WHENEVER ANXIETY BUS TREMBLE SACRED FORTUNATE GLORY GOLDEN NEAT WEEKEND TREASURY OVERCOME CAT SACRIFICE COMPLAIN ELECT ROAR SAKE TEMPLE SELF COMPETE NURSE STUFF STOMACH PECULIAR REPAIR STORM TON DESERT ALLOWANCE SERVANT HUNGER CONSCIENCE BREAD CRASH TIP STRENGTHEN PROOF GENEROUS SIR TONIGHT WHIP TONGUE MILL MERCHANT COAL RUIN INTRODUCTION COURAGE ACTOR BELT STIR PACKAGE PUNISH REFLECTION BREATHE ANYWHERE AMUSE DULL FATE NET FELLOWSHIP FAULT FURNITURE BEAM PENCIL BORDER DISAPPOINT FLAME JOKE BLESS CORN SHELL TEMPT SUPPER DESTRUCTION DIVE ANXIOUS SHINE CHEAP DISH DISTANT GREET FLOOD EXCUSE OCEAN CEREMONY DECREASE PRIZE HARM INSURE VERSE POT SINCERE COTTON LEAF RUB MEDICINE STROKE BITE LUNG LONELY ADMISSION STUPID SCRATCH COMPOSITION BROADCAST DRUM RESIST NEGLECT ABSENT PASSENGER ADVENTURE BEG PIPE BEARD BOLD MEANWHILE DEVIL CHEER NUT SPLIT MELT SWEAR SUGAR BURY WIPE FAINT CREATURE TAIL WEALTH EARNEST TRANSLATE SUSPICION NOBLE INQUIRY JOURNEY HESITATE EXTRAORDINARY BORROW OWE FUNERAL AMBITION MIXTURE SLOPE CRIMINAL SELDOM MAP SPIN PRAISE SPARE PLOW TELEGRAPH BARREL STRAIGHTEN SCARCE LUNCH SLAVERY CREEP SWEAT GAY STIFF BRAVE SEIZE CONVENIENT HORIZON MODERATE COMPLICATE DIG CURSE WEIGH PRIEST EXCESSIVE QUARREL WIDOW MODEST DINE POLITICIAN CUSTOM EDUCATE SALESMAN NAIL TAP EASTERN POSSESSION SATISFACTION BEHAVE MERCY SCATTER OBJECTION SILVER TENT SADDLE WRAP NEST GRIND SPELL PLASTER ARCH SWELL FRIENDSHIP BATH BUNDLE GRATEFUL CROWN BOUNDARY NOWHERE ASLEEP CLOCK BOIL ALTOGETHER LEND HOLIDAY PRECIOUS WANDER UGLY REPUTATION TICKET PRETEND DISMISS DELICATE DESPAIR AWAKE TEA FALSE FORTUNE CAP THREAD HASTE BARE SHIRT BARGAIN LEATHER RAIL BUTTER DOT INQUIRE WARMTH DECISIVE VESSEL PITY STEAM PIN BOUND COMPANION TOE REWARD FORBID WHEREVER TOWER BATHE LODGE SWALLOW MULTIPLY BOW KINGDOM GARAGE PERMISSION PUMP PREVENTION URGENT AUNT ZERO IDLE FEVER CHRISTMAS REGRET JAW SOAP PRONOUNCE EMPIRE BOWL OUTLINE ORGAN IMITATION CAUTION MINERAL DISAGREE BLADE TRICK TREASURE IMMENSE CONVENIENCE DISAPPROVE DESTRUCTIVE FORK NOON OWNERSHIP TUNE POLISH POISON SHAME LOYALTY COTTAGE ASTONISH SHAVE FEATHER SAUCE LID DEBT FADE CONFESS CLASSIFICATION DESCEND CAPE MILD CLEVER ENVELOPE INVENTION SHEEP SPLENDID STAMP FLOAT BRICK RICE BUSINESSMAN BACKWARD QUALIFICATION ARTIFICIAL ATTRACTION LAMP CURL SHOWER ELDER BUNCH BELL STEER FLAVOR SPIT ROB CREAM INTERRUPT PEN WEAVE ORANGE RESCUE CRUSH HUMBLE FANCY DECAY POLITE TRIBE BLEED COIN FOND AUTUMN CLASSIFY OMIT LOYAL NEEDLE LESSEN COMPLAINT PAD STEEP SKIRT CURTAIN CALCULATION LAUGHTER SOLEMN GREASE INTERFERE EXPLODE FASTEN FLAG RESIGN POSTPONE PATIENCE BOAST ROPE ENVY AIRPLANE RID SHIELD VEIL KNEEL TRAY EXPLOSIVE BRASS TAXI WAX DUCK BUTTON INVENT REMEDY BUSH THUNDER WEAKEN POVERTY SCRAPE ARROW TENDER CRUEL SOFTEN MOUSE HAY ANYHOW ALIKE CIRCULAR JUICE SHELF BAKE HATRED CAUTIOUS BASKET WRECK WIDTH CONFIDENT LOG HEAP SUCK LADDER GAP OBEY HUT AXE TRANSLATION COLLAR DELIVERY REPRODUCE CONFESSION PAN PREJUDICE VOYAGE TOBACCO SIMPLICITY PASTE CAKE ELEPHANT RIBBON HARVEST ASHAMED CAVE CUSTOMARY THIEF DAMP SEW RUST SEPARATION WAITER PET STRAW UPSET TOWEL REFRESH ESSENCE FUR AMBITIOUS DEFENDANT DAYLIGHT DIP SUSPICIOUS IMAGINARY ASH CARRIAGE EDUCATOR SAW STOVE RUBBER RUG MISERY AWKWARD RIVAL ROAST DEED PREFERENCE EXPLOSION THEATRICAL CULTIVATE COLLECTOR MISERABLE WRIST RABBIT ACCUSTOM TIDE INSULT THUMB LUMP ANNOY TOY HEAL SHALLOW REPETITION SOUP WHISTLE SCENERY";
        }
        SplitStringToVector(vecStr, str," ", 0);
    }
    
    /********
     vecStr: 用于存储结果的vector
     strSource: 被分解的字符串
     strSplit: 分隔符
     nSkip:  开头忽略的字符数目，默认为0
     ********/
    void SplitStringToVector( vector<string> &vecStr, string strSource, string strSplit, int nSkip)
    {
        vector<string>::size_type sPos = nSkip;
        vector<string>::size_type ePos = strSource.find( strSplit, sPos );
        while( ePos != string::npos )
        {
            if( sPos != ePos ) vecStr.push_back( strSource.substr( sPos, ePos - sPos ) );
            sPos = ePos + strSplit.size();
            ePos = strSource.find( strSplit, sPos );
        }
        if( sPos < strSource.size() ) vecStr.push_back( strSource.substr( sPos, strSource.size() - sPos ) );
    }
    
    std::wstring s2ws(const std::string& str)
    {
        using convert_typeX = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<convert_typeX, wchar_t> converterX;
        
        return converterX.from_bytes(str);
    }
    
    std::string ws2s(const std::wstring& wstr)
    {
        using convert_typeX = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<convert_typeX, wchar_t> converterX;
        
        return converterX.to_bytes(wstr);
    }
}