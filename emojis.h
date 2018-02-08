enum unicode_name {
	ASTON,  // astonished face
	BHART,  // broken heart:
	BICEPS, // strong arm
	BYE,    // waving hand
	CELEB,  // celebration 🙌
	CLAP,   // hand clapping
	CONFU,  // confused
	COOL,   // smile with sunglasses 😎
	CRY,    // crying face 😭
	CRY2,   // crying face 😢
	DISAP,  // disappointed
	EYERT,  // smiling face with heart shaped eyes 😍
	EYES,   // eyes
	FEAR,   // face screaming in fear
	FLUSH,  // flushed 😳
	GRIN,   // grinning face 😊
	HALO,   // smiling face with halo
	HART2,  // two hearts 💕
	HEART,  // heart ❤
	HORNS,  // smiling face with horns
	HUG,    // hug emoji
	HUNRD,  // 100
	KISS,   // kiss 😘
	LOL,    // lol face
	MOON,   // moon
	MUNCH,  // munch's scream
	MUSIC,  // musical notes
	NOEVH,  // hear no evil
	NOEVK,  // speak no evil
	NOEVS,  // see no evil
	NOSEE,  // monkey can't see
	OKHND,  // ok hand sign 👌
	PALM,   // palm face
	PENSV,  // pensive 😔
	PHEW,   // relieved 😌
	POO,    // pile of poo
	PRAY,   // pray 🙏
	RAGE,   // angry face
	RECYC,  // recycle ♻
	SHRUG,  // shrug emoji
	SKULL,  // skull
	SLEEP,  // sleeping face
	SMEYE,  // smiling face with smiling eyes 😊
	SMILE,  // grining face with smiling eyes 😁
	SMIRK,  // smirk 😏
	SUN,    // sun
	SWEAT,  // smiling face with open mouth & sweat
	THINK,  // thinking face
	THMDN,  // thumb down 👎
	THMUP,  // thumb up 👍
	TJOY,   // tears of joy 😂
	TONGU,  // face with tongue & winking eye
	UNAMU,  // unamused 😒
	VIC,    // victory hand
	WEARY,  // weary 😩
	WINK,   // wink 😉
	YUMMY,  // face savoring delicious food
};

const uint32_t PROGMEM unicode_map[] = {
	[ASTON] = 0x1F632,
	[BICEPS] = 0x1F4AA,
	[HUG] = 0x1F917,
	[LOL] = 0x1F923,
	[MUNCH] = 0x1F631,
	[NOSEE] = 0x1F648,
	[PALM] = 0x1F926,
	[RAGE] = 0x1F621,
	[SHRUG] = 0x1F937,
	[THINK] = 0x1F914,
  [BHART] = 0x1F494,
  [BYE] = 0x1F44B,
  [CELEB] = 0x1F64C,
  [CLAP] = 0x1F44F,
  [CONFU] = 0x1F615,
  [COOL] = 0x1F60E,
  [CRY2] = 0x1F622,
  [CRY] = 0x1f62d,
  [DISAP] = 0x1F61E,
  [EYERT] = 0x1f60d,
  [EYES] = 0x1F440,
  [FEAR] = 0x1F631,
  [FLUSH] = 0x1F633,
  [GRIN] = 0x1F600,
  [HALO] = 0x1F607,
  [HART2] = 0x1F495,
  [HEART] = 0x2764,
  [HORNS] = 0x1F608,
  [HUNRD] = 0x1F4AF,
  [KISS] = 0x1F618,
  [MOON] = 0x1F314,
  [MUSIC] = 0x1F3B6,
  [NOEVH] = 0x1F649,
  [NOEVK] = 0x1F64A,
  [NOEVS] = 0x1F648,
  [OKHND] = 0x1F44C,
  [PENSV] = 0x1F614,
  [PHEW] = 0x1F60C,
  [POO] = 0x1F4A9,
  [PRAY] = 0x1F64F,
  [RECYC] = 0x267B,
  [SKULL] = 0x1F480,
  [SLEEP] = 0x1F634,
  [SMEYE] = 0x1F60A,
  [SMILE] = 0x1F601,
  [SMIRK] = 0x1F60F,
  [SUN] = 0x2600,
  [SWEAT] = 0x1F605,
  [THMDN] = 0x1F44E,
  [THMUP] = 0x1F44D,
  [TJOY] = 0x1F602,
  [TONGU] = 0x1F61C,
  [UNAMU] = 0x1F612,
  [VIC] = 0x270C,
  [WEARY] = 0x1F629,
  [WINK] = 0x1F609,
  [YUMMY] = 0x1F60B,
};
