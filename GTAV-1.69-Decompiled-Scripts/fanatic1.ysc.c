#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	Hash hLocal_37 = 0;
	int iLocal_38 = 10;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	BOOL bLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 2;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 6;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 5;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 6;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	BOOL bLocal_161 = 0;
	BOOL bLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	BOOL bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	BOOL bLocal_168 = 0;
	BOOL bLocal_169 = 0;
	BOOL bLocal_170 = 0;
	int iLocal_171 = 0;
	BOOL bLocal_172 = 0;
	char* sLocal_173 = 0;
	var uLocal_174 = 0;
	char* sLocal_175 = 0;
	var uLocal_176 = 0;
	char* sLocal_177 = 0;
	var uLocal_178 = 0;
	Hash hLocal_179 = 0;
	int iLocal_180 = 0;
	var uLocal_181 = 16;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	int iLocal_346 = 0;
	Ped pedLocal_347 = 0;
	Blip blLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	float fLocal_353 = 0f;
	float fLocal_354 = 0f;
	float fLocal_355 = 0f;
	float fLocal_356 = 0f;
	float fLocal_357 = 0f;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	BOOL bLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	var uLocal_366 = 2;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	var uLocal_371 = 3;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	char* sLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = -1;
	char* sLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = -1;
	char* sLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = -1;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	var uLocal_396 = 3;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = -1;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = -1;
	char* sLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = -1;
	char* sLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = -1;
	char* sLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = -1;
	char* sLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = -1;
	char* sLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = -1;
	char* sLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = -1;
	char* sLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = -1;
	Ped pedLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	float fLocal_451 = 0f;
	Hash hLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	char* sLocal_456 = 0;
	Cam caLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 1065353216;
	var uLocal_464 = 1065353216;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 1065353216;
	var uLocal_469 = 1065353216;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 1065353216;
	var uLocal_474 = 1065353216;
	var uLocal_475 = 0;
	var uLocal_476 = 1040187392;
	var uLocal_477 = 1040187392;
	var uLocal_478 = -1;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	int iLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 1065353216;
	var uLocal_486 = 1065353216;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 1065353216;
	var uLocal_491 = 1065353216;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 1065353216;
	var uLocal_496 = 1065353216;
	var uLocal_497 = 0;
	var uLocal_498 = 1040187392;
	var uLocal_499 = 1040187392;
	var uLocal_500 = -1;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	int iLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 1065353216;
	var uLocal_508 = 1065353216;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 1065353216;
	var uLocal_513 = 1065353216;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 1065353216;
	var uLocal_518 = 1065353216;
	var uLocal_519 = 0;
	var uLocal_520 = 1040187392;
	var uLocal_521 = 1040187392;
	var uLocal_522 = -1;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	int iLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 1065353216;
	var uLocal_530 = 1065353216;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 1065353216;
	var uLocal_535 = 1065353216;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 1065353216;
	var uLocal_540 = 1065353216;
	var uLocal_541 = 0;
	var uLocal_542 = 1040187392;
	var uLocal_543 = 1040187392;
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	Ped pedLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560 = 0;
	Ped pedLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 4;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	Hash hLocal_623 = 0;
	int iLocal_624 = 0;
	Ped pedLocal_625 = 0;
	Ped pedLocal_626 = 0;
	Ped pedLocal_627 = 0;
	Ped pedLocal_628 = 0;
	Ped pedLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	Ped pedLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	float fLocal_651 = 0f;
	int iLocal_652 = 0;
	char* sLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	Blip blLocal_670 = 0;
	Blip blLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	var uLocal_676 = 10;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	float fLocal_716 = 0f;
	float fLocal_717 = 0f;
	float fLocal_718 = 0f;
	float fLocal_719 = 0f;
	float fLocal_720 = 0f;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	var uScriptParam_723 = 0;
	var uScriptParam_724 = 0;
	var uScriptParam_725 = 0;
	var uScriptParam_726 = 0;
	var uScriptParam_727 = 0;
	var uScriptParam_728 = 0;
	var uScriptParam_729 = 0;
	var uScriptParam_730 = 0;
	var uScriptParam_731 = 0;
	var uScriptParam_732 = 0;
	var uScriptParam_733 = 0;
	var uScriptParam_734 = 0;
	var uScriptParam_735 = 0;
	var uScriptParam_736 = 0;
	var uScriptParam_737 = 0;
	var uScriptParam_738 = 0;
	var uScriptParam_739 = 0;
	var uScriptParam_740 = 2;
	var uScriptParam_741 = 0;
	var uScriptParam_742 = 0;
	var uScriptParam_743 = 0;
	var uScriptParam_744 = 0;
	var uScriptParam_745 = 0;
	var uScriptParam_746 = 0;
	var uScriptParam_747 = 0;
	var uScriptParam_748 = 0;
	var uScriptParam_749 = 0;
	var uScriptParam_750 = 0;
	var uScriptParam_751 = 6;
	var uScriptParam_752 = 0;
	var uScriptParam_753 = 0;
	var uScriptParam_754 = 0;
	var uScriptParam_755 = 0;
	var uScriptParam_756 = 0;
	var uScriptParam_757 = 0;
	var uScriptParam_758 = 5;
	var uScriptParam_759 = 0;
	var uScriptParam_760 = 0;
	var uScriptParam_761 = 0;
	var uScriptParam_762 = 0;
	var uScriptParam_763 = 0;
	var uScriptParam_764 = 6;
	var uScriptParam_765 = 0;
	var uScriptParam_766 = 0;
	var uScriptParam_767 = 0;
	var uScriptParam_768 = 0;
	var uScriptParam_769 = 0;
	var uScriptParam_770 = 0;
	var uScriptParam_771 = 0;
	var uScriptParam_772 = 0;
	var uScriptParam_773 = 0;
	var uScriptParam_774 = 0;
	var uScriptParam_775 = 0;
	var uScriptParam_776 = 0;
	var uScriptParam_777 = 0;
	var uScriptParam_778 = 0;
	var uScriptParam_779 = 0;
	var uScriptParam_780 = 0;
	var uScriptParam_781 = 0;
	var uScriptParam_782 = 0;
	var uScriptParam_783 = 0;
#endregion

void main() // Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_83 = 1;
	iLocal_84 = 65;
	iLocal_85 = 49;
	iLocal_86 = 64;
	iLocal_90 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_91 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_93 = func_494(CHAR_MARY_ANN);
	bLocal_165 = true;
	iLocal_167 = 1;
	iLocal_351 = 1800;
	iLocal_352 = 4500;
	fLocal_353 = 1.025f;
	fLocal_354 = fLocal_353;
	fLocal_355 = 3f;
	fLocal_356 = fLocal_355;
	fLocal_357 = -1f;
	uLocal_448 = { -2002.52f, -503.53f, 11.27f };
	fLocal_451 = 0.13f;
	hLocal_452 = joaat("scorcher");
	hLocal_623 = joaat("A_F_Y_Fitness_01");
	uLocal_630 = { -1818.96f, -751.5f, 7.99f };
	iLocal_641 = -1;
	iLocal_642 = -1;
	uLocal_648 = { -1957.213f, -555.2614f, 11.083831f };
	fLocal_651 = -87.35699f;
	sLocal_653 = "Fanatic1MaryAnn";
	uLocal_667 = { -2005.65f, -508.08f, 10.76f };
	iLocal_708 = 1;
	fLocal_716 = 40f;
	fLocal_717 = 0.35f;
	fLocal_718 = 0f;
	fLocal_719 = -0.8f;
	fLocal_720 = -0.05f;
	uLocal_94 = { uScriptParam_723 };
	func_492(&uLocal_94);
	MISC::SET_MISSION_FLAG(true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_491("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		func_472(true);
		func_460();
	}

	if (_IS_MISSION_REPLAY_IN_PROGRESS() || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		Global_79635 = true;
		iLocal_92 = 0;
	
		while (!func_450(&uLocal_94))
		{
			SYSTEM::WAIT(0);
		}
	
		Global_79635 = false;
	}

	func_449(2, true);
	pedLocal_347 = uLocal_94.f_28[0];
	bLocal_172 = func_448(CHAR_MICHAEL);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);

	if (_IS_MISSION_REPLAY_IN_PROGRESS() || _IS_MISSION_REPEAT_ACTIVE(false))
	{
		func_447(&uLocal_94, false, true);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
			ENTITY::SET_ENTITY_PROOFS(pedLocal_347, false, false, false, false, false, false, false, false);
	
		func_445(-1878.2344f, -439.6985f, 45.0299f, 241.0468f, 1, 0);
		func_443();
	
		if (!_IS_MISSION_REPEAT_ACTIVE(false))
		{
			switch (func_442())
			{
				case 0:
					JUMP_TO_STAGE(1);
					break;
			}
		}
		else if (_IS_MISSION_REPLAY_IN_PROGRESS())
		{
			switch (func_442())
			{
				case 0:
					JUMP_TO_STAGE(1);
					break;
			}
		}
		else
		{
			JUMP_TO_STAGE(0);
		}
	}

	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_EDM", 0);
		SYSTEM::WAIT(0);
		func_411(uLocal_94.f_9, 1, 0, 0, 0, 0);
		func_404();
		func_386();
		func_385();
	
		if (iLocal_156 != 0 && iLocal_156 != 1 && iLocal_156 != 10 && iLocal_156 != 9)
		{
			if (iLocal_156 != 8)
				func_384();
		
			func_371();
			func_369();
		}
		else if (iLocal_156 == 0)
		{
			func_367();
		}
		else if (iLocal_156 == 1)
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedLocal_347, 2.3f);
		}
	
		switch (iLocal_156)
		{
			case 0:
				func_366();
				break;
		
			case 1:
				func_354();
				break;
		
			case 2:
				START_RUNNING();
				break;
		
			case 3:
				ROAD_RUNNING_SECTION();
				break;
		
			case 4:
				STEPS_DOWN();
				break;
		
			case 5:
				SPRINT_TO_FINISH();
				break;
		
			case 6:
				func_320();
				break;
		
			case 7:
				STAGE_PLAYER_IN_VEHICLE();
				break;
		
			case 8:
				func_43();
				break;
		
			case 9:
				func_41();
				break;
		
			case 10:
				func_1();
				break;
		}
	}

	return;
}

void func_1() // Position - 0x3A1
{
	char* str;

	switch (iLocal_155)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
		
			if (iLocal_158 != 2)
			{
				if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				{
					_DEBUG_PRINT("Killing conversation in fail state");
					func_37();
				}
			}
			else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_AGGRO", 9, 0, 0, 0))
					_DEBUG_PRINT("Playing aggro convo with subs");
			}
			else
			{
				_DEBUG_PRINT("Convo already active when failing for scaring Mary Ann - playing without subs asap?");
				func_15();
				_CONVERSATION_ADD_LINE_NO_SUBTITLE(&uLocal_181, "FAN1AU", "FAN1_AGGRO", 8, 0, 0);
			}
		
			func_12(&blLocal_348);
			func_12(&blLocal_670);
			func_12(&blLocal_671);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_672);
		
			if (iLocal_158 == 1 || iLocal_158 == 0 || iLocal_158 == 2)
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
					TASK::TASK_SMART_FLEE_PED(pedLocal_347, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
		
			switch (iLocal_158)
			{
				case 0:
					str = "FATIC1_F8";
					break;
			
				case 2:
					str = "FATIC1_F2";
					break;
			
				case 1:
					str = "FATIC1_F1";
					break;
			
				case 3:
					str = "FATIC1_F5";
					break;
			
				case 4:
					str = "FATIC1_F3";
					break;
			
				case 5:
					str = "FATIC1_F7";
					break;
			
				case 6:
					str = "FATIC1_F6";
					break;
			
				default:
					break;
			}
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
				func_10(str, true);
			else
				func_472(true);
		
			iLocal_155 = 1;
			break;
	
		case 1:
			if (func_9())
			{
				func_5();
				func_4(true);
				func_2(CHAR_MICHAEL, bLocal_172);
				func_460();
			}
			break;
	}

	return;
}

void func_2(eCharacter echParam0, BOOL bParam1) // Position - 0x522
{
	if (!func_3(echParam0))
		return;

	Global_113969.f_2366.f_539.f_2332[echParam0] = bParam1;
	return;
}

BOOL func_3(eCharacter echParam0) // Position - 0x54A
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_4(BOOL bParam0) // Position - 0x556
{
	if (bLocal_165 != bParam0)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1708.314f, -574.0266f, 36.873383f, -2044.7664f, -370.91672f, 9.152167f, 27.25f, false, bParam0, true);
		bLocal_165 = bParam0;
	}

	return;
}

void func_5() // Position - 0x594
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_347, 0);

	func_8(&pedLocal_347);
	func_8(&pedLocal_625);
	func_8(&pedLocal_627);
	func_8(&pedLocal_628);
	func_8(&pedLocal_626);
	func_8(&pedLocal_647);
	func_8(&uLocal_574[0 /*12*/]);
	func_8(&uLocal_574[1 /*12*/]);
	func_8(&uLocal_574[2 /*12*/]);
	func_8(&uLocal_574[3 /*12*/]);
	func_8(&pedLocal_547);
	func_8(&(pedLocal_547.f_1));
	func_8(&pedLocal_561);
	func_8(&(pedLocal_561.f_1));
	func_6(&(pedLocal_547.f_2));
	func_6(&(pedLocal_561.f_2));
	func_6(&pedLocal_629);
	func_6(&pedLocal_447);
	return;
}

void func_6(Vehicle* pveParam0) // Position - 0x641
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);
	
		if (func_7(*pveParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
						return;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(pveParam0);
			}
		}
		else
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
					return;
				}
			}
		
			VEHICLE::DELETE_VEHICLE(pveParam0);
		}
	}

	return;
}

BOOL func_7(Ped pedParam0) // Position - 0x6DD
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(pedParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(pedParam0))
				return true;

	return false;
}

void func_8(Ped* ppedParam0) // Position - 0x707
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
	
		PED::DELETE_PED(ppedParam0);
	}

	return;
}

BOOL func_9() // Position - 0x748
{
	if (Global_4)
		return true;

	if (Global_101533 == 7 || Global_101533 == 8)
		return true;

	return false;
}

void func_10(char* sParam0, BOOL bParam1) // Position - 0x775
{
	_SET_MISSION_FAIL_REASON(sParam0);
	func_472(bParam1);
	return;
}

void _SET_MISSION_FAIL_REASON(char* sParam0) // Position - 0x789
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_79622, sParam0, 16);
			TEXT_LABEL_ASSIGN_STRING(&Global_79626, "", 16);
		
			if (RECORDING::IS_REPLAY_RECORDING())
				RECORDING::STOP_REPLAY_RECORDING();
		}
	}

	return;
}

void func_12(Blip* pblParam0) // Position - 0x7C9
{
	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::SET_BLIP_ROUTE(*pblParam0, false);
		HUD::REMOVE_BLIP(pblParam0);
	}

	return;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x7E9
{
	func_14(uParam0, _CHAR_NULL, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	MISC::SET_BIT(&Global_21152, 0);
	Global_22289 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_22276, sParam2, 24);
	return;
}

void func_14(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x824
{
	Global_21740 = { *uParam0 };
	Global_8116 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;

	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}

	return;
}

void func_15() // Position - 0x87A
{
	Global_21152 = 0;
	func_16();
	return;
}

void func_16() // Position - 0x88A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9 || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x8E1
{
	func_14(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22293 = false;
	Global_22295 = false;
	Global_22300 = false;
	Global_23277 = 0;
	Global_23279 = false;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_18(sParam2, iParam3, false);
}

BOOL func_18(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x92F
{
	Global_22287 = 0;

	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = false;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = false;
					Global_22296 = false;
					Global_20929 = 0;
				}
				else
				{
					func_16();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_36(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_35();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
	
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20930.f_1 > 3)
					return 0;
			}
		
			if (Global_20896 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_27())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_79389)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8800, 9))
					return 0;
			}
		
			func_25();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_24();
		func_19();
		return 1;
	}

	if (Global_22286 == 5)
		return 0;

	if (iParam1 < Global_22288 || iParam1 == Global_22288)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_16();
	}

	return 0;
}

void func_19() // Position - 0xBFD
{
	if (!func_20())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_20() // Position - 0xC34
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_21(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_21(Player plParam0) // Position - 0xC97
{
	return func_22(plParam0, 20);
}

BOOL func_22(Player plParam0, int iParam1) // Position - 0xCA7
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0xCBF
{
	return -1;
}

void func_24() // Position - 0xCC8
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21154[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
	return;
}

void func_25() // Position - 0xCFA
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = false;
	Global_22335 = 0;
	Global_22336 = false;
	MISC::CLEAR_BIT(&Global_8801, 16);
	return;
}

BOOL func_26() // Position - 0xD8F
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_27() // Position - 0xDB6
{
	int num;
	int weaponHash;

	if (Global_79389)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && num == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xE4F
{
	if (func_34(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
				Global_20930 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
				Global_20930 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
				Global_20930 = CHAR_TREVOR;
			else
				Global_20930 = CHAR_MICHAEL;
	}
	else
	{
		Global_20930 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20930 == _CHAR_NULL)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_79389)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_20930 > CHAR_MULTIPLAYER)
			Global_20930 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xEF1
{
	func_30();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_30() // Position - 0xF0A
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_3(character) && !func_34(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_3(Global_113969.f_2366.f_539.f_4321))
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
			
				Global_113969.f_2366.f_539.f_4323 = character;
				Global_113969.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_113969.f_2366.f_539.f_4321 = 145;
	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1007
{
	eCharacter i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1044
{
	if (func_3(character))
		return func_33(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_33(eCharacter echParam0) // Position - 0x1069
{
	return Global_2169[echParam0 /*29*/];
}

BOOL func_34(int iParam0) // Position - 0x1078
{
	return Global_44042 == iParam0;
}

void func_35() // Position - 0x1086
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21575[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21575[i /*10*/].f_1), "", 24);
		Global_21575[i /*10*/].f_7 = 0;
		Global_21575[i /*10*/].f_8 = 0;
	}

	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_36(int iParam0, int iParam1) // Position - 0x10DE
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1668667.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1668667.f_1048, iParam0);
}

void func_37() // Position - 0x1116
{
	Global_21152 = 0;
	func_38();
	return;
}

void func_38() // Position - 0x1126
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}

	return;
}

void _DEBUG_PRINT(char* sParam0) // Position - 0x1147
{
	sParam0 = sParam0;
	return;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x1153
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_41() // Position - 0x1175
{
	int num;

	switch (iLocal_155)
	{
		case 0:
			_DEBUG_PRINT("In setup for Lost Race");
			func_12(&blLocal_348);
			func_12(&blLocal_670);
			func_12(&blLocal_671);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_672);
			num = _GET_RANDOM_BOOL();
		
			if (iLocal_346 == 0)
			{
				if (num == 1)
				{
					_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_LOSE", 8, 0, 0, 0);
					_DEBUG_PRINT("Doing 'FAN1_LOSE'");
				}
				else
				{
					_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_LOSE2", 8, 0, 0, 0);
					_DEBUG_PRINT("Doing 'FAN1_LOSE2'");
				}
			}
		
			TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_PLAY_ANIM(0, "rcmfanatic1celebrate", "celebrate", 4f, -16f, -1, 286720, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 16f, -4f, -1, 270337, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			_DEBUG_PRINT("Going into loop for Lost Race");
			iLocal_155 = 1;
			break;
	
		case 1:
			if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				_DEBUG_PRINT("No conversation going in Lost Race, failing properly now");
				AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
				iLocal_158 = 5;
				iLocal_155 = 0;
				iLocal_156 = 10;
			}
			break;
	}

	return;
}

int _GET_RANDOM_BOOL() // Position - 0x1296
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return 1;

	return 0;
}

void func_43() // Position - 0x12B4
{
	int r;
	int g;
	int b;
	var a;
	int weaponHash;
	int i;
	int point;

	if (iLocal_673 != 0)
	{
		_DEBUG_PRINT("Fade previous CP");
		iLocal_674 = iLocal_674 - 25;
	
		if (iLocal_674 > 0)
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_673, r, g, b, iLocal_674);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_673, r, g, b, iLocal_674);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_673);
		}
	}

	switch (iLocal_155)
	{
		case 0:
			func_12(&blLocal_670);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_672);
		
			if (func_318(pedLocal_647))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_647);
				TASK::TASK_SMART_FLEE_PED(pedLocal_647, PLAYER::PLAYER_PED_ID(), 40f, -1, false, false);
			}
		
			if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				_DEBUG_PRINT("stop scripted conversation at END_CUTSCENE");
				func_37();
			}
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_347, true, 1);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(pedLocal_347, KNOCKOFFVEHICLE_NEVER);
			}
		
			iLocal_163 = 0;
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FINISH");
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, false);
		
			if (weaponHash != joaat("WEAPON_UNARMED"))
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		
			if (bLocal_168)
			{
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, 0);
				func_309(-2010.693f, -504.88205f, 9.529695f, -1995.9468f, -517.2494f, 13.764661f, 10f, -2008.54f, -494.1f, 11.04f, 48.19f, func_317(), true, true, true, false, false);
				func_305(uLocal_667, 1, 1, 1, 1, 1, false, true, true, 1, true);
				func_304();
			
				if (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) > 32f)
				{
					ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1986.2f, -526.22f, 11f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(pedLocal_347, 58.26f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_653, func_300(), 1040, -1);
					TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
					PED::FORCE_PED_MOTION_STATE(pedLocal_347, joaat("MotionState_Run"), true, 1, false);
				}
			
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_347, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_667, 1f, 20000, 0.5f, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), true, 0, false);
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1out_of_breath");
			
				while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1out_of_breath"))
				{
					_DEBUG_PRINT("Loading ANIMS");
					SYSTEM::WAIT(0);
				}
			
				iLocal_455 = 0;
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1out_of_breath");
			
				while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1out_of_breath"))
				{
					_DEBUG_PRINT("Loading ANIMS");
					SYSTEM::WAIT(0);
				}
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_447))
			{
				STREAMING::REQUEST_MODEL(hLocal_452);
			
				while (!STREAMING::HAS_MODEL_LOADED(hLocal_452))
				{
					_DEBUG_PRINT("Loading MARYSBIKE MODEL");
					SYSTEM::WAIT(0);
				}
			
				pedLocal_447 = VEHICLE::CREATE_VEHICLE(hLocal_452, uLocal_448, fLocal_451, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_452);
			}
		
			for (i = 0; i <= 3; i = i + 1)
			{
				if (func_318(uLocal_574[i /*12*/]))
				{
					if (PED::IS_PED_IN_MELEE_COMBAT(uLocal_574[i /*12*/]) || PED::IS_PED_RESPONDING_TO_EVENT(uLocal_574[i /*12*/], 55) || PED::IS_PED_RESPONDING_TO_EVENT(uLocal_574[i /*12*/], 42))
					{
						TASK::CLEAR_PED_TASKS(uLocal_574[i /*12*/]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_574[i /*12*/], iLocal_180);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
						func_299(&uLocal_574[i /*12*/], true, 0, 1);
					}
				}
			}
		
			iLocal_454 = 0;
			iLocal_155 = 1;
			break;
	
		case 1:
			func_298();
			func_297();
			func_291(0);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_COVER, true);
		
			switch (iLocal_453)
			{
				case 1:
					if (bLocal_168)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							if (iLocal_455 == 0)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1out_of_breath", "base", 8f, -8f, -1, 1, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_180);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
								iLocal_455 = 1;
							}
						}
					
						if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_347, uLocal_667, 5f, 5f, 3f, false, true, 0) && iLocal_455 == 1)
						{
							if (iLocal_159 == 0)
								sLocal_456 = "FAN1_DONE_2";
							else if (iLocal_159 == 1)
								sLocal_456 = "FAN1_DONE_3";
						
							if (func_288(&uLocal_181, "FAN1AU", "FAN1_DONE", "FAN1_DONE_1", "FAN1_DONE", sLocal_456, "FAN1_DONE", "FAN1_DONE_4", "FAN1_DONE", "FAN1_DONE_5", 7, 0, 0))
								iLocal_453 = 2;
						}
					}
					else
					{
						func_287();
					
						if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_653, ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), &point);
						
							if (point >= 125)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "jogging_up", 8f, -16f, -1, 262144, 0, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "jogging_on_spot", 16f, -4f, -1, 262145, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_347, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							
								if (iLocal_159 == 0)
									sLocal_456 = "FAN1_DONE_2";
								else if (iLocal_159 == 1)
									sLocal_456 = "FAN1_DONE_3";
							
								if (func_288(&uLocal_181, "FAN1AU", "FAN1_DONE", "FAN1_DONE_1", "FAN1_DONE", sLocal_456, "FAN1_DONE", "FAN1_DONE_4", "FAN1_DONE", "FAN1_DONE_5", 7, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 1);
									iLocal_453 = 2;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_347, 4000, 0, 2);
									iLocal_453 = 2;
								}
							}
						}
					}
					break;
			
				case 2:
					if (bLocal_168)
					{
						switch (iLocal_454)
						{
							case 0:
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2)
								{
									CAM::DETACH_CAM(caLocal_457);
									CAM::STOP_CAM_POINTING(caLocal_457);
									CAM::SET_CAM_PARAMS(caLocal_457, -2008.2262f, -508.2978f, 12.2798f, -9.0657f, 0f, -70.473f, 50f, 0, 1, 1, 2);
									iLocal_454 = 1;
								}
								break;
						
							case 1:
								if (func_7(pedLocal_447))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
									TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_447, -1, 0, 2);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2003.36f, -503.77f, 10.48f, 2f, 20000, 1f, 10241, 1193033728);
									TASK::TASK_ENTER_VEHICLE(0, pedLocal_447, 20000, -1, 1f, 1, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, pedLocal_447, -2014.96f, -455.47f, 10.48f, 10f, 0, hLocal_452, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, pedLocal_447, 10f, 786599);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
									PED::SET_PED_KEEP_TASK(pedLocal_347, true);
									TASK::SET_ANIM_LOOPED(PLAYER::PLAYER_PED_ID(), false, 0, false);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
									TASK::TASK_PLAY_ANIM(0, "rcmfanatic1out_of_breath", "base", 8f, -8f, -1, 0, 0, false, false, false);
									TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_347, -1, 0, 2);
									TASK::TASK_TURN_PED_TO_FACE_COORD(0, -2000.81f, -496.56f, 10.56f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_180);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
								}
							
								iLocal_453 = 3;
								break;
						}
					}
					else
					{
						func_287();
						func_285();
					
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2)
						{
							if (!bLocal_169)
							{
								if (func_7(pedLocal_447))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_447, -1, 0, 2);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2003.36f, -503.77f, 10.48f, 2f, 20000, 1f, 2049, 1193033728);
									TASK::TASK_ENTER_VEHICLE(0, pedLocal_447, 20000, -1, 2f, 1, 0, 0);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, pedLocal_447, -2018.17f, -461f, 10.56f, 10f, 0, hLocal_452, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, pedLocal_447, -2014.96f, -455.47f, 10.48f, 10f, 0, hLocal_452, 8, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, pedLocal_447, 10f, 786599);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
									PED::SET_PED_KEEP_TASK(pedLocal_347, true);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
								PED::SET_PED_KEEP_TASK(pedLocal_347, true);
							}
						
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_347, 6000, 0, 2);
							iLocal_453 = 3;
						}
					}
					break;
			
				case 3:
					if (bLocal_168)
					{
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_347, 5f, 5f, 3f, false, true, 0))
								iLocal_453 = 4;
					}
					else
					{
						func_287();
					
						if (bLocal_169)
						{
							if (!bLocal_170)
							{
								if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_347);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
									PED::SET_PED_KEEP_TASK(pedLocal_347, true);
									bLocal_170 = true;
								}
							}
						}
					
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_347, 5f, 5f, 3f, false, true, 0))
								iLocal_453 = 4;
					}
					break;
			
				case 4:
					if (bLocal_168)
					{
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						{
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_347, 5f, 5f, 3f, false, true, 0))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
								CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
								func_275(1, 1, 1, true);
								func_69();
							}
						}
					}
					else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_347, 5f, 5f, 3f, false, true, 0))
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_exit", 1000f, -2f, -1, 48, 0, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							func_69();
						}
					}
					break;
			}
		
			if (bLocal_168)
			{
				if (func_67(1000))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_275(1, 1, 1, true);
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
					func_69();
				}
			}
			else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
			{
				CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED();
				func_45();
			
				if (iLocal_453 > 1)
				{
					if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						if (func_44(PLAYER::PLAYER_PED_ID(), pedLocal_347, true) > 15f)
						{
							if (!bLocal_169)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_347, true))
								{
									if (iLocal_453 <= 2)
									{
										if (func_7(pedLocal_447))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
											TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_447, -1, 0, 2);
											TASK::TASK_ENTER_VEHICLE(0, pedLocal_447, 20000, -1, 1f, 1, 0, 0);
											TASK::TASK_CLEAR_LOOK_AT(0);
											TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, pedLocal_447, -2018.17f, -461f, 10.56f, 10f, 0, hLocal_452, 8, 3f, 50f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, pedLocal_447, -2024.98f, -479.55f, 10.57f, 10f, 0, hLocal_452, 8, 3f, 50f);
											TASK::TASK_VEHICLE_DRIVE_WANDER(0, pedLocal_447, 10f, 786599);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
											PED::SET_PED_KEEP_TASK(pedLocal_347, true);
										}
									}
								}
							}
							else if (!bLocal_170)
							{
								if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_347);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
									PED::SET_PED_KEEP_TASK(pedLocal_347, true);
									bLocal_170 = true;
								}
							}
						
							func_15();
							iLocal_453 = 4;
						}
					}
				}
			}
			break;
	}

	return;
}

float func_44(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1E90
{
	Vector3 entityCoords;
	Vector3 unk;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

void func_45() // Position - 0x1EEE
{
	if (iLocal_156 != 7 && iLocal_156 != 10 && iLocal_156 != 8 && iLocal_156 != 10 && iLocal_156 != 9)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (sLocal_177.f_1 == 0)
			{
				_DISPLAY_HELP_TEXT(sLocal_177, -1);
				sLocal_177.f_1 = 1;
			}
		
			if (func_46(pedLocal_347, 1126825984) || func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) < 7f)
			{
				iLocal_157 = iLocal_156;
				iLocal_155 = 0;
				iLocal_156 = 7;
			}
		}
	}
	else if (iLocal_156 == 8)
	{
		if (iLocal_453 != 4)
			if (func_7(pedLocal_447))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), pedLocal_447, false))
					bLocal_169 = true;
	}

	return;
}

BOOL func_46(Ped pedParam0, int iParam1) // Position - 0x1F9E
{
	return func_47(pedParam0, PLAYER::PLAYER_PED_ID(), iParam1, 1, 250, 7);
}

BOOL func_47(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1FB6
{
	BOOL flag;
	var pedBoneCoords;
	int unk;

	num = func_55(pedParam0, pedParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam1))
	{
		if (num != -1)
			func_54(&iLocal_38[num /*4*/]);
	
		return false;
	}

	if (!func_51(pedParam0, pedParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_50();
	
		if (num == -1)
			return false;
	
		iLocal_38[num /*4*/].f_1 = pedParam0;
		iLocal_38[num /*4*/].f_2 = pedParam1;
	}

	pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f) };
	flag = func_48(&iLocal_38[num /*4*/], pedBoneCoords, pedParam1, &(iLocal_38[num /*4*/].f_3), pedParam0, iParam5);
	return flag || MISC::GET_GAME_TIMER() - iLocal_38[num /*4*/].f_3 < iParam4;
}

BOOL func_48(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Ped pedParam4, var uParam5, Ped pedParam6, int iParam7) // Position - 0x2077
{
	var hit;
	var endCoords;
	var unk;
	Ped unk2;
	int surfaceNormal;

	entityHit = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		endCoords = { func_49(pedParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, endCoords + ((endCoords - vParam1) * { 0.1f, 0.1f, 0.1f }), 511, pedParam6, 7);
		return 0;
	}

	shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (shapeTestResult == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (shapeTestResult == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (ENTITY::IS_ENTITY_A_PED(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityHit) == pedParam4)
		{
			if (bLocal_79)
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entityHit) == PED::GET_VEHICLE_PED_IS_IN(pedParam4, false))
			{
				if (bLocal_79)
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_49(Ped pedParam0, int iParam1) // Position - 0x21A3
{
	int randomIntInRange;

	if (iParam1 == 7)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = randomIntInRange;
	}

	if (iParam1 == 0)
		return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
	else if (iParam1 == 1)
		return PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return PED::GET_PED_BONE_COORDS(pedParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return PED::GET_PED_BONE_COORDS(pedParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return PED::GET_PED_BONE_COORDS(pedParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return PED::GET_PED_BONE_COORDS(pedParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return PED::GET_PED_BONE_COORDS(pedParam0, 36864, 0f, 0f, 0f);

	return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
}

int func_50() // Position - 0x2268
{
	int i;

	for (i = 0; i < iLocal_38; i = i + 1)
	{
		if (iLocal_38[i /*4*/] == 0 && iLocal_38[i /*4*/].f_1 == 0 && iLocal_38[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_51(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3) // Position - 0x22B2
{
	var unk;
	var unk2;
	float unk3;

	unk = { func_53(ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_53(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_52(entityForwardVector, unk);

	if (num <= SYSTEM::COS(iParam2 / 2f))
		return false;

	return true;
}

float func_52(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x2343
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_53(float fParam0, var uParam1, var uParam2) // Position - 0x2364
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_54(var uParam0) // Position - 0x23A3
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_55(Ped pedParam0, Ped pedParam1) // Position - 0x23BE
{
	int i;

	for (i = 0; i < iLocal_38; i = i + 1)
	{
		if (iLocal_38[i /*4*/].f_1 == pedParam0 && iLocal_38[i /*4*/].f_2 == pedParam1)
			return i;
	}

	return -1;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x23FD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED() // Position - 0x2414
{
	if (ENTITY::IS_ENTITY_DEAD(pedLocal_347, false))
	{
		if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			_DEBUG_PRINT("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 1");
			func_37();
		}
	
		_DEBUG_PRINT("Mary Ann killed");
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_158 = 0;
		iLocal_155 = 0;
		iLocal_156 = 10;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_347, PLAYER::PLAYER_PED_ID(), true))
		{
			if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				_DEBUG_PRINT("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 2");
				func_37();
			}
		
			_DEBUG_PRINT("Mary Ann injured by player");
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_158 = 1;
			iLocal_155 = 0;
			iLocal_156 = 10;
		}
	
		if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(pedLocal_347, 0, 2))
		{
			if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				_DEBUG_PRINT("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 3");
				func_37();
			}
		
			_DEBUG_PRINT("Mary Ann injured by some form of weapon");
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_158 = 1;
			iLocal_155 = 0;
			iLocal_156 = 10;
		}
	}

	if (iLocal_361 == 1)
	{
		_DEBUG_PRINT("Mary Ann scared");
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
			TASK::CLEAR_PED_TASKS(pedLocal_347);
	
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_158 = 2;
		iLocal_155 = 0;
		iLocal_156 = 10;
	}
	else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
	{
		if (func_62(pedLocal_347, true, false, false, false) || func_58(pedLocal_347, true, 1116471296, 1126825984, false, false, false, false) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), 10f, false))
		{
			if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				_DEBUG_PRINT("Killing any convo before scared convo");
				func_37();
			}
		
			iLocal_361 = 1;
		}
	}

	return;
}

BOOL func_58(Ped pedParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2564
{
	float num;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
		if (func_62(pedParam0, bParam1, bParam5, bParam6, bParam7))
			return true;
	
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				num = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
			
				if ((num * num) + (num.f_1 * num.f_1) + (num.f_2 * num.f_2) <= 5f)
					return func_61(PLAYER::PLAYER_PED_ID(), pedParam0, iParam2);
			}
		}
	
		if (bParam4)
			return false;
		else if (func_59(pedParam0, iParam3))
			return true;
	}

	return false;
}

BOOL func_59(Ped pedParam0, int iParam1) // Position - 0x261F
{
	float xSize;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		if (func_60(pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				xSize = 40f;
			else
				xSize = 3f;
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, xSize, xSize, xSize, false, true, 0))
				if (func_46(pedParam0, iParam1))
					return true;
		}
	}

	return false;
}

BOOL func_60(Ped pedParam0) // Position - 0x2695
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		return true;

	return false;
}

BOOL func_61(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x26BD
{
	float entityForwardVector;
	Vector3 unk;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / SYSTEM::VDIST(vector, 0f, 0f, 0f) > SYSTEM::COS(iParam2);
}

BOOL func_62(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2704
{
	float radius;
	float num;
	int weaponHash;

	radius = 8f;
	num = 15f;

	if (bParam1 == false)
	{
		radius = 1.86f;
		num = 1.86f;
	}

	if (bParam2)
		radius = 2f;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (weaponHash == joaat("WEAPON_PETROLCAN"))
		{
			radius = 3f;
			num = 3f;
		}
	
		if (!bParam2)
		{
			if (func_66(pedParam0, bParam1, radius, num))
				return true;
		
			if (func_63(pedParam0, num, bParam3, bParam4))
				return true;
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedParam0, true), radius, true))
						return true;
			}
			else
			{
				if (bParam1)
				{
					radius = 1.86f;
					num = 1.86f;
				}
			
				if (func_66(pedParam0, bParam1, radius, num))
					return true;
			}
		
			if (func_63(pedParam0, num, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

BOOL func_63(Ped pedParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27FF
{
	float entityCoords;
	float unk;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	num = { entityCoords };
	entityCoords = entityCoords - fParam1;
	entityCoords.f_1 = entityCoords.f_1 - fParam1;
	entityCoords.f_2 = entityCoords.f_2 - fParam1;
	num = num + fParam1;
	num.f_1 = num.f_1 + fParam1;
	num.f_2 = num.f_2 + fParam1;

	if (bParam2)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_GRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_MOLOTOV"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_SMOKEGRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, true))
		{
			if (bParam3)
				if (func_64(pedParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_64(pedParam0, fParam1))
				return true;
			else
				return false;
	
		if (MISC::IS_PROJECTILE_IN_AREA(entityCoords, num, true))
			return true;
	}

	return false;
}

BOOL func_64(Ped pedParam0, float fParam1) // Position - 0x290B
{
	var outProjectile;
	var outCoords;

	if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_GRENADE"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_BZGAS"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_MOLOTOV"), fParam1, &outCoords, &outProjectile, false))
		if (func_65(pedParam0, outCoords, 90f, 0))
			return true;

	return false;
}

BOOL func_65(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0x29A0
{
	var unk;
	var unk2;
	float unk3;

	unk = { func_53(uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_53(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_52(entityForwardVector, unk);

	if (num <= SYSTEM::COS(fParam4 / 2f))
		return false;

	return true;
}

BOOL func_66(Ped pedParam0, BOOL bParam1, float fParam2, float fParam3) // Position - 0x2A2E
{
	if (bParam1)
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, fParam3, fParam3, fParam3, false, true, 0))
				return true;

	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam2, true))
		return true;

	return false;
}

BOOL func_67(int iParam0) // Position - 0x2A76
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_68())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_68() // Position - 0x2AC0
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_69() // Position - 0x2AF2
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		_DEBUG_PRINT("Stopping scripted convo at script_passed");
		func_37();
	}

	if (iLocal_159 != 1)
		func_274(763);

	HUD::CLEAR_PRINTS();
	func_267(61, 0, true);
	func_70(85, true);
	func_460();
	return;
}

void func_70(int iParam0, BOOL bParam1) // Position - 0x2B31
{
	int num;
	var unk;

	num = func_265();

	if (num == -1)
		return;

	if (!Global_113056[num /*10*/].f_4)
		return;

	if (Global_113056[num /*10*/].f_5)
		return;

	if (Global_113056[num /*10*/].f_6)
		return;

	func_236(num, false);
	MISC::SET_BIT(&Global_79638, 1);

	if (Global_113056[num /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_235(&(Global_113056[num /*10*/].f_9));
	}

	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}

	func_221(num, 1, false, false);
	func_220(0, 0);
	TEXT_LABEL_COPY(&unk, { func_218(num) }, 4);
	func_216(&unk, func_217());
	func_97();

	if (IS_BIT_SET(Global_113969.f_10019.f_25, 3))
		func_96();

	func_78();

	if (iParam0 == 210 || iParam0 == 211)
		func_72(iParam0, 406.38f, -1635.86f);
	else if (iParam0 == 111)
		func_72(iParam0, 1973.84f, 3814.89f);
	else if (iParam0 != 322)
		func_72(iParam0, 0, 0);

	func_71();
	return;
}

int func_71() // Position - 0x2C65
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101572.f_8)
		if (Global_101572.f_10 > 0)
			return 0;
	else if (Global_101572.f_10 > 1)
		return 0;

	Global_101572.f_10 = Global_101572.f_10 + 1;
	return 1;
}

void func_72(int iParam0, int iParam1, int iParam2) // Position - 0x2CB0
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == true)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_73();

	return;
}

void func_73() // Position - 0x2D96
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113969.f_10197[num /*12*/].f_5 == true)
		{
			switch (Global_113969.f_10197[num /*12*/].f_6)
			{
				case 1:
					Global_113705 = Global_113705 + 1;
					num2 = num2 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113706 = Global_113706 + 1;
					num3 = num3 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113707 = Global_113707 + 1;
					num4 = num4 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113708 = Global_113708 + 1;
					num5 = num5 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113709 = Global_113709 + 1;
					num6 = num6 + (Global_113969.f_10197[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113710 = Global_113710 + 1;
					num7 = num7 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113711 = Global_113711 + 1;
					num8 = num8 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113688 > 0)
		if (Global_113705 == Global_113688)
			num2 = 55f;

	if (Global_113689 > 0)
		if (Global_113706 == Global_113689)
			num3 = 10f;

	if (Global_113690 > 0)
		if (Global_113707 == Global_113690)
			num4 = 0f;

	if (Global_113691 > 0)
		if (Global_113708 == Global_113691)
			num5 = 10f;

	if (Global_113692 > 0)
	{
		if (Global_113709 == Global_113692 || (Global_113692 * 10) / Global_113709 < 41 || Global_113709 > Global_113695 || Global_113709 == Global_113695)
		{
			if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113693 > 0)
		if (Global_113710 == Global_113693)
			num7 = 15f;

	if (Global_113694 > 0)
		if (Global_113711 == Global_113694)
			num8 = 5f;

	Global_113969.f_10197.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
		value2 = Global_113695;
	else
		value2 = Global_113709;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113711 + Global_113710, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113694 + Global_113693, true);
	Global_113712 = (Global_113705 * 100) / Global_113688;
	Global_113714 = ((Global_113707 + Global_113706) * 100) / (Global_113690 + Global_113689);
	Global_113713 = ((Global_113708 + value2) * 100) / (Global_113691 + Global_113695);
	Global_113715 = ((Global_113710 + Global_113711) * 100) / (Global_113693 + Global_113694);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113714, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
		func_75(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_74() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113703 = false;
			
				if (!Global_64166)
					func_71();
			}
		}
	}

	return;
}

int func_74() // Position - 0x3254
{
	return Global_32948;
}

BOOL func_75(int iParam0, int iParam1) // Position - 0x325F
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x32B0
{
	if (iParam2 == -1)
		iParam2 = func_77();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_77() // Position - 0x32CE
{
	return Global_1574926;
}

void func_78() // Position - 0x32DA
{
	func_95();
	func_87();
	func_83();
	func_82();
	func_81();
	func_80();
	Global_101570 = 0;
	Global_95688 = -1;
	MISC::CLEAR_BIT(&(Global_101533.f_20), 17);
	Global_101568 = 0;
	MISC::PAUSE_DEATH_ARREST_RESTART(false);
	MISC::IGNORE_NEXT_RESTART(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
	MISC::SET_FADE_OUT_AFTER_ARREST(true);
	MISC::SET_FADE_OUT_AFTER_DEATH(true);
	func_79(0);
	return;
}

void func_79(int iParam0) // Position - 0x3333
{
	if (iParam0 == 1)
		MISC::SET_BIT(&(Global_101533.f_20), 13);
	else
		MISC::CLEAR_BIT(&(Global_101533.f_20), 13);

	return;
}

void func_80() // Position - 0x335C
{
	Global_79630 = { 0f, 0f, 0f };
	Global_79633 = 0f;
	Global_101533.f_21 = 145;
	return;
}

void func_81() // Position - 0x337A
{
	TEXT_LABEL_ASSIGN_STRING(&Global_79622, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_79626, "", 16);
	return;
}

void func_82() // Position - 0x3396
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		Global_101533.f_22[i] = 0;
	}

	return;
}

void func_83() // Position - 0x33BB
{
	Global_101533 = 13;
	Global_101533.f_1 = -1;
	Global_101533.f_2 = 0;
	Global_101533.f_30 = 0f;
	MISC::CLEAR_BIT(&(Global_101533.f_20), 25);
	Global_101567 = false;
	func_86(0);
	func_85();
	func_84();
	Global_101533.f_18 = -1;
	Global_101533.f_19 = -1;
	return;
}

void func_84() // Position - 0x340A
{
	MISC::CLEAR_BIT(&(Global_101533.f_20), 22);
	MISC::CLEAR_BIT(&(Global_101533.f_20), 8);
	return;
}

void func_85() // Position - 0x342A
{
	if (Global_101533.f_16 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_101533.f_16));
		Global_101533.f_16 = 0;
	}

	if (Global_101533.f_17 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_101533.f_17));
		Global_101533.f_17 = 0;
	}

	return;
}

void func_86(int iParam0) // Position - 0x3468
{
	if (iParam0 == 1)
		Global_44591 = 1;
	else
		Global_44591 = 0;

	return;
}

void func_87() // Position - 0x3481
{
	func_88(&Global_107514);
	return;
}

void func_88(int iParam0) // Position - 0x3491
{
	int i;
	int j;

	*iParam0 = 145;
	func_94(&(iParam0->f_1));
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_8 = 0f;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_5 = 145;

	for (j = 0; j < 3; j = j + 1)
	{
		iParam0->f_9[j] = -1;
		iParam0->f_13[j] = 0;
		iParam0->f_17[j] = 0;
		iParam0->f_21[j] = 0;
		func_93(&iParam0->f_25[0 /*295*/][j /*98*/]);
		func_93(&iParam0->f_25[1 /*295*/][j /*98*/]);
	
		for (i = 0; i < 12; i = i + 1)
		{
			iParam0->f_616[j /*65*/][i] = -1;
			iParam0->f_616[j /*65*/].f_13[i] = -1;
			iParam0->f_616[j /*65*/].f_26[i] = -1;
		}
	
		iParam0->f_616[j /*65*/].f_59 = 0;
		iParam0->f_616[j /*65*/].f_60 = -99;
		iParam0->f_616[j /*65*/].f_61 = 2;
		iParam0->f_616[j /*65*/].f_62 = 0;
		iParam0->f_616[j /*65*/].f_63 = -99;
		iParam0->f_616[j /*65*/].f_64 = 1;
	
		for (i = 0; i < 9; i = i + 1)
		{
			iParam0->f_616[j /*65*/].f_39[i] = -1;
			iParam0->f_616[j /*65*/].f_49[i] = -1;
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			iParam0->f_812[j /*477*/][i /*5*/].f_1 = 0;
			iParam0->f_812[j /*477*/][i /*5*/].f_2 = 0;
			iParam0->f_812[j /*477*/][i /*5*/].f_3 = 0;
			iParam0->f_812[j /*477*/][i /*5*/].f_4 = 0;
			iParam0->f_812[j /*477*/][i /*5*/] = 0;
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			iParam0->f_812[j /*477*/].f_221[i /*5*/].f_1 = 0;
			iParam0->f_812[j /*477*/].f_221[i /*5*/].f_2 = 0;
			iParam0->f_812[j /*477*/].f_221[i /*5*/].f_3 = 0;
			iParam0->f_812[j /*477*/].f_221[i /*5*/].f_4 = 0;
			iParam0->f_812[j /*477*/].f_221[i /*5*/] = 0;
		}
	
		for (i = 0; i < 4; i = i + 1)
		{
			iParam0->f_2244[j /*32*/][i] = 0;
		}
	
		for (i = 0; i < 10; i = i + 1)
		{
			iParam0->f_2244[j /*32*/].f_5[i] = 0;
		}
	
		for (i = 0; i < 15; i = i + 1)
		{
			iParam0->f_2244[j /*32*/].f_16[i] = 0;
		}
	
		iParam0->f_2341[j] = 0;
	
		for (i = 0; i <= 3; i = i + 1)
		{
			iParam0->f_2838[j /*15*/][i] = 0;
			iParam0->f_2838[j /*15*/].f_5[i] = 0;
			iParam0->f_2838[j /*15*/].f_10[i] = 0;
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			iParam0->f_2345[j /*164*/][i] = 0;
			iParam0->f_2345[j /*164*/].f_4[i] = 0;
			iParam0->f_2345[j /*164*/].f_8[i] = 0;
			iParam0->f_2345[j /*164*/].f_12[i] = 0;
			iParam0->f_2345[j /*164*/].f_16[i] = 0;
			iParam0->f_2345[j /*164*/].f_20[i] = 0;
			iParam0->f_2345[j /*164*/].f_24[i] = 0;
			iParam0->f_2345[j /*164*/].f_28[i] = 0;
			iParam0->f_2345[j /*164*/].f_32[i] = 0;
			iParam0->f_2345[j /*164*/].f_36[i] = 0;
			iParam0->f_2345[j /*164*/].f_40[i] = 0;
			iParam0->f_2345[j /*164*/].f_44[i] = 0;
			iParam0->f_2345[j /*164*/].f_48[i] = 0;
			iParam0->f_2345[j /*164*/].f_52[i] = 0;
			iParam0->f_2345[j /*164*/].f_56[i] = 0;
			iParam0->f_2345[j /*164*/].f_60[i] = 0;
			iParam0->f_2345[j /*164*/].f_64[i] = 0;
			iParam0->f_2345[j /*164*/].f_68[i] = 0;
			iParam0->f_2345[j /*164*/].f_72[i] = 0;
			iParam0->f_2345[j /*164*/].f_76[i] = 0;
			iParam0->f_2345[j /*164*/].f_80[i] = 0;
			iParam0->f_2345[j /*164*/].f_84[i] = 0;
			iParam0->f_2345[j /*164*/].f_88[i] = 0;
			iParam0->f_2345[j /*164*/].f_92[i] = 0;
			iParam0->f_2345[j /*164*/].f_96[i] = 0;
			iParam0->f_2345[j /*164*/].f_100[i] = 0;
			iParam0->f_2345[j /*164*/].f_104[i] = 0;
			iParam0->f_2345[j /*164*/].f_108[i] = 0;
			iParam0->f_2345[j /*164*/].f_112[i] = 0;
			iParam0->f_2345[j /*164*/].f_116[i] = 0;
			iParam0->f_2345[j /*164*/].f_120[i] = 0;
			iParam0->f_2345[j /*164*/].f_124[i] = 0;
			iParam0->f_2345[j /*164*/].f_128[i] = 0;
			iParam0->f_2345[j /*164*/].f_132[i] = 0;
			iParam0->f_2345[j /*164*/].f_136[i] = 0;
			iParam0->f_2345[j /*164*/].f_140[i] = 0;
			iParam0->f_2345[j /*164*/].f_144[i] = 0;
			iParam0->f_2345[j /*164*/].f_148[i] = 0;
			iParam0->f_2345[j /*164*/].f_152[i] = 0;
			iParam0->f_2345[j /*164*/].f_156[i] = 0;
			iParam0->f_2345[j /*164*/].f_160[i] = 0;
		}
	}

	func_92(&(iParam0->f_2884));
	func_90(&(iParam0->f_2890));
	func_89(&(iParam0->f_2980));
	return;
}

void func_89(var uParam0) // Position - 0x3A21
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

void func_90(var uParam0) // Position - 0x3A3C
{
	func_91(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	return;
}

void func_91(var uParam0) // Position - 0x3A6B
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

void func_92(var uParam0) // Position - 0x3B1C
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	return;
}

void func_93(var uParam0) // Position - 0x3B3A
{
	int i;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;

	for (i = 0; i <= 11; i = i + 1)
	{
		uParam0->f_11[i] = 0;
	}

	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_27), "", 16);

	for (i = 0; i <= 48; i = i + 1)
	{
		uParam0->f_31[i] = 0;
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		uParam0->f_81[i] = 0;
	}

	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
	return;
}

void func_94(var uParam0) // Position - 0x3C1B
{
	*uParam0 = -15;
	return;
}

void func_95() // Position - 0x3C29
{
	TEXT_LABEL_ASSIGN_STRING(&Global_104522, "", 32);
	func_88(&Global_104530);
	return;
}

void func_96() // Position - 0x3C43
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 0)
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 2;

	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 0)
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 2;

	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 0)
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 2;

	MISC::SET_BIT(&Global_8800, 25);
	MISC::SET_BIT(&Global_8801, 11);
	return;
}

void func_97() // Position - 0x3CC0
{
	int i;
	Ped ped;
	ePedComponentType type;
	eCharacter character;

	for (i = 0; i <= 8; i = i + 1)
	{
		ped = Global_98882[i];
	
		if (ENTITY::DOES_ENTITY_EXIST(ped) && !PED::IS_PED_INJURED(ped))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(ped);
			type = -99;
		
			switch (character)
			{
				case CHAR_MICHAEL:
					type = 112;
					break;
			
				case CHAR_FRANKLIN:
					type = 158;
					break;
			
				case CHAR_TREVOR:
					type = 154;
					break;
			}
		
			if (type != -99)
			{
				if (func_215(ped, 14, type))
					func_98(ped, 14, type);
			
				if (Global_113969.f_2366.f_539[character /*65*/].f_39[2] == type)
					Global_113969.f_2366.f_539[character /*65*/].f_39[2] = PV_COMP_INVALID;
			}
		}
	}

	return;
}

BOOL func_98(Ped pedParam0, ePedComponentType epctParam1, ePedComponentType epctParam2) // Position - 0x3D81
{
	Hash entityModel;
	ePedComponentType i;
	var unk;
	int unk2;
	BOOL unk3;
	var unk4;
	var unk5;
	ePedComponentType unk6;

	if (PED::IS_PED_INJURED(pedParam0) || epctParam2 == -99)
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	Global_79172[1 /*14*/] = { func_151(entityModel, epctParam1, epctParam2, -1) };

	if (!IS_BIT_SET(Global_79172[1 /*14*/].f_6, 0))
		return false;

	if (!func_215(pedParam0, epctParam1, epctParam2))
		return false;

	if (epctParam1 == PV_COMP_MAX)
	{
		unk = { func_147(entityModel, epctParam2) };
	
		for (i = PV_COMP_HEAD; i <= 14; i = i + 1)
		{
			if (unk[i] != -99)
				func_98(pedParam0, i, unk[i]);
		}
	}
	else if (epctParam1 == 13)
	{
		unk18 = { func_144(entityModel, epctParam2) };
	
		for (j = 0; j <= 8; j = j + 1)
		{
			if (!func_98(pedParam0, 14, unk18[j]))
				flag = 0;
		}
	
		return flag;
	}
	else if (epctParam1 == 14)
	{
		PED::CLEAR_PED_PROP(pedParam0, Global_79172[1 /*14*/].f_12, 1);
	}
	else
	{
		unk28 = { func_147(entityModel, PV_COMP_HEAD) };
		Global_79172[1 /*14*/] = { func_151(entityModel, epctParam1, unk28[epctParam1], -1) };
	
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, func_143(epctParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, func_143(epctParam1), Global_79172[1 /*14*/].f_3) > 0)
			PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_143(epctParam1), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, 0);
	}

	if (func_142(pedParam0, entityModel, &type, 0))
		func_101(pedParam0, 2, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);

	if (func_99(pedParam0, entityModel, &type))
		func_101(pedParam0, 1, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);

	return true;
}

BOOL func_99(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x3F3E
{
	int num;

	num = func_100(hParam1);

	if (num >= 3 || num < 0)
		return false;

	if (Global_113969.f_2366.f_539[num /*65*/].f_63 != -99)
	{
		if (!func_215(pedParam0, Global_113969.f_2366.f_539[num /*65*/].f_64, Global_113969.f_2366.f_539[num /*65*/].f_63))
		{
			*uParam2 = Global_113969.f_2366.f_539[num /*65*/].f_62;
			Global_113969.f_2366.f_539[num /*65*/].f_63 = -99;
			Global_113969.f_2366.f_539[num /*65*/].f_64 = 1;
			return true;
		}
	}

	return false;
}

int func_100(Hash hParam0) // Position - 0x3FDF
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 0;
	
		case joaat("Player_One"):
			return 1;
	
		case joaat("Player_Two"):
			return 2;
	
		default:
			break;
	}

	return 145;
}

int func_101(Ped pedParam0, int iParam1, ePedComponentType epctParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x401C
{
	int i;
	int j;
	int k;
	ePedComponentType type;
	ePedComponentType type2;
	ePedComponentType type3;
	ePedComponentType type4;
	ePedComponentType type5;
	ePedComponentType type6;
	ePedComponentType type7;
	Hash entityModel;
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;

	if (PED::IS_PED_INJURED(pedParam0) || epctParam2 == -99)
		return 0;

	Global_79170 = Global_79170 + 1;
	type3 = -99;
	type4 = -99;
	type5 = -99;
	type6 = -99;
	type7 = -99;
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (iParam5 == 0)
	{
		Global_79172[1 /*14*/] = { func_151(entityModel, iParam1, epctParam2, -1) };
	
		if (!func_141(iParam3))
		{
			Global_79170 = Global_79170 - 1;
			return 0;
		}
	
		func_133(iParam1);
	}

	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (entityModel == joaat("Player_One"))
			{
				type3 = func_131(pedParam0, 8);
			
				if (type3 != PV_COMP_TASK)
					type3 = -99;
			}
		
			type4 = func_131(pedParam0, 9);
		
			if (entityModel == joaat("Player_Zero"))
			{
				if (type4 >= PV_COMP_TASK && type4 <= 14)
				{
				}
				else
				{
					type4 = -99;
				}
			}
			else if (entityModel == joaat("Player_One"))
			{
				if (type4 >= PV_COMP_HAND && type4 <= PV_COMP_DECL)
				{
				}
				else
				{
					type4 = -99;
				}
			}
			else if (entityModel == joaat("Player_Two"))
			{
				if (type4 >= PV_COMP_TASK && type4 <= 14 || type4 >= 15 && type4 <= 16)
				{
				}
				else
				{
					type4 = -99;
				}
			}
		
			type5 = func_130(pedParam0, PV_COMP_BERD);
		
			if (!func_129(entityModel, 14, type5, -1))
				type5 = -99;
		
			type6 = func_130(pedParam0, PV_COMP_HEAD);
		
			if (!func_128(entityModel, 14, type6, -1) && !func_127(entityModel, 14, type6, -1))
				type6 = -99;
		
			if (entityModel == joaat("Player_One"))
				type7 = func_130(pedParam0, PV_COMP_HAIR);
		}
	
		PED::CLEAR_ALL_PED_PROPS(pedParam0, 1);
		unk = 15;
	
		if (iParam5 == 1)
			unk = { Global_79215 };
		else
			unk = { func_147(entityModel, epctParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99)
			{
				Global_79172[1 /*14*/] = { func_151(entityModel, i, unk[i], -1) };
			
				if (IS_BIT_SET(Global_79172[1 /*14*/].f_6, 0))
				{
					if (i == 13)
					{
						unk18 = 9;
					
						if (iParam5 == 1)
							unk18 = { Global_79232 };
						else
							unk18 = { func_144(entityModel, unk[i]) };
					
						for (j = 0; j <= 8; j = j + 1)
						{
							Global_79172[1 /*14*/] = { func_151(entityModel, 14, unk18[j], -1) };
							func_117(pedParam0, Global_79172[1 /*14*/].f_12, Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4);
							func_133(14);
						
							if (Global_79170 == 1)
							{
								for (k = 0; k < 15; k = k + 1)
								{
									type = func_109(pedParam0, entityModel, 14, unk18[j], k, 0);
								
									if (type != -99)
										func_101(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
							}
						}
					}
					else if (i != 14 && i != 12)
					{
						if (entityModel == joaat("Player_One") && i == 2 && unk[i] == 20)
							func_108(entityModel, 2, 20, &type2);
					
						if (iParam4 == -1)
							PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_143(i), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_143(i)));
						else
							PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_143(i), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, iParam4);
					
						func_133(i);
					
						if (Global_79170 == 1)
						{
							for (k = 0; k < 15; k = k + 1)
							{
								type = func_109(pedParam0, entityModel, i, unk[i], k, 0);
							
								if (type != -99)
									func_101(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
				}
			}
			else if (i != 12 && i != 14)
			{
				Global_79172[1 /*14*/] = { func_151(entityModel, i, func_107(pedParam0, i, PV_COMP_INVALID), -1) };
			
				if (IS_BIT_SET(Global_79172[1 /*14*/].f_6, 3))
				{
					if (i == 2)
					{
						if (entityModel == joaat("Player_One"))
							if (func_142(pedParam0, entityModel, &type2, 1))
								func_101(pedParam0, 2, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					else
					{
						unk28 = { func_147(entityModel, PV_COMP_HEAD) };
						func_101(pedParam0, i, unk28[i], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	
		if (iParam7 == 1)
		{
			unk45 = { func_151(entityModel, 8, type3, -1) };
		
			if (type3 != -99)
				if (func_105(entityModel, epctParam2, 8, type3, &unk, &unk45))
					func_101(pedParam0, 8, type3, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_151(entityModel, 9, type4, -1) };
		
			if (type4 != -99)
				if (func_105(entityModel, epctParam2, 9, type4, &unk, &unk45))
					func_101(pedParam0, 9, type4, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_151(entityModel, 14, type5, -1) };
		
			if (type5 != -99)
				if (func_105(entityModel, epctParam2, 14, type5, &unk, &unk45))
					func_101(pedParam0, 14, type5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_151(entityModel, 14, type6, -1) };
		
			if (type6 != -99)
				if (func_105(entityModel, epctParam2, 14, type6, &unk, &unk45))
					func_101(pedParam0, 14, type6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_151(entityModel, 14, type7, -1) };
		
			if (type7 != -99)
				if (func_105(entityModel, epctParam2, 14, type7, &unk, &unk45))
					func_101(pedParam0, 14, type7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		}
	}
	else if (iParam1 == 13)
	{
		unk59 = { func_144(entityModel, epctParam2) };
	
		for (j = 0; j <= 8; j = j + 1)
		{
			Global_79172[1 /*14*/] = { func_151(entityModel, 14, unk59[j], -1) };
			func_117(pedParam0, Global_79172[1 /*14*/].f_12, Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4);
			func_133(14);
		
			if (Global_79170 == 1)
			{
				for (k = 0; k < 15; k = k + 1)
				{
					type = func_109(pedParam0, entityModel, 14, unk59[j], k, 0);
				
					if (type != -99)
						func_101(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 14)
	{
		func_117(pedParam0, Global_79172[1 /*14*/].f_12, Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4);
		func_133(iParam1);
	
		if (Global_79170 == 1)
		{
			for (k = 0; k < 15; k = k + 1)
			{
				type = func_109(pedParam0, entityModel, iParam1, epctParam2, k, 0);
			
				if (type != -99)
					func_101(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	else
	{
		if (iParam4 == -1)
			PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_143(iParam1), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_143(iParam1)));
		else
			PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_143(iParam1), Global_79172[1 /*14*/].f_3, Global_79172[1 /*14*/].f_4, iParam4);
	
		if (Global_79170 == 1)
		{
			for (k = 0; k < 15; k = k + 1)
			{
				type = func_109(pedParam0, entityModel, iParam1, epctParam2, k, 0);
			
				if (type != -99)
					func_101(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	
		if (iParam6 == 0)
			func_102(entityModel, iParam1, epctParam2);
	}

	if (Global_79170 == 1)
	{
		if (func_142(pedParam0, entityModel, &type2, 0))
			func_101(pedParam0, 2, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	
		if (func_99(pedParam0, entityModel, &type2))
			func_101(pedParam0, 1, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}

	Global_79170 = Global_79170 - 1;
	return 1;
}

void func_102(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x482D
{
	ePedComponentType type;
	int num;

	if (hParam0 == joaat("Player_Zero"))
		type = PV_COMP_HAND;
	else if (hParam0 == joaat("Player_One"))
		type = PV_COMP_HAIR;
	else if (hParam0 == joaat("Player_Two"))
		type = PV_COMP_LOWR;

	if (func_104(hParam0, 12, type))
	{
		if (func_103(hParam0, iParam1, epctParam2))
		{
			num = func_100(hParam0);
		
			if (iParam1 == 3)
				Global_113969.f_2366.f_539.f_196[num] = epctParam2;
			else if (iParam1 == 4)
				Global_113969.f_2366.f_539.f_200[num] = epctParam2;
		}
	}

	return;
}

BOOL func_103(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x48B7
{
	if (hParam0 == joaat("Player_Zero"))
		if (iParam1 == 4)
			if (epctParam2 >= 47 && epctParam2 <= 54)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 77 && epctParam2 <= 84)
				return true;
	else if (hParam0 == joaat("Player_One"))
		if (iParam1 == 4)
			if (epctParam2 >= 14 && epctParam2 <= 21)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 41 && epctParam2 <= 56)
				return true;
	else if (hParam0 == joaat("Player_Two"))
		if (iParam1 == 4)
			if (epctParam2 >= 18 && epctParam2 <= 29)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 54 && epctParam2 <= 69)
				return true;

	return false;
}

BOOL func_104(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x4995
{
	Global_79172[1 /*14*/] = { func_151(hParam0, iParam1, epctParam2, -1) };
	return IS_BIT_SET(Global_79172[1 /*14*/].f_6, 2);
}

BOOL func_105(Hash hParam0, ePedComponentType epctParam1, int iParam2, ePedComponentType epctParam3, var uParam4, int iParam5) // Position - 0x49BD
{
	var unk;
	int unk2;

	if (uParam4->[iParam2] == epctParam3)
		return true;

	if (uParam4->[iParam2] == -99 && iParam2 != 14 && iParam2 != 13)
		return true;

	if (iParam2 == 13 || iParam2 == 14 && uParam4->[13] == 31)
		if (epctParam3 == 0 || epctParam3 == 1 || epctParam3 == 2 || epctParam3 == 3 || epctParam3 == 4 || epctParam3 == 5 || epctParam3 == 6 || epctParam3 == 7 || epctParam3 == 8)
			return true;

	if (epctParam3 == -99 || iParam5->f_1 == -1)
		return true;

	if (iParam2 == 14)
	{
		unk = { func_144(hParam0, uParam4->[13]) };
	
		for (i = 0; i <= 8; i = i + 1)
		{
			if (unk[i] == epctParam3)
				return true;
		}
	}

	if (func_106(hParam0, iParam2, epctParam3))
		return true;

	if (hParam0 == joaat("Player_Zero"))
	{
		if (func_129(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			return true;
		}
		else if (func_128(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 4 || epctParam1 == 5 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 14 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 0)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_127(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 4 || epctParam1 == 5 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 14 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			return true;
		}
	}
	else if (hParam0 == joaat("Player_One"))
	{
		if (func_129(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7)
				return false;
		
			return true;
		}
		else if (func_128(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7 || epctParam1 == 8 || epctParam1 == 21)
				if (iParam2 == 8)
					if (epctParam3 == PV_COMP_TASK)
						if (epctParam1 == 8 || epctParam1 == 21)
							return true;
					else
						return false;
				else
					return false;
		
			if (iParam2 == 8)
			{
				if (uParam4->[8] != 26)
					return false;
			}
			else if (iParam2 == 9)
			{
				if (uParam4->[9] != 0)
					return false;
			
				if (epctParam1 == 43 || epctParam1 == 44 || epctParam1 == 45 || epctParam1 == 46)
					if (epctParam3 >= PV_COMP_HAND && epctParam3 <= PV_COMP_DECL)
						return false;
			}
			else if (iParam2 == 14)
			{
				if (epctParam1 == 43 || epctParam1 == 44 || epctParam1 == 45 || epctParam1 == 46)
					if (epctParam3 >= 26 && epctParam3 <= 39)
						return false;
			}
		
			return true;
		}
		else if (func_127(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7 || epctParam1 == 8 || epctParam1 == 21)
				return false;
		
			return true;
		}
		else if (iParam2 == 14)
		{
			if (epctParam3 >= 159 && epctParam3 <= 174)
				return true;
		}
	}
	else if (hParam0 == joaat("Player_Two"))
	{
		if (epctParam1 == 2)
			if (iParam2 == 14 && epctParam3 == PV_COMP_HEAD)
				return true;
	
		if (func_129(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 45 || epctParam1 == 12)
				return false;
		
			return true;
		}
		else if (func_128(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 3 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 11 || epctParam1 == 45 || epctParam1 == 12)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 15)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_127(hParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 3 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 11 || epctParam1 == 12)
				return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_106(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x4FC1
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == 15)
						return true;
					break;
			
				case 9:
					if (epctParam2 == PV_COMP_FEET)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_BERD || epctParam2 == PV_COMP_DECL)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_LOWR)
						return true;
					break;
			}
			break;
	}

	return false;
}

ePedComponentType func_107(Ped pedParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x505A
{
	ePedComponentType i;
	ePedComponentType j;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (iParam1 == 12)
		{
			for (i = 0; i <= 53; i = i + 1)
			{
				if (func_215(pedParam0, iParam1, i))
					return i;
			}
		}
		else if (iParam1 == 13)
		{
			for (j = 0; j <= 19; j = j + 1)
			{
				if (func_215(pedParam0, iParam1, j))
					return j;
			}
		
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (epctParam2 == PV_COMP_INVALID)
			{
			}
			else
			{
				return func_130(pedParam0, epctParam2);
			}
		}
		else
		{
			return func_131(pedParam0, iParam1);
		}
	}

	return -99;
}

int func_108(Hash hParam0, int iParam1, ePedComponentType epctParam2, var uParam3) // Position - 0x50FB
{
	int num;

	*uParam3 = -99;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_TEEF || epctParam2 == 23)
						*uParam3 = 1;
					break;
			
				case 9:
					if (epctParam2 == PV_COMP_ACCS || epctParam2 >= PV_COMP_TASK && epctParam2 <= 14)
						*uParam3 = 1;
					break;
			
				case 10:
					if (epctParam2 >= 44 && epctParam2 <= 47)
						*uParam3 = 1;
					break;
			
				case 14:
					if (epctParam2 >= 31 && epctParam2 <= 32 || epctParam2 >= 33 && epctParam2 <= 34 || epctParam2 >= 35 && epctParam2 <= 36 || epctParam2 == 37 || epctParam2 >= 40 && epctParam2 <= 41 || epctParam2 == 46)
						*uParam3 = 1;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 2:
					if (epctParam2 == 20)
						*uParam3 = 20;
					break;
			
				case 8:
					if (epctParam2 == PV_COMP_LOWR)
						*uParam3 = 19;
					break;
			
				case 9:
					if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_DECL)
						*uParam3 = 19;
					break;
			
				case 10:
					if (epctParam2 >= 47 && epctParam2 <= 50)
						*uParam3 = 19;
					break;
			
				case 14:
					if (epctParam2 >= 26 && epctParam2 <= 27 || epctParam2 >= 28 && epctParam2 <= 29 || epctParam2 >= 30 && epctParam2 <= 31 || epctParam2 == 32 || epctParam2 >= 35 && epctParam2 <= 36)
						*uParam3 = 19;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_TEEF)
						*uParam3 = 2;
					break;
			
				case 9:
					if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 14 || epctParam2 >= 15 && epctParam2 <= 16)
						*uParam3 = 2;
					break;
			
				case 10:
					if (epctParam2 >= 29 && epctParam2 <= 32)
						*uParam3 = 2;
					break;
			
				case 14:
					if (epctParam2 >= 47 && epctParam2 <= 48 || epctParam2 >= 49 && epctParam2 <= 50 || epctParam2 >= 51 && epctParam2 <= 52 || epctParam2 == 53 || epctParam2 >= 56 && epctParam2 <= 57 || epctParam2 == 62)
						*uParam3 = 2;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		num = func_100(hParam0);
		Global_113969.f_2366.f_539[num /*65*/].f_60 = epctParam2;
		Global_113969.f_2366.f_539[num /*65*/].f_61 = iParam1;
		return 1;
	}

	return 0;
}

ePedComponentType func_109(Ped pedParam0, Hash hParam1, int iParam2, ePedComponentType epctParam3, int iParam4, int iParam5) // Position - 0x5402
{
	ePedComponentType type;
	ePedComponentType type2;
	ePedComponentType type3;
	ePedComponentType type4;
	ePedComponentType type5;
	ePedComponentType type6;
	ePedComponentType type7;
	ePedComponentType type8;
	ePedComponentType type9;
	ePedComponentType type10;

	type = -99;

	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				type2 = func_131(pedParam0, 1);
				type = func_116(hParam1, epctParam3, type2);
				break;
		
			case 1:
				type3 = func_131(pedParam0, 2);
				type = func_116(hParam1, type3, epctParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_108(hParam1, iParam2, epctParam3, &type);
	}
	else if (iParam4 == 1)
	{
		func_115(hParam1, iParam2, epctParam3, &type);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
			func_114(hParam1, epctParam3, &type);
	}
	else
	{
		switch (hParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (epctParam3)
								{
									case 36:
										type = 17;
										break;
								
									case 37:
										type = 17;
										break;
								
									case 38:
										type = 18;
										break;
								
									case 39:
										type = 18;
										break;
								
									case 40:
										type = 19;
										break;
								
									case 41:
										type = 19;
										break;
								
									case 42:
										type = 20;
										break;
								
									case 43:
										type = 20;
										break;
								}
								break;
						
							case 11:
								if (epctParam3 >= PV_COMP_HAIR && epctParam3 <= PV_COMP_TEEF)
									if (!func_113(pedParam0, 3, 44, 59))
										type = 44;
								else if (epctParam3 >= PV_COMP_ACCS && epctParam3 <= 17 || epctParam3 >= 18 && epctParam3 <= 27 || epctParam3 >= 28 && epctParam3 <= 43)
									if (!func_113(pedParam0, 3, 135, 150))
										type = func_112(hParam1, 3, 135, 150);
								break;
						}
						break;
				
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 63:
										type = PV_COMP_LOWR;
										break;
								
									case 61:
										type = PV_COMP_UPPR;
										break;
								
									case 16:
										type = PV_COMP_BERD;
										break;
								
									case 114:
										type = 15;
										break;
								
									case 115:
										type = 17;
										break;
								
									case 116:
										type = 16;
										break;
								
									case 117:
										type = 18;
										break;
								
									case 118:
										type = 20;
										break;
								
									case 119:
										type = 19;
										break;
								
									case 125:
										type = 21;
										break;
								
									case 120:
										type = 22;
										break;
								
									case 124:
										type = 23;
										break;
								
									case 126:
										type = 24;
										break;
								
									case 121:
										type = 25;
										break;
								
									case 127:
										type = 26;
										break;
								
									case 128:
										type = 27;
										break;
								
									case 85:
										type = PV_COMP_FEET;
										break;
								
									case 77:
										type = PV_COMP_TEEF;
										break;
								
									case 78:
										type = PV_COMP_ACCS;
										break;
								
									case 79:
										type = PV_COMP_TASK;
										break;
								
									case 80:
										type = PV_COMP_DECL;
										break;
								
									case 81:
										type = PV_COMP_JBIB;
										break;
								
									case 82:
										type = PV_COMP_MAX;
										break;
								
									case 83:
										type = 13;
										break;
								
									case 84:
										type = 14;
										break;
								
									case 21:
										type = 31;
										break;
								
									case 22:
										type = 30;
										break;
								
									case 23:
										type = 29;
										break;
								
									case 24:
										type = 28;
										break;
								
									case 25:
										type = 33;
										break;
								
									case 26:
										type = 35;
										break;
								
									case 27:
										type = 34;
										break;
								
									case 28:
										type = 32;
										break;
								
									default:
										if (epctParam3 >= 17 && epctParam3 <= 20)
										{
										}
										else
										{
											type = PV_COMP_HEAD;
										}
										break;
								}
								break;
						
							case 11:
								if (epctParam3 != PV_COMP_HEAD)
									type = PV_COMP_HEAD;
								break;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (epctParam3 >= 44 && epctParam3 <= 59 || epctParam3 >= 135 && epctParam3 <= 150)
							{
							}
							else
							{
								type = PV_COMP_HEAD;
							}
						}
						else if (iParam2 == 10)
						{
							if (epctParam3 >= 36 && epctParam3 <= 43)
								type = PV_COMP_HEAD;
						}
						break;
				}
				break;
		
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 17:
										type = PV_COMP_HAIR;
										break;
								
									case 90:
										type = PV_COMP_BERD;
										break;
								
									case 268:
										type = PV_COMP_UPPR;
										break;
								
									case 269:
										type = PV_COMP_HAND;
										break;
								
									case 270:
										type = PV_COMP_LOWR;
										break;
								
									case 271:
										type = PV_COMP_FEET;
										break;
								
									case 272:
										type = PV_COMP_ACCS;
										break;
								
									case 273:
										type = PV_COMP_TEEF;
										break;
								
									case 279:
										type = PV_COMP_TASK;
										break;
								
									case 274:
										type = PV_COMP_DECL;
										break;
								
									case 278:
										type = PV_COMP_JBIB;
										break;
								
									case 280:
										type = PV_COMP_MAX;
										break;
								
									case 275:
										type = 13;
										break;
								
									case 281:
										type = 14;
										break;
								
									case 282:
										type = 15;
										break;
								
									case 107:
										type = 16;
										break;
								
									case 108:
										type = 17;
										break;
								
									case 109:
										type = 18;
										break;
								
									case 110:
										type = 19;
										break;
								
									case 111:
										type = 20;
										break;
								
									case 112:
										type = 21;
										break;
								
									case 113:
										type = 22;
										break;
								
									case 114:
										type = 23;
										break;
								
									case 115:
										type = 24;
										break;
								
									case 116:
										type = 25;
										break;
								
									case 117:
										type = 52;
										break;
								
									case 118:
										type = 27;
										break;
								
									case 119:
										type = 28;
										break;
								
									case 120:
										type = 29;
										break;
								
									case 121:
										type = 30;
										break;
								
									case 122:
										type = 31;
										break;
								
									case 296:
										type = 32;
										break;
								
									case 297:
										type = 33;
										break;
								
									case 298:
										type = 34;
										break;
								
									case 299:
										type = 35;
										break;
								
									case 300:
										type = 36;
										break;
								
									case 301:
										type = 37;
										break;
								
									case 302:
										type = 38;
										break;
								
									case 309:
										type = 39;
										break;
								
									case 310:
										type = 40;
										break;
								
									case 311:
										type = 41;
										break;
								
									case 312:
										type = 42;
										break;
								
									case 313:
										type = 43;
										break;
								
									case 314:
										type = 44;
										break;
								
									case 315:
										type = 45;
										break;
								
									case 316:
										type = 46;
										break;
								
									case 317:
										type = 51;
										break;
								
									default:
										type = PV_COMP_HEAD;
										break;
								}
								break;
						
							case 11:
								if (epctParam3 != PV_COMP_HEAD)
									type = PV_COMP_HEAD;
								break;
						}
						break;
				
					case 3:
						switch (iParam2)
						{
							case 11:
								if (epctParam3 >= 47 && epctParam3 <= 62)
									if (!func_113(pedParam0, 3, 209, 222))
										type = func_112(hParam1, 3, 209, 222);
								else if (epctParam3 >= PV_COMP_BERD && epctParam3 <= PV_COMP_LOWR || epctParam3 >= PV_COMP_HAND && epctParam3 <= PV_COMP_ACCS)
									if (!func_113(pedParam0, 3, 243, 258))
										if (epctParam3 == PV_COMP_BERD || epctParam3 == PV_COMP_HAND)
											type = func_112(hParam1, 3, 243, 246);
										else if (epctParam3 == PV_COMP_HAIR || epctParam3 == PV_COMP_FEET)
											type = func_112(hParam1, 3, 247, 250);
										else if (epctParam3 == PV_COMP_UPPR || epctParam3 == PV_COMP_TEEF)
											type = func_112(hParam1, 3, 251, 254);
										else if (epctParam3 == PV_COMP_LOWR || epctParam3 == PV_COMP_ACCS)
											type = func_112(hParam1, 3, 255, 258);
								else if (epctParam3 == 41 || epctParam3 == 42)
									if (!func_113(pedParam0, 3, 176, 191) && !func_113(pedParam0, 3, 227, 242))
										type = func_112(hParam1, 3, 176, 191);
								break;
						}
						break;
				
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								type6 = epctParam3;
								type5 = func_131(pedParam0, 3);
							}
							else if (iParam2 == 3)
							{
								type5 = epctParam3;
								type6 = func_131(pedParam0, 11);
								type6 = func_111(hParam1, type5, type6, 0);
							}
						
							type4 = func_131(pedParam0, 8);
						
							if (type6 >= PV_COMP_HAND && type6 <= PV_COMP_ACCS || type6 >= 25 && type6 <= 40 || type6 >= 42 && type6 <= 43)
								if (!func_110(joaat("Player_One"), type4, type6, type5, &type7))
									if (type7 != -99)
										type = type7;
							else if (type4 >= 27 && type4 <= 42 || type4 >= 43 && type4 <= 58 || type4 >= 59 && type4 <= 74)
								type = 26;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (epctParam3 >= 209 && epctParam3 <= 222)
							{
							}
							else if (epctParam3 >= 176 && epctParam3 <= 191 || epctParam3 >= 227 && epctParam3 <= 242 || epctParam3 >= 243 && epctParam3 <= 258)
							{
								type8 = func_131(pedParam0, 8);
								type9 = func_131(pedParam0, 11);
							
								if (type8 >= 27 && type8 <= 42 || type8 >= 43 && type8 <= 58 || type8 >= 59 && type8 <= 74)
									type = func_111(hParam1, epctParam3, type9, 0);
								else
									type = func_111(hParam1, epctParam3, type9, 1);
							}
							else if (epctParam3 >= 41 && epctParam3 <= 56)
							{
								type = 45;
							}
							else if (epctParam3 >= 223 && epctParam3 <= 226)
							{
								type = 44;
							}
							else
							{
								type = PV_COMP_HEAD;
							}
						}
						else if (iParam2 == 8)
						{
							if (epctParam3 >= 27 && epctParam3 <= 42 || epctParam3 >= 43 && epctParam3 <= 58 || epctParam3 >= 59 && epctParam3 <= 74)
							{
								type10 = func_131(pedParam0, 11);
								type = func_111(hParam1, -99, type10, 0);
							}
						}
						break;
				}
				break;
		
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 50:
										type = PV_COMP_UPPR;
										break;
								
									case 81:
										type = PV_COMP_HAND;
										break;
								
									case 82:
										type = PV_COMP_FEET;
										break;
								
									case 83:
										type = PV_COMP_TEEF;
										break;
								
									case 84:
										type = PV_COMP_DECL;
										break;
								
									case 85:
										type = PV_COMP_TASK;
										break;
								
									case 86:
										type = PV_COMP_ACCS;
										break;
								
									case 92:
										type = 22;
										break;
								
									case 87:
										type = 23;
										break;
								
									case 91:
										type = 24;
										break;
								
									case 93:
										type = 25;
										break;
								
									case 88:
										type = 26;
										break;
								
									case 94:
										type = 27;
										break;
								
									case 120:
										type = PV_COMP_JBIB;
										break;
								
									case 121:
										type = 13;
										break;
								
									case 122:
										type = 14;
										break;
								
									case 124:
										type = PV_COMP_MAX;
										break;
								
									case 126:
										type = 18;
										break;
								
									case 128:
										type = 17;
										break;
								
									case 130:
										type = 19;
										break;
								
									case 131:
										type = 16;
										break;
								
									case 134:
										type = 15;
										break;
								
									case 135:
										type = 20;
										break;
								
									default:
										type = PV_COMP_HEAD;
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}

	return type;
}

BOOL func_110(int iParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, ePedComponentType epctParam3, var uParam4) // Position - 0x5FB5
{
	int num;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			break;
	
		case joaat("Player_One"):
			*uParam4 = 0;
		
			if (epctParam1 >= 27 && epctParam1 <= 42)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
					{
					}
					else
					{
						if (epctParam2 >= 42 && epctParam2 <= 43)
						{
							if (epctParam3 >= 176 && epctParam3 <= 191)
							{
								num = epctParam1 - 27;
								*uParam4 = 59 + num;
							}
							else if (epctParam3 >= 227 && epctParam3 <= 242)
							{
								num = epctParam1 - 27;
								*uParam4 = 43 + num;
							}
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 227 && epctParam3 <= 242 || epctParam3 >= 176 && epctParam3 <= 191 || epctParam3 >= 243 && epctParam3 <= 258)
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (epctParam1 >= 43 && epctParam1 <= 58)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= 42 && epctParam2 <= 43)
					{
					}
					else
					{
						if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 43;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 227 && epctParam3 <= 242)
					{
					}
					else
					{
						if (epctParam3 >= 176 && epctParam3 <= 191)
						{
							if (epctParam2 >= 42 && epctParam2 <= 43)
							{
								num = epctParam1 - 43;
								*uParam4 = 59 + num;
							}
						}
					
						return false;
					}
				}
			}
			else if (epctParam1 >= 59 && epctParam1 <= 74)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= 42 && epctParam2 <= 43)
					{
					}
					else
					{
						if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 59;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 176 && epctParam3 <= 191)
					{
					}
					else
					{
						if (epctParam3 >= 227 && epctParam3 <= 242)
						{
							if (epctParam2 >= 42 && epctParam2 <= 43)
							{
								num = epctParam1 - 59;
								*uParam4 = 43 + num;
							}
						}
						else if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 59;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			}
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_MAX)
				if (epctParam3 != 241)
					return false;
			break;
	}

	return true;
}

ePedComponentType func_111(Hash hParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, int iParam3) // Position - 0x6299
{
	int num;

	if (epctParam1 >= 243 && epctParam1 <= 246)
	{
		if (iParam3 == 1)
			return PV_COMP_BERD;
		else
			return PV_COMP_HAND;
	}
	else if (epctParam1 >= 247 && epctParam1 <= 250)
	{
		if (iParam3 == 1)
			return PV_COMP_HAIR;
		else
			return PV_COMP_FEET;
	}
	else if (epctParam1 >= 251 && epctParam1 <= 254)
	{
		if (iParam3 == 1)
			return PV_COMP_UPPR;
		else
			return PV_COMP_TEEF;
	}
	else if (epctParam1 >= 255 && epctParam1 <= 258)
	{
		if (iParam3 == 1)
			return PV_COMP_LOWR;
		else
			return PV_COMP_ACCS;
	}
	else if (epctParam1 >= 255 && epctParam1 <= 258)
	{
		if (iParam3 == 1)
			return PV_COMP_LOWR;
		else
			return PV_COMP_ACCS;
	}
	else if (epctParam1 >= 176 && epctParam1 <= 191 || epctParam1 >= 227 && epctParam1 <= 242)
	{
		if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return epctParam2;
			}
			else
			{
				num = epctParam2 - 9;
				epctParam2 = 25 + num;
				return epctParam2;
			}
		}
		else if (epctParam2 >= 25 && epctParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				num = epctParam2 - 25;
				epctParam2 = 9 + num;
				return epctParam2;
			}
			else
			{
				return epctParam2;
			}
		}
		else if (epctParam2 == 41 || epctParam2 == 42)
		{
			if (iParam3 == 1)
				return 41;
			else
				return 42;
		}
		else
		{
			if (iParam3 == 1)
				epctParam2 = func_112(hParam0, 11, 9, 24);
			else
				epctParam2 = func_112(hParam0, 11, 25, 40);
		
			if (epctParam2 == -99)
				if (iParam3 == 1)
					return 41;
				else
					return 42;
			else
				return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_BERD && epctParam2 <= PV_COMP_LOWR)
	{
		if (iParam3 == 1)
		{
			return epctParam2;
		}
		else
		{
			num = epctParam2 - 1;
			epctParam2 = 5 + num;
			return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS)
	{
		if (iParam3 == 1)
		{
			num = epctParam2 - 5;
			epctParam2 = 1 + num;
			return epctParam2;
		}
		else
		{
			return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return epctParam2;
		}
		else
		{
			num = epctParam2 - 9;
			epctParam2 = 25 + num;
			return epctParam2;
		}
	}
	else if (epctParam2 >= 25 && epctParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			num = epctParam2 - 25;
			epctParam2 = 9 + num;
			return epctParam2;
		}
		else
		{
			return epctParam2;
		}
	}
	else if (epctParam2 == 41 || epctParam2 == 42)
	{
		if (iParam3 == 1)
			return 41;
		else
			return 42;
	}

	return -99;
}

ePedComponentType func_112(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x6560
{
	ePedComponentType i;
	ePedComponentType type;

	for (i = iParam2; i <= iParam3 - 1; i = i + 1)
	{
		type = i;
	
		if (func_104(hParam0, iParam1, type))
			return type;
	}

	return -99;
}

BOOL func_113(Ped pedParam0, int iParam1, ePedComponentType epctParam2, ePedComponentType epctParam3) // Position - 0x6597
{
	ePedComponentType type;

	type = func_131(pedParam0, iParam1);

	if (type >= epctParam2 && type <= epctParam3)
		return true;

	return false;
}

BOOL func_114(Hash hParam0, ePedComponentType epctParam1, var uParam2) // Position - 0x65C0
{
	*uParam2 = -99;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			if (epctParam1 == 16 || epctParam1 == 17 || epctParam1 == 21 || epctParam1 == 22 || epctParam1 == 32 || epctParam1 >= 34 && epctParam1 <= 39 || epctParam1 >= 41 && epctParam1 <= 45 || epctParam1 == 46 || epctParam1 >= 47 && epctParam1 <= 54 || epctParam1 >= 55 && epctParam1 <= 70 || epctParam1 >= 72 && epctParam1 <= 79 || epctParam1 == 80 || epctParam1 >= 81 && epctParam1 <= 83 || epctParam1 >= 84 && epctParam1 <= 87 || epctParam1 == 88 || epctParam1 >= 89 && epctParam1 <= 91 || epctParam1 == 95 || epctParam1 >= 96 && epctParam1 <= 111 || epctParam1 == 112)
			{
				*uParam2 = 6;
				return true;
			}
			break;
	
		case joaat("Player_One"):
			if (epctParam1 == PV_COMP_MAX || epctParam1 >= 14 && epctParam1 <= 21 || epctParam1 == 32 || epctParam1 == 52 || epctParam1 >= 69 && epctParam1 <= 70 || epctParam1 == 71 || epctParam1 >= 72 && epctParam1 <= 77)
			{
				*uParam2 = 17;
				return true;
			}
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_LOWR || epctParam1 == PV_COMP_HAND || epctParam1 == PV_COMP_FEET || epctParam1 == PV_COMP_TEEF || epctParam1 == 14 || epctParam1 >= 18 && epctParam1 <= 29 || epctParam1 == 31 || epctParam1 == 32 || epctParam1 == 33 || epctParam1 == 34 || epctParam1 >= 35 && epctParam1 <= 42 || epctParam1 >= 43 && epctParam1 <= 53 || epctParam1 >= 54 && epctParam1 <= 61 || epctParam1 >= 71 && epctParam1 <= 80 || epctParam1 >= 81 && epctParam1 <= 90 || epctParam1 >= 94 && epctParam1 <= 103)
			{
				*uParam2 = 8;
				return true;
			}
			break;
	}

	return false;
}

int func_115(Hash hParam0, int iParam1, ePedComponentType epctParam2, var uParam3) // Position - 0x688A
{
	int num;

	*uParam3 = -99;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 10:
					if (epctParam2 >= 44 && epctParam2 <= 47)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 31 && epctParam2 <= 32 || epctParam2 >= 33 && epctParam2 <= 34 || epctParam2 >= 35 && epctParam2 <= 36 || epctParam2 == 37 || epctParam2 >= 38 && epctParam2 <= 39 || epctParam2 >= 40 && epctParam2 <= 41 || epctParam2 >= 42 && epctParam2 <= 44)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 10:
					if (epctParam2 >= 47 && epctParam2 <= 50)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 26 && epctParam2 <= 27 || epctParam2 >= 28 && epctParam2 <= 29 || epctParam2 >= 30 && epctParam2 <= 31 || epctParam2 == 32 || epctParam2 >= 35 && epctParam2 <= 36)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 9:
					if (epctParam2 >= 15 && epctParam2 <= 16)
						*uParam3 = 0;
					break;
			
				case 10:
					if (epctParam2 >= 29 && epctParam2 <= 32)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 47 && epctParam2 <= 48 || epctParam2 >= 49 && epctParam2 <= 50 || epctParam2 >= 51 && epctParam2 <= 52 || epctParam2 == 53 || epctParam2 >= 54 && epctParam2 <= 55 || epctParam2 >= 56 && epctParam2 <= 57 || epctParam2 >= 58 && epctParam2 <= 60)
						*uParam3 = 0;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		num = func_100(hParam0);
		Global_113969.f_2366.f_539[num /*65*/].f_63 = epctParam2;
		Global_113969.f_2366.f_539[num /*65*/].f_64 = iParam1;
		return 1;
	}

	return 0;
}

ePedComponentType func_116(Hash hParam0, ePedComponentType epctParam1, ePedComponentType epctParam2) // Position - 0x6B14
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			if (epctParam1 == PV_COMP_BERD)
				if (epctParam2 == PV_COMP_HEAD)
					return 1;
				else if (epctParam2 == PV_COMP_LOWR)
					return 5;
				else
					return 3;
			else if (epctParam2 == PV_COMP_HEAD)
				return 0;
			else if (epctParam2 == PV_COMP_LOWR)
				return 4;
			else
				return 2;
			break;
	
		case joaat("Player_One"):
			if (epctParam1 >= PV_COMP_HEAD && epctParam1 <= 15)
				if (epctParam2 == PV_COMP_HEAD)
					return 0;
				else
					return 3;
			else if (epctParam1 >= 16 && epctParam1 <= 17)
				if (epctParam2 == PV_COMP_HEAD)
					return 2;
				else
					return 5;
			else if (epctParam1 == 18)
				if (epctParam2 == PV_COMP_HEAD)
					return 6;
				else
					return 7;
			else if (epctParam1 == 19)
				if (epctParam2 == PV_COMP_HEAD)
					return 1;
				else
					return 4;
			else if (epctParam2 == PV_COMP_HEAD)
				return 1;
			else
				return 4;
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_HAIR)
				if (epctParam2 == PV_COMP_HEAD)
					return 2;
				else
					return 3;
			else if (epctParam1 == PV_COMP_UPPR)
				if (epctParam2 == PV_COMP_HEAD)
					return 4;
				else
					return 6;
			else if (epctParam1 == PV_COMP_ACCS)
				return 5;
			else if (epctParam2 == PV_COMP_HEAD)
				return 0;
			else
				return 1;
			break;
	}

	return -99;
}

void func_117(Ped pedParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0x6C6B
{
	ePedComponentType type;

	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(pedParam0, epctParam1, 1);
	
		if (epctParam1 == PV_COMP_HEAD)
		{
			PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(pedParam0, epctParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
	
		if (epctParam1 == PV_COMP_HEAD)
		{
			type = func_122(pedParam0, iParam2, iParam3, epctParam1);
		
			if (func_118(ENTITY::GET_ENTITY_MODEL(pedParam0), 14, type, FILES::GET_HASH_NAME_FOR_PROP(pedParam0, 0, iParam2, iParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
			}
		}
	}

	return;
}

BOOL func_118(Hash hParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0x6D05
{
	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (hParam3 == -1)
						hParam3 = func_119(hParam0, epctParam2, 14, 3);
				
					if (epctParam2 >= 131 && epctParam2 <= 154 || epctParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (hParam3 == -1)
						hParam3 = func_119(hParam0, epctParam2, 14, 4);
				
					if (epctParam2 >= 131 && epctParam2 <= 154 || epctParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	}

	return false;
}

Hash func_119(Hash hParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0x6DD3
{
	var outProp;
	int unk;
	int unk2;
	var unk3;
	int unk4;
	int unk5;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&outProp);
		componentId = epctParam1 - func_121(hParam0);
	
		if (componentId < 0)
			return -1;
	
		num = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
	
		if (num <= componentId)
			return -1;
	
		FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
		return outProp.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
		componentId2 = epctParam1 - func_120(hParam0, func_143(iParam2));
	
		if (componentId2 < 0)
			return -1;
	
		if (hParam0 == Global_79322.f_26[iParam2] && epctParam1 == Global_79322[iParam2] && Global_79322.f_13[iParam2] != 0)
			return Global_79322.f_13[iParam2];
	
		num2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_143(iParam2));
	
		if (num2 <= componentId2)
			return -1;
	
		FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
		Global_79322.f_13[iParam2] = outComponent.f_1;
		Global_79322[iParam2] = epctParam1;
		Global_79322.f_26[iParam2] = hParam0;
		return outComponent.f_1;
	}

	return -1;
}

int func_120(Hash hParam0, int iParam1) // Position - 0x6EED
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 5;
			
				case 2:
					return 6;
			
				case 3:
					return 181;
			
				case 4:
					return 113;
			
				case 5:
					return 14;
			
				case 6:
					return 99;
			
				case 7:
					return 1;
			
				case 8:
					return 24;
			
				case 9:
					return 20;
			
				case 10:
					return 48;
			
				case 11:
					return 45;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 5;
			
				case 2:
					return 21;
			
				case 3:
					return 318;
			
				case 4:
					return 117;
			
				case 5:
					return 7;
			
				case 6:
					return 134;
			
				case 7:
					return 1;
			
				case 8:
					return 77;
			
				case 9:
					return 12;
			
				case 10:
					return 53;
			
				case 11:
					return 63;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 6;
			
				case 2:
					return 9;
			
				case 3:
					return 242;
			
				case 4:
					return 104;
			
				case 5:
					return 7;
			
				case 6:
					return 84;
			
				case 7:
					return 1;
			
				case 8:
					return 18;
			
				case 9:
					return 17;
			
				case 10:
					return 33;
			
				case 11:
					return 1;
			}
			break;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 91;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 92;
			
				case 8:
					return 241;
			
				case 9:
					return 46;
			
				case 10:
					return 7;
			
				case 11:
					return 237;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 92;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 55;
			
				case 8:
					return 136;
			
				case 9:
					return 36;
			
				case 10:
					return 6;
			
				case 11:
					return 256;
			}
			break;
	}

	return -99;
}

int func_121(Hash hParam0) // Position - 0x7294
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 113;
	
		case joaat("Player_One"):
			return 175;
	
		case joaat("Player_Two"):
			return 155;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
	
		case joaat("MP_F_Freemode_01"):
			return 327;
	}

	return -99;
}

ePedComponentType func_122(Ped pedParam0, int iParam1, int iParam2, ePedComponentType epctParam3) // Position - 0x72F5
{
	Hash entityModel;
	Hash hashNameForProp;
	int numberOfPedPropDrawableVariations;
	int num;
	int i;
	int j;
	int numberOfPedPropTextureVariations;

	if (iParam1 == -1)
		return func_126(epctParam3);

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	hashNameForProp = FILES::GET_HASH_NAME_FOR_PROP(pedParam0, epctParam3, iParam1, iParam2);

	if (hashNameForProp != -1 && hashNameForProp != 0)
		if (entityModel == joaat("MP_M_Freemode_01"))
			return func_124(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 3);
		else if (entityModel == joaat("MP_F_Freemode_01"))
			return func_124(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 4);

	numberOfPedPropDrawableVariations = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(pedParam0, epctParam3);

	for (i = 0; i <= numberOfPedPropDrawableVariations - 1; i = i + 1)
	{
		numberOfPedPropTextureVariations = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(pedParam0, epctParam3, i);
	
		if (i != iParam1)
		{
			num = num + numberOfPedPropTextureVariations;
		}
		else
		{
			for (j = 0; j <= numberOfPedPropTextureVariations - 1; j = j + 1)
			{
				if (i == iParam1 && j == iParam2)
				{
					num = num + func_123(pedParam0, epctParam3);
					return num;
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	return func_126(epctParam3);
}

int func_123(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x73F1
{
	Hash entityModel;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	switch (entityModel)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 58;
			
				case PV_COMP_HAIR:
					return 112;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 82;
			
				case PV_COMP_HAIR:
					return 158;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 88;
			
				case PV_COMP_HAIR:
					return 154;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	}

	return -99;
}

int func_124(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x752F
{
	var outfit;
	int unk;
	int unk2;
	int unk3;
	int unk4;

	if (iParam2 == 12)
	{
		num = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
	
		for (i = 0; i < num; i = i + 1)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(i, &outfit);
		
			if (outfit.f_1 == hParam1)
				return func_125(hParam0) + i;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		shopPedQueryPropIndex = FILES::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
	
		if (shopPedQueryPropIndex != -1)
			return func_121(hParam0) + shopPedQueryPropIndex;
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_143(iParam2));
		shopPedQueryComponentIndex = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
	
		if (shopPedQueryComponentIndex != -1)
			return func_120(hParam0, func_143(iParam2)) + shopPedQueryComponentIndex;
	}

	return -99;
}

int func_125(Hash hParam0) // Position - 0x75EA
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 53;
	
		case joaat("Player_One"):
			return 47;
	
		case joaat("Player_Two"):
			return 48;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 26;
	
		case joaat("MP_F_Freemode_01"):
			return 28;
	}

	return -99;
}

int func_126(ePedComponentType epctParam0) // Position - 0x7649
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
			return 0;
	
		case PV_COMP_BERD:
			return 1;
	
		case PV_COMP_HAIR:
			return 2;
	
		case PV_COMP_UPPR:
			return 3;
	
		case PV_COMP_LOWR:
			return 4;
	
		case PV_COMP_HAND:
			return 5;
	
		case PV_COMP_FEET:
			return 6;
	
		case PV_COMP_TEEF:
			return 7;
	
		case PV_COMP_ACCS:
			return 8;
	}

	return 0;
}

BOOL func_127(Hash hParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0x76CF
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 == 16)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 == 40 || epctParam2 >= 41 && epctParam2 <= 56 || epctParam2 >= 64 && epctParam2 <= 79)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 17 && epctParam2 <= 18 || epctParam2 >= 71 && epctParam2 <= 86)
						return true;
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 18 && epctParam2 <= 130)
					{
						return true;
					}
					else if (epctParam2 >= PV_COMP_DECL && epctParam2 <= 17)
					{
						return true;
					}
					else if (epctParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_119(hParam0, epctParam2, 14, 3);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_119(hParam0, epctParam2, 14, 3), -1842686353, 1);
					}
					break;
			
				case 1:
					if (epctParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_119(hParam0, epctParam2, 1, 3);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_119(hParam0, epctParam2, 1, 3), -1842686353, 0);
					}
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 18 && epctParam2 <= 130)
					{
						return true;
					}
					else if (epctParam2 >= PV_COMP_DECL && epctParam2 <= 17)
					{
						return true;
					}
					else if (epctParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_119(hParam0, epctParam2, 14, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_119(hParam0, epctParam2, 14, 4), -1842686353, 1);
					}
					break;
			
				case 1:
					if (epctParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_119(hParam0, epctParam2, 1, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_119(hParam0, epctParam2, 1, 4), -1842686353, 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_128(Hash hParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0x794C
{
	if (hParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 6)
			if (epctParam2 == PV_COMP_DECL)
				return true;
		else if (iParam1 == 8)
			if (epctParam2 == PV_COMP_TASK || epctParam2 == PV_COMP_TEEF || epctParam2 == 23)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 14)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == PV_COMP_MAX || epctParam2 == 59 || epctParam2 == 60 || epctParam2 == 31 || epctParam2 == 32 || epctParam2 == 33 || epctParam2 == 34 || epctParam2 == 35 || epctParam2 == 36 || epctParam2 == 37 || epctParam2 == 38 || epctParam2 == 39 || epctParam2 == 40 || epctParam2 == 41 || epctParam2 >= 42 && epctParam2 <= 44 || epctParam2 == 54 || epctParam2 == 55)
				return true;
	}
	else if (hParam0 == joaat("Player_One"))
	{
		if (iParam1 == 2)
			if (epctParam2 == 20)
				return true;
		else if (iParam1 == 8)
			if (epctParam2 == PV_COMP_UPPR || epctParam2 == PV_COMP_HAND || epctParam2 == PV_COMP_TASK)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_DECL)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == 82 || epctParam2 == PV_COMP_DECL || epctParam2 == 26 || epctParam2 == 27 || epctParam2 == 28 || epctParam2 == 29 || epctParam2 == 30 || epctParam2 == 31 || epctParam2 == 32 || epctParam2 == 33 || epctParam2 == 34 || epctParam2 == 35 || epctParam2 == 36 || epctParam2 >= 37 && epctParam2 <= 39)
				return true;
	}
	else if (hParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 8)
			if (epctParam2 == 14 || epctParam2 == PV_COMP_TEEF)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 == PV_COMP_ACCS || epctParam2 >= PV_COMP_TASK && epctParam2 <= 14 || epctParam2 == 15 || epctParam2 == 16)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == 88 || epctParam2 == PV_COMP_MAX || epctParam2 == 47 || epctParam2 == 48 || epctParam2 == 49 || epctParam2 == 50 || epctParam2 == 51 || epctParam2 == 52 || epctParam2 == 53 || epctParam2 == 54 || epctParam2 == 55 || epctParam2 == 56 || epctParam2 == 57 || epctParam2 >= 58 && epctParam2 <= 60)
				return true;
	}
	else if (hParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (epctParam2 > PV_COMP_HEAD)
			{
				if (epctParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_119(hParam0, epctParam2, 1, 3);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}
	else if (hParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (epctParam2 > PV_COMP_HEAD)
			{
				if (epctParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_119(hParam0, epctParam2, 1, 4);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_129(Hash hParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0x7D71
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
				if (epctParam2 == 58 || epctParam2 == 61 || epctParam2 >= 62 && epctParam2 <= 69 || epctParam2 >= 70 && epctParam2 <= 79 || epctParam2 >= 80 && epctParam2 <= 89 || epctParam2 == 90 || epctParam2 >= 91 && epctParam2 <= 102 || epctParam2 >= 103 && epctParam2 <= 110 || epctParam2 == 111)
					return true;
			break;
	
		case joaat("Player_One"):
			if (iParam1 == 14)
				if (epctParam2 >= 83 && epctParam2 <= 92 || epctParam2 == 93 || epctParam2 == 94 || epctParam2 >= 95 && epctParam2 <= 101 || epctParam2 >= 102 && epctParam2 <= 111 || epctParam2 >= 112 && epctParam2 <= 121 || epctParam2 >= 122 && epctParam2 <= 131 || epctParam2 >= 132 && epctParam2 <= 139 || epctParam2 >= 140 && epctParam2 <= 149 || epctParam2 >= 150 && epctParam2 <= 156 || epctParam2 == 157)
					return true;
			break;
	
		case joaat("Player_Two"):
			if (iParam1 == 14)
				if (epctParam2 == 89 || epctParam2 >= 90 && epctParam2 <= 99 || epctParam2 >= 100 && epctParam2 <= 109 || epctParam2 == 111 || epctParam2 == 112 || epctParam2 >= 113 && epctParam2 <= 122 || epctParam2 >= 123 && epctParam2 <= 132 || epctParam2 >= 133 && epctParam2 <= 142 || epctParam2 >= 143 && epctParam2 <= 152 || epctParam2 == 153)
					return true;
			break;
	
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (epctParam2 >= 155 && epctParam2 <= 318)
				{
					return true;
				}
				else if (epctParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_119(hParam0, epctParam2, 14, 3);
				
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (epctParam2 >= 155 && epctParam2 <= 318)
				{
					return true;
				}
				else if (epctParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_119(hParam0, epctParam2, 14, 4);
				
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}

	return false;
}

ePedComponentType func_130(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x8066
{
	int pedPropIndex;
	int pedPropTextureIndex;

	if (PED::IS_PED_INJURED(pedParam0))
		return -99;

	pedPropIndex = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);

	if (pedPropIndex == -1)
		return func_126(epctParam1);

	pedPropTextureIndex = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	return func_122(pedParam0, pedPropIndex, pedPropTextureIndex, epctParam1);
}

ePedComponentType func_131(Ped pedParam0, int iParam1) // Position - 0x80AD
{
	ePedComponentType componentId;
	int pedDrawableVariation;
	int pedTextureVariation;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || PED::IS_PED_INJURED(pedParam0))
		return -99;

	componentId = func_143(iParam1);
	pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId);
	pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId);
	return func_132(pedParam0, pedDrawableVariation, pedTextureVariation, iParam1);
}

int func_132(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0x810D
{
	ePedComponentType componentId;
	int numberOfPedDrawableVariations;
	int num;
	int i;

	componentId = func_143(iParam3);
	numberOfPedDrawableVariations = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, componentId);

	for (i = 0; i <= numberOfPedDrawableVariations - 1; i = i + 1)
	{
		if (i != iParam1)
		{
			num = num + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, componentId, i);
		}
		else
		{
			num = num + iParam2;
			return num;
		}
	}

	return -99;
}

void func_133(int iParam0) // Position - 0x8164
{
	if (IS_BIT_SET(Global_79172[1 /*14*/].f_6, 1) && !IS_BIT_SET(Global_79172[1 /*14*/].f_6, 6))
		func_140(iParam0, Global_79172[1 /*14*/].f_5, Global_79172[1 /*14*/].f_2, 2, Global_79172[1 /*14*/].f_1, 1, 0);

	if (IS_BIT_SET(Global_79172[1 /*14*/].f_6, 1) && IS_BIT_SET(Global_79172[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_134(Global_2883588, 2, true, true, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_134(Global_2883588, 2, true, true, -1);
		}
		else
		{
			func_134(Global_2883588, 2, true, true, -1);
		}
	}

	return;
}

void func_134(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x8210
{
	int num;
	int offset;
	int num2;
	int address;

	num = Global_79169;

	if (iParam4 != -1)
		num = iParam4;

	if (func_139(hParam0, iParam1, &num2, &offset, bParam2, bParam3))
	{
		address = func_138(num2, num);
		MISC::SET_BIT(&address, offset);
		func_135(num2, address, num, true);
	}

	return;
}

void func_135(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x8258
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_136(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_136(int iParam0, int iParam1) // Position - 0x8286
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_137(iParam1));
}

int func_137(int iParam0) // Position - 0x829B
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_77();
	
		if (num2 > -1)
		{
			Global_2750949 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750949 = 1;
		}
	}

	return num;
}

int func_138(int iParam0, int iParam1) // Position - 0x82CF
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_136(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_139(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x82FE
{
	int fmMaleShopPedApparelItemIndex;

	*uParam2 = 14835;

	if (bParam4 && Global_4540270 || !bParam4 && bParam5)
	{
		switch (iParam1)
		{
			case 1:
				switch (hParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return true;
				}
				break;
		
			case 2:
				switch (hParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (hParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				}
				break;
		
			case 2:
				switch (hParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}

	fmMaleShopPedApparelItemIndex = -1;

	if (bParam4)
		if (Global_4540270)
			fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
		else
			fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
	else if (bParam5)
		fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
	else
		fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);

	if (fmMaleShopPedApparelItemIndex == -1)
		return false;

	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1761;
					break;
			
				case 1:
					*uParam2 = 1762;
					break;
			
				case 2:
					*uParam2 = 1763;
					break;
			
				case 3:
					*uParam2 = 1764;
					break;
			
				case 4:
					*uParam2 = 1765;
					break;
			
				case 5:
					*uParam2 = 1766;
					break;
			
				case 6:
					*uParam2 = 1773;
					break;
			
				case 7:
					*uParam2 = 1774;
					break;
			
				case 8:
					*uParam2 = 1775;
					break;
			
				case 9:
					*uParam2 = 1776;
					break;
			
				case 10:
					*uParam2 = 1777;
					break;
			
				case 11:
					*uParam2 = 1778;
					break;
			
				case 12:
					*uParam2 = 1779;
					break;
			
				case 13:
					*uParam2 = 1787;
					break;
			
				case 14:
					*uParam2 = 1788;
					break;
			
				case 15:
					*uParam2 = 1889;
					break;
			
				case 16:
					*uParam2 = 1890;
					break;
			
				case 17:
					*uParam2 = 1921;
					break;
			
				case 18:
					*uParam2 = 1935;
					break;
			
				case 19:
					*uParam2 = 1936;
					break;
			
				case 20:
					*uParam2 = 1937;
					break;
			
				case 21:
					*uParam2 = 1938;
					break;
			
				case 22:
					*uParam2 = 1939;
					break;
			
				case 23:
					*uParam2 = 2043;
					break;
			
				case 24:
					*uParam2 = 2044;
					break;
			
				case 25:
					*uParam2 = 2070;
					break;
			
				case 26:
					*uParam2 = 2071;
					break;
			
				case 27:
					*uParam2 = 2072;
					break;
			
				case 28:
					*uParam2 = 2073;
					break;
			
				case 29:
					*uParam2 = 2074;
					break;
			
				case 30:
					*uParam2 = 2075;
					break;
			
				case 31:
					*uParam2 = 2076;
					break;
			
				case 32:
					*uParam2 = 2077;
					break;
			
				case 33:
					*uParam2 = 2078;
					break;
			
				case 34:
					*uParam2 = 2079;
					break;
			
				case 35:
					*uParam2 = 2326;
					break;
			
				case 36:
					*uParam2 = 2327;
					break;
			
				case 37:
					*uParam2 = 2391;
					break;
			
				case 38:
					*uParam2 = 2392;
					break;
			
				case 39:
					*uParam2 = 2393;
					break;
			
				case 40:
					*uParam2 = 2394;
					break;
			
				case 41:
					*uParam2 = 2453;
					break;
			
				case 42:
					*uParam2 = 2454;
					break;
			
				case 43:
					*uParam2 = 2455;
					break;
			
				case 44:
					*uParam2 = 2456;
					break;
			
				case 45:
					*uParam2 = 2457;
					break;
			
				case 46:
					*uParam2 = 2458;
					break;
			
				case 47:
					*uParam2 = 2459;
					break;
			
				case 48:
					*uParam2 = 2460;
					break;
			
				case 49:
					*uParam2 = 2461;
					break;
			
				case 50:
					*uParam2 = 2462;
					break;
			
				case 51:
					*uParam2 = 2592;
					break;
			
				case 52:
					*uParam2 = 2593;
					break;
			
				case 53:
					*uParam2 = 2594;
					break;
			
				case 54:
					*uParam2 = 2595;
					break;
			
				case 55:
					*uParam2 = 2596;
					break;
			
				case 56:
					*uParam2 = 2597;
					break;
			
				case 57:
					*uParam2 = 2598;
					break;
			
				case 58:
					*uParam2 = 2599;
					break;
			
				case 59:
					*uParam2 = 2600;
					break;
			
				case 60:
					*uParam2 = 2601;
					break;
			
				case 61:
					*uParam2 = 2602;
					break;
			
				case 62:
					*uParam2 = 3199;
					break;
			
				case 63:
					*uParam2 = 3200;
					break;
			
				case 64:
					*uParam2 = 3201;
					break;
			
				case 65:
					*uParam2 = 3202;
					break;
			
				case 66:
					*uParam2 = 3203;
					break;
			
				case 67:
					*uParam2 = 3204;
					break;
			
				case 68:
					*uParam2 = 3672;
					break;
			
				case 69:
					*uParam2 = 3673;
					break;
			
				case 70:
					*uParam2 = 3674;
					break;
			
				case 71:
					*uParam2 = 3675;
					break;
			
				case 72:
					*uParam2 = 3676;
					break;
			
				case 73:
					*uParam2 = 3677;
					break;
			
				case 74:
					*uParam2 = 3678;
					break;
			
				case 75:
					*uParam2 = 3679;
					break;
			
				case 76:
					*uParam2 = 3680;
					break;
			
				case 77:
					*uParam2 = 3681;
					break;
			
				case 78:
					*uParam2 = 3795;
					break;
			
				case 79:
					*uParam2 = 3796;
					break;
			
				case 80:
					*uParam2 = 3797;
					break;
			
				case 81:
					*uParam2 = 3798;
					break;
			
				case 82:
					*uParam2 = 3799;
					break;
			
				case 83:
					*uParam2 = 3800;
					break;
			
				case 84:
					*uParam2 = 3801;
					break;
			
				case 85:
					*uParam2 = 3802;
					break;
			
				case 86:
					*uParam2 = 3905;
					break;
			
				case 87:
					*uParam2 = 3906;
					break;
			
				case 88:
					*uParam2 = 3907;
					break;
			
				case 89:
					*uParam2 = 5340;
					break;
			
				case 90:
					*uParam2 = 5341;
					break;
			
				case 91:
					*uParam2 = 5342;
					break;
			
				case 92:
					*uParam2 = 5343;
					break;
			
				case 93:
					*uParam2 = 5344;
					break;
			
				case 94:
					*uParam2 = 5345;
					break;
			
				case 95:
					*uParam2 = 5346;
					break;
			
				case 96:
					*uParam2 = 5347;
					break;
			
				case 97:
					*uParam2 = 5348;
					break;
			
				case 98:
					*uParam2 = 5349;
					break;
			
				case 99:
					*uParam2 = 5350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5351;
					break;
			
				case 101:
					*uParam2 = 5397;
					break;
			
				case 102:
					*uParam2 = 5398;
					break;
			
				case 103:
					*uParam2 = 5399;
					break;
			
				case 104:
					*uParam2 = 5400;
					break;
			
				case 105:
					*uParam2 = 5401;
					break;
			
				case 106:
					*uParam2 = 5402;
					break;
			
				case 107:
					*uParam2 = 5403;
					break;
			
				case 108:
					*uParam2 = 5404;
					break;
			
				case 109:
					*uParam2 = 5405;
					break;
			
				case 110:
					*uParam2 = 5406;
					break;
			
				case 111:
					*uParam2 = 5407;
					break;
			
				case 112:
					*uParam2 = 5408;
					break;
			
				case 113:
					*uParam2 = 5409;
					break;
			
				case 114:
					*uParam2 = 5410;
					break;
			
				case 115:
					*uParam2 = 5411;
					break;
			
				case 116:
					*uParam2 = 5412;
					break;
			
				case 117:
					*uParam2 = 5413;
					break;
			
				case 118:
					*uParam2 = 5414;
					break;
			
				case 119:
					*uParam2 = 5415;
					break;
			
				case 120:
					*uParam2 = 5416;
					break;
			
				case 121:
					*uParam2 = 5417;
					break;
			
				case 122:
					*uParam2 = 5418;
					break;
			
				case 123:
					*uParam2 = 5419;
					break;
			
				case 124:
					*uParam2 = 6125;
					break;
			
				case 125:
					*uParam2 = 6126;
					break;
			
				case 126:
					*uParam2 = 6127;
					break;
			
				case 127:
					*uParam2 = 6128;
					break;
			
				case 128:
					*uParam2 = 6129;
					break;
			
				case 129:
					*uParam2 = 6130;
					break;
			
				case 130:
					*uParam2 = 6131;
					break;
			
				case 131:
					*uParam2 = 6132;
					break;
			
				case 132:
					*uParam2 = 6133;
					break;
			
				case 133:
					*uParam2 = 6134;
					break;
			
				case 134:
					*uParam2 = 6135;
					break;
			
				case 135:
					*uParam2 = 6136;
					break;
			
				case 136:
					*uParam2 = 6137;
					break;
			
				case 137:
					*uParam2 = 6138;
					break;
			
				case 138:
					*uParam2 = 6139;
					break;
			
				case 139:
					*uParam2 = 6438;
					break;
			
				case 140:
					*uParam2 = 6439;
					break;
			
				case 141:
					*uParam2 = 6440;
					break;
			
				case 142:
					*uParam2 = 6441;
					break;
			
				case 143:
					*uParam2 = 6442;
					break;
			
				case 144:
					*uParam2 = 6443;
					break;
			
				case 145:
					*uParam2 = 6444;
					break;
			
				case 146:
					*uParam2 = 6445;
					break;
			
				case 147:
					*uParam2 = 6446;
					break;
			
				case 148:
					*uParam2 = 6447;
					break;
			
				case 149:
					*uParam2 = 6448;
					break;
			
				case 150:
					*uParam2 = 6449;
					break;
			
				case 151:
					*uParam2 = 6450;
					break;
			
				case 152:
					*uParam2 = 6451;
					break;
			
				case 153:
					*uParam2 = 6452;
					break;
			
				case 154:
					*uParam2 = 7269;
					break;
			
				case 155:
					*uParam2 = 7270;
					break;
			
				case 156:
					*uParam2 = 7271;
					break;
			
				case 157:
					*uParam2 = 7272;
					break;
			
				case 158:
					*uParam2 = 7273;
					break;
			
				case 159:
					*uParam2 = 7274;
					break;
			
				case 160:
					*uParam2 = 7275;
					break;
			
				case 161:
					*uParam2 = 7882;
					break;
			
				case 162:
					*uParam2 = 7883;
					break;
			
				case 163:
					*uParam2 = 7884;
					break;
			
				case 164:
					*uParam2 = 7885;
					break;
			
				case 165:
					*uParam2 = 7886;
					break;
			
				case 166:
					*uParam2 = 7887;
					break;
			
				case 167:
					*uParam2 = 7888;
					break;
			
				case 168:
					*uParam2 = 7889;
					break;
			
				case 169:
					*uParam2 = 7890;
					break;
			
				case 170:
					*uParam2 = 7891;
					break;
			
				case 171:
					*uParam2 = 7892;
					break;
			
				case 172:
					*uParam2 = 7893;
					break;
			
				case 173:
					*uParam2 = 7894;
					break;
			
				case 174:
					*uParam2 = 7895;
					break;
			
				case 175:
					*uParam2 = 7896;
					break;
			
				case 176:
					*uParam2 = 8302;
					break;
			
				case 177:
					*uParam2 = 8303;
					break;
			
				case 178:
					*uParam2 = 8304;
					break;
			
				case 179:
					*uParam2 = 8305;
					break;
			
				case 180:
					*uParam2 = 8306;
					break;
			
				case 181:
					*uParam2 = 8307;
					break;
			
				case 182:
					*uParam2 = 8308;
					break;
			
				case 183:
					*uParam2 = 8309;
					break;
			
				case 184:
					*uParam2 = 8310;
					break;
			
				case 185:
					*uParam2 = &func_48;
					break;
			
				case 186:
					*uParam2 = 8312;
					break;
			
				case 187:
					*uParam2 = 8313;
					break;
			
				case 188:
					*uParam2 = 8314;
					break;
			
				case 189:
					*uParam2 = 8315;
					break;
			
				case 190:
					*uParam2 = 8316;
					break;
			
				case 191:
					*uParam2 = 8317;
					break;
			
				case 192:
					*uParam2 = 8318;
					break;
			
				case 193:
					*uParam2 = 8319;
					break;
			
				case 194:
					*uParam2 = 8320;
					break;
			
				case 195:
					*uParam2 = 8321;
					break;
			
				case 196:
					*uParam2 = 8322;
					break;
			
				case 197:
					*uParam2 = 8323;
					break;
			
				case 198:
					*uParam2 = 8324;
					break;
			
				case 199:
					*uParam2 = 8325;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8326;
					break;
			
				case 201:
					*uParam2 = 8941;
					break;
			
				case 202:
					*uParam2 = 8942;
					break;
			
				case 203:
					*uParam2 = 8943;
					break;
			
				case 204:
					*uParam2 = 8944;
					break;
			
				case 205:
					*uParam2 = 8945;
					break;
			
				case 206:
					*uParam2 = 9424;
					break;
			
				case 207:
					*uParam2 = 9425;
					break;
			
				case 208:
					*uParam2 = 9426;
					break;
			
				case 209:
					*uParam2 = 9427;
					break;
			
				case 210:
					*uParam2 = 9428;
					break;
			
				case 211:
					*uParam2 = 9429;
					break;
			
				case 212:
					*uParam2 = 9430;
					break;
			
				case 213:
					*uParam2 = 9431;
					break;
			
				case 214:
					*uParam2 = 9432;
					break;
			
				case 215:
					*uParam2 = 9433;
					break;
			
				case 216:
					*uParam2 = 9434;
					break;
			
				case 217:
					*uParam2 = 9435;
					break;
			
				case 218:
					*uParam2 = 9436;
					break;
			
				case 219:
					*uParam2 = 9437;
					break;
			
				case 220:
					*uParam2 = 9438;
					break;
			
				case 221:
					*uParam2 = 9439;
					break;
			
				case 222:
					*uParam2 = 9440;
					break;
			
				case 223:
					*uParam2 = 9441;
					break;
			
				case 224:
					*uParam2 = 9442;
					break;
			
				case 225:
					*uParam2 = 9443;
					break;
			
				case 226:
					*uParam2 = 9444;
					break;
			
				case 227:
					*uParam2 = 9445;
					break;
			
				case 228:
					*uParam2 = 9446;
					break;
			
				case 229:
					*uParam2 = 9447;
					break;
			
				case 230:
					*uParam2 = 9448;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10304;
					break;
			
				case 232:
					*uParam2 = 10305;
					break;
			
				case 233:
					*uParam2 = 10306;
					break;
			
				case 234:
					*uParam2 = 10307;
					break;
			
				case 235:
					*uParam2 = 10308;
					break;
			
				case 236:
					*uParam2 = 10309;
					break;
			
				case 237:
					*uParam2 = 10310;
					break;
			
				case 238:
					*uParam2 = 10311;
					break;
			
				case 239:
					*uParam2 = 10312;
					break;
			
				case 240:
					*uParam2 = 10313;
					break;
			
				case 241:
					*uParam2 = 10314;
					break;
			
				case 242:
					*uParam2 = 10315;
					break;
			
				case 243:
					*uParam2 = 10316;
					break;
			
				case 244:
					*uParam2 = 10317;
					break;
			
				case 245:
					*uParam2 = 10318;
					break;
			
				case 246:
					*uParam2 = 10319;
					break;
			
				case 247:
					*uParam2 = 10320;
					break;
			
				case 248:
					*uParam2 = 10321;
					break;
			
				case 249:
					*uParam2 = 10322;
					break;
			
				case 250:
					*uParam2 = 10323;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10420;
					break;
			
				case 252:
					*uParam2 = 10421;
					break;
			
				case 253:
					*uParam2 = 10422;
					break;
			
				case 254:
					*uParam2 = 10423;
					break;
			
				case 255:
					*uParam2 = 10424;
					break;
			
				case 256:
					*uParam2 = 10425;
					break;
			
				case 257:
					*uParam2 = 10426;
					break;
			
				case 258:
					*uParam2 = 10427;
					break;
			
				case 259:
					*uParam2 = 10428;
					break;
			
				case 260:
					*uParam2 = 10429;
					break;
			
				case 261:
					*uParam2 = 11847;
					break;
			
				case 262:
					*uParam2 = 11848;
					break;
			
				case 263:
					*uParam2 = 11849;
					break;
			
				case 264:
					*uParam2 = 11850;
					break;
			
				case 265:
					*uParam2 = 11851;
					break;
			
				case 266:
					*uParam2 = 11852;
					break;
			
				case 267:
					*uParam2 = 11853;
					break;
			
				case 268:
					*uParam2 = 11854;
					break;
			
				case 269:
					*uParam2 = 11855;
					break;
			
				case 270:
					*uParam2 = 11856;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11878;
					break;
			
				case 272:
					*uParam2 = 11879;
					break;
			
				case 273:
					*uParam2 = 11880;
					break;
			
				case 274:
					*uParam2 = 11881;
					break;
			
				case 275:
					*uParam2 = 11882;
					break;
			
				case 276:
					*uParam2 = 11883;
					break;
			
				case 277:
					*uParam2 = 11884;
					break;
			
				case 278:
					*uParam2 = 11885;
					break;
			
				case 279:
					*uParam2 = 11886;
					break;
			
				case 280:
					*uParam2 = 11887;
					break;
			
				case 281:
					*uParam2 = 11888;
					break;
			
				case 282:
					*uParam2 = 11889;
					break;
			
				case 283:
					*uParam2 = 11976;
					break;
			
				case 284:
					*uParam2 = 11977;
					break;
			
				case 285:
					*uParam2 = 11978;
					break;
			
				case 286:
					*uParam2 = 11979;
					break;
			
				case 287:
					*uParam2 = 11980;
					break;
			
				case 288:
					*uParam2 = 11981;
					break;
			
				case 289:
					*uParam2 = 11982;
					break;
			
				case 290:
					*uParam2 = 11983;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 291:
					*uParam2 = 11984;
					break;
			
				case 292:
					*uParam2 = 11985;
					break;
			
				case 293:
					*uParam2 = 11986;
					break;
			
				case 294:
					*uParam2 = 11987;
					break;
			
				case 295:
					*uParam2 = 11988;
					break;
			
				case 296:
					*uParam2 = 11989;
					break;
			
				case 297:
					*uParam2 = 11990;
					break;
			
				case 298:
					*uParam2 = 12190;
					break;
			
				case 299:
					*uParam2 = 12191;
					break;
			
				case 300:
					*uParam2 = 12192;
					break;
			
				case 301:
					*uParam2 = 12193;
					break;
			
				case 302:
					*uParam2 = 12194;
					break;
			
				case 303:
					*uParam2 = 12195;
					break;
			
				case 304:
					*uParam2 = 12196;
					break;
			
				case 305:
					*uParam2 = 12197;
					break;
			
				case 306:
					*uParam2 = 12332;
					break;
			
				case 307:
					*uParam2 = 12333;
					break;
			
				case 308:
					*uParam2 = 12334;
					break;
			
				case 309:
					*uParam2 = 12335;
					break;
			
				case 310:
					*uParam2 = 12336;
					break;
			}
			break;
	
		case 2:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1767;
					break;
			
				case 1:
					*uParam2 = 1768;
					break;
			
				case 2:
					*uParam2 = 1769;
					break;
			
				case 3:
					*uParam2 = 1770;
					break;
			
				case 4:
					*uParam2 = 1771;
					break;
			
				case 5:
					*uParam2 = 1772;
					break;
			
				case 6:
					*uParam2 = 1780;
					break;
			
				case 7:
					*uParam2 = 1781;
					break;
			
				case 8:
					*uParam2 = 1782;
					break;
			
				case 9:
					*uParam2 = 1783;
					break;
			
				case 10:
					*uParam2 = 1784;
					break;
			
				case 11:
					*uParam2 = 1785;
					break;
			
				case 12:
					*uParam2 = 1786;
					break;
			
				case 13:
					*uParam2 = 1789;
					break;
			
				case 14:
					*uParam2 = 1790;
					break;
			
				case 15:
					*uParam2 = 1891;
					break;
			
				case 16:
					*uParam2 = 1892;
					break;
			
				case 17:
					*uParam2 = 1922;
					break;
			
				case 18:
					*uParam2 = 1940;
					break;
			
				case 19:
					*uParam2 = 1941;
					break;
			
				case 20:
					*uParam2 = 1942;
					break;
			
				case 21:
					*uParam2 = 1943;
					break;
			
				case 22:
					*uParam2 = 1944;
					break;
			
				case 23:
					*uParam2 = 2045;
					break;
			
				case 24:
					*uParam2 = 2046;
					break;
			
				case 25:
					*uParam2 = 2080;
					break;
			
				case 26:
					*uParam2 = 2081;
					break;
			
				case 27:
					*uParam2 = 2082;
					break;
			
				case 28:
					*uParam2 = 2083;
					break;
			
				case 29:
					*uParam2 = &func_14;
					break;
			
				case 30:
					*uParam2 = 2085;
					break;
			
				case 31:
					*uParam2 = 2086;
					break;
			
				case 32:
					*uParam2 = 2087;
					break;
			
				case 33:
					*uParam2 = 2088;
					break;
			
				case 34:
					*uParam2 = 2089;
					break;
			
				case 35:
					*uParam2 = 2328;
					break;
			
				case 36:
					*uParam2 = 2329;
					break;
			
				case 37:
					*uParam2 = 2395;
					break;
			
				case 38:
					*uParam2 = 2396;
					break;
			
				case 39:
					*uParam2 = 2397;
					break;
			
				case 40:
					*uParam2 = 2398;
					break;
			
				case 41:
					*uParam2 = 2463;
					break;
			
				case 42:
					*uParam2 = 2464;
					break;
			
				case 43:
					*uParam2 = 2465;
					break;
			
				case 44:
					*uParam2 = 2466;
					break;
			
				case 45:
					*uParam2 = 2467;
					break;
			
				case 46:
					*uParam2 = 2468;
					break;
			
				case 47:
					*uParam2 = 2469;
					break;
			
				case 48:
					*uParam2 = 2470;
					break;
			
				case 49:
					*uParam2 = 2471;
					break;
			
				case 50:
					*uParam2 = 2472;
					break;
			
				case 51:
					*uParam2 = 2603;
					break;
			
				case 52:
					*uParam2 = 2604;
					break;
			
				case 53:
					*uParam2 = 2605;
					break;
			
				case 54:
					*uParam2 = 2606;
					break;
			
				case 55:
					*uParam2 = 2607;
					break;
			
				case 56:
					*uParam2 = 2608;
					break;
			
				case 57:
					*uParam2 = 2609;
					break;
			
				case 58:
					*uParam2 = 2610;
					break;
			
				case 59:
					*uParam2 = 2611;
					break;
			
				case 60:
					*uParam2 = 2612;
					break;
			
				case 61:
					*uParam2 = 2613;
					break;
			
				case 62:
					*uParam2 = 3205;
					break;
			
				case 63:
					*uParam2 = 3206;
					break;
			
				case 64:
					*uParam2 = 3207;
					break;
			
				case 65:
					*uParam2 = 3208;
					break;
			
				case 66:
					*uParam2 = 3209;
					break;
			
				case 67:
					*uParam2 = 3210;
					break;
			
				case 68:
					*uParam2 = 3682;
					break;
			
				case 69:
					*uParam2 = 3683;
					break;
			
				case 70:
					*uParam2 = 3684;
					break;
			
				case 71:
					*uParam2 = 3685;
					break;
			
				case 72:
					*uParam2 = 3686;
					break;
			
				case 73:
					*uParam2 = 3687;
					break;
			
				case 74:
					*uParam2 = 3688;
					break;
			
				case 75:
					*uParam2 = 3689;
					break;
			
				case 76:
					*uParam2 = 3690;
					break;
			
				case 77:
					*uParam2 = 3691;
					break;
			
				case 78:
					*uParam2 = 3803;
					break;
			
				case 79:
					*uParam2 = 3804;
					break;
			
				case 80:
					*uParam2 = 3805;
					break;
			
				case 81:
					*uParam2 = 3806;
					break;
			
				case 82:
					*uParam2 = 3807;
					break;
			
				case 83:
					*uParam2 = 3808;
					break;
			
				case 84:
					*uParam2 = 3809;
					break;
			
				case 85:
					*uParam2 = 3810;
					break;
			
				case 86:
					*uParam2 = 3908;
					break;
			
				case 87:
					*uParam2 = 3909;
					break;
			
				case 88:
					*uParam2 = 3910;
					break;
			
				case 89:
					*uParam2 = 5352;
					break;
			
				case 90:
					*uParam2 = 5353;
					break;
			
				case 91:
					*uParam2 = 5354;
					break;
			
				case 92:
					*uParam2 = 5355;
					break;
			
				case 93:
					*uParam2 = 5356;
					break;
			
				case 94:
					*uParam2 = 5357;
					break;
			
				case 95:
					*uParam2 = 5358;
					break;
			
				case 96:
					*uParam2 = 5359;
					break;
			
				case 97:
					*uParam2 = 5360;
					break;
			
				case 98:
					*uParam2 = 5361;
					break;
			
				case 99:
					*uParam2 = 5362;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5363;
					break;
			
				case 101:
					*uParam2 = 5420;
					break;
			
				case 102:
					*uParam2 = 5421;
					break;
			
				case 103:
					*uParam2 = 5422;
					break;
			
				case 104:
					*uParam2 = 5423;
					break;
			
				case 105:
					*uParam2 = 5424;
					break;
			
				case 106:
					*uParam2 = 5425;
					break;
			
				case 107:
					*uParam2 = 5426;
					break;
			
				case 108:
					*uParam2 = 5427;
					break;
			
				case 109:
					*uParam2 = 5428;
					break;
			
				case 110:
					*uParam2 = 5429;
					break;
			
				case 111:
					*uParam2 = 5430;
					break;
			
				case 112:
					*uParam2 = 5431;
					break;
			
				case 113:
					*uParam2 = 5432;
					break;
			
				case 114:
					*uParam2 = 5433;
					break;
			
				case 115:
					*uParam2 = 5434;
					break;
			
				case 116:
					*uParam2 = 5435;
					break;
			
				case 117:
					*uParam2 = 5436;
					break;
			
				case 118:
					*uParam2 = 5437;
					break;
			
				case 119:
					*uParam2 = 5438;
					break;
			
				case 120:
					*uParam2 = 5439;
					break;
			
				case 121:
					*uParam2 = 5440;
					break;
			
				case 122:
					*uParam2 = 5441;
					break;
			
				case 123:
					*uParam2 = 5442;
					break;
			
				case 124:
					*uParam2 = 6140;
					break;
			
				case 125:
					*uParam2 = 6141;
					break;
			
				case 126:
					*uParam2 = 6142;
					break;
			
				case 127:
					*uParam2 = 6143;
					break;
			
				case 128:
					*uParam2 = 6144;
					break;
			
				case 129:
					*uParam2 = 6145;
					break;
			
				case 130:
					*uParam2 = 6146;
					break;
			
				case 131:
					*uParam2 = 6147;
					break;
			
				case 132:
					*uParam2 = 6148;
					break;
			
				case 133:
					*uParam2 = 6149;
					break;
			
				case 134:
					*uParam2 = 6150;
					break;
			
				case 135:
					*uParam2 = 6151;
					break;
			
				case 136:
					*uParam2 = 6152;
					break;
			
				case 137:
					*uParam2 = 6153;
					break;
			
				case 138:
					*uParam2 = 6154;
					break;
			
				case 139:
					*uParam2 = 6453;
					break;
			
				case 140:
					*uParam2 = 6454;
					break;
			
				case 141:
					*uParam2 = 6455;
					break;
			
				case 142:
					*uParam2 = 6456;
					break;
			
				case 143:
					*uParam2 = 6457;
					break;
			
				case 144:
					*uParam2 = 6458;
					break;
			
				case 145:
					*uParam2 = 6459;
					break;
			
				case 146:
					*uParam2 = 6460;
					break;
			
				case 147:
					*uParam2 = 6461;
					break;
			
				case 148:
					*uParam2 = 6462;
					break;
			
				case 149:
					*uParam2 = 6463;
					break;
			
				case 150:
					*uParam2 = 6464;
					break;
			
				case 151:
					*uParam2 = 6465;
					break;
			
				case 152:
					*uParam2 = 6466;
					break;
			
				case 153:
					*uParam2 = 6467;
					break;
			
				case 154:
					*uParam2 = 7276;
					break;
			
				case 155:
					*uParam2 = 7277;
					break;
			
				case 156:
					*uParam2 = 7278;
					break;
			
				case 157:
					*uParam2 = 7279;
					break;
			
				case 158:
					*uParam2 = 7280;
					break;
			
				case 159:
					*uParam2 = 7281;
					break;
			
				case 160:
					*uParam2 = 7282;
					break;
			
				case 161:
					*uParam2 = 7897;
					break;
			
				case 162:
					*uParam2 = 7898;
					break;
			
				case 163:
					*uParam2 = 7899;
					break;
			
				case 164:
					*uParam2 = 7900;
					break;
			
				case 165:
					*uParam2 = 7901;
					break;
			
				case 166:
					*uParam2 = 7902;
					break;
			
				case 167:
					*uParam2 = 7903;
					break;
			
				case 168:
					*uParam2 = 7904;
					break;
			
				case 169:
					*uParam2 = 7905;
					break;
			
				case 170:
					*uParam2 = 7906;
					break;
			
				case 171:
					*uParam2 = 7907;
					break;
			
				case 172:
					*uParam2 = 7908;
					break;
			
				case 173:
					*uParam2 = 7909;
					break;
			
				case 174:
					*uParam2 = 7910;
					break;
			
				case 175:
					*uParam2 = 7911;
					break;
			
				case 176:
					*uParam2 = 8327;
					break;
			
				case 177:
					*uParam2 = 8328;
					break;
			
				case 178:
					*uParam2 = 8329;
					break;
			
				case 179:
					*uParam2 = 8330;
					break;
			
				case 180:
					*uParam2 = 8331;
					break;
			
				case 181:
					*uParam2 = 8332;
					break;
			
				case 182:
					*uParam2 = 8333;
					break;
			
				case 183:
					*uParam2 = 8334;
					break;
			
				case 184:
					*uParam2 = 8335;
					break;
			
				case 185:
					*uParam2 = 8336;
					break;
			
				case 186:
					*uParam2 = 8337;
					break;
			
				case 187:
					*uParam2 = 8338;
					break;
			
				case 188:
					*uParam2 = 8339;
					break;
			
				case 189:
					*uParam2 = 8340;
					break;
			
				case 190:
					*uParam2 = 8341;
					break;
			
				case 191:
					*uParam2 = 8342;
					break;
			
				case 192:
					*uParam2 = 8343;
					break;
			
				case 193:
					*uParam2 = 8344;
					break;
			
				case 194:
					*uParam2 = 8345;
					break;
			
				case 195:
					*uParam2 = 8346;
					break;
			
				case 196:
					*uParam2 = 8347;
					break;
			
				case 197:
					*uParam2 = 8348;
					break;
			
				case 198:
					*uParam2 = 8349;
					break;
			
				case 199:
					*uParam2 = 8350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8351;
					break;
			
				case 201:
					*uParam2 = 8946;
					break;
			
				case 202:
					*uParam2 = 8947;
					break;
			
				case 203:
					*uParam2 = 8948;
					break;
			
				case 204:
					*uParam2 = 8949;
					break;
			
				case 205:
					*uParam2 = 8950;
					break;
			
				case 206:
					*uParam2 = 9449;
					break;
			
				case 207:
					*uParam2 = 9450;
					break;
			
				case 208:
					*uParam2 = 9451;
					break;
			
				case 209:
					*uParam2 = 9452;
					break;
			
				case 210:
					*uParam2 = 9453;
					break;
			
				case 211:
					*uParam2 = 9454;
					break;
			
				case 212:
					*uParam2 = 9455;
					break;
			
				case 213:
					*uParam2 = 9456;
					break;
			
				case 214:
					*uParam2 = 9457;
					break;
			
				case 215:
					*uParam2 = 9458;
					break;
			
				case 216:
					*uParam2 = 9459;
					break;
			
				case 217:
					*uParam2 = 9460;
					break;
			
				case 218:
					*uParam2 = 9461;
					break;
			
				case 219:
					*uParam2 = 9462;
					break;
			
				case 220:
					*uParam2 = 9463;
					break;
			
				case 221:
					*uParam2 = 9464;
					break;
			
				case 222:
					*uParam2 = 9465;
					break;
			
				case 223:
					*uParam2 = 9466;
					break;
			
				case 224:
					*uParam2 = 9467;
					break;
			
				case 225:
					*uParam2 = 9468;
					break;
			
				case 226:
					*uParam2 = 9469;
					break;
			
				case 227:
					*uParam2 = 9470;
					break;
			
				case 228:
					*uParam2 = 9471;
					break;
			
				case 229:
					*uParam2 = 9472;
					break;
			
				case 230:
					*uParam2 = 9473;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10324;
					break;
			
				case 232:
					*uParam2 = 10325;
					break;
			
				case 233:
					*uParam2 = 10326;
					break;
			
				case 234:
					*uParam2 = 10327;
					break;
			
				case 235:
					*uParam2 = 10328;
					break;
			
				case 236:
					*uParam2 = 10329;
					break;
			
				case 237:
					*uParam2 = 10330;
					break;
			
				case 238:
					*uParam2 = 10331;
					break;
			
				case 239:
					*uParam2 = 10332;
					break;
			
				case 240:
					*uParam2 = 10333;
					break;
			
				case 241:
					*uParam2 = 10334;
					break;
			
				case 242:
					*uParam2 = 10335;
					break;
			
				case 243:
					*uParam2 = 10336;
					break;
			
				case 244:
					*uParam2 = 10337;
					break;
			
				case 245:
					*uParam2 = 10338;
					break;
			
				case 246:
					*uParam2 = 10339;
					break;
			
				case 247:
					*uParam2 = 10340;
					break;
			
				case 248:
					*uParam2 = 10341;
					break;
			
				case 249:
					*uParam2 = 10342;
					break;
			
				case 250:
					*uParam2 = 10343;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10430;
					break;
			
				case 252:
					*uParam2 = 10431;
					break;
			
				case 253:
					*uParam2 = 10432;
					break;
			
				case 254:
					*uParam2 = 10433;
					break;
			
				case 255:
					*uParam2 = 10434;
					break;
			
				case 256:
					*uParam2 = 10435;
					break;
			
				case 257:
					*uParam2 = 10436;
					break;
			
				case 258:
					*uParam2 = 10437;
					break;
			
				case 259:
					*uParam2 = 10438;
					break;
			
				case 260:
					*uParam2 = 10439;
					break;
			
				case 261:
					*uParam2 = 11857;
					break;
			
				case 262:
					*uParam2 = 11858;
					break;
			
				case 263:
					*uParam2 = 11859;
					break;
			
				case 264:
					*uParam2 = 11860;
					break;
			
				case 265:
					*uParam2 = 11861;
					break;
			
				case 266:
					*uParam2 = 11862;
					break;
			
				case 267:
					*uParam2 = 11863;
					break;
			
				case 268:
					*uParam2 = 11864;
					break;
			
				case 269:
					*uParam2 = 11865;
					break;
			
				case 270:
					*uParam2 = 11866;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11890;
					break;
			
				case 272:
					*uParam2 = 11891;
					break;
			
				case 273:
					*uParam2 = 11892;
					break;
			
				case 274:
					*uParam2 = 11893;
					break;
			
				case 275:
					*uParam2 = 11894;
					break;
			
				case 276:
					*uParam2 = 11895;
					break;
			
				case 277:
					*uParam2 = 11896;
					break;
			
				case 278:
					*uParam2 = 11897;
					break;
			
				case 279:
					*uParam2 = 11898;
					break;
			
				case 280:
					*uParam2 = 11899;
					break;
			
				case 281:
					*uParam2 = 11900;
					break;
			
				case 282:
					*uParam2 = 11901;
					break;
			
				case 283:
					*uParam2 = 11991;
					break;
			
				case 284:
					*uParam2 = 11992;
					break;
			
				case 285:
					*uParam2 = 11993;
					break;
			
				case 286:
					*uParam2 = 11994;
					break;
			
				case 287:
					*uParam2 = 11995;
					break;
			
				case 288:
					*uParam2 = 11996;
					break;
			
				case 289:
					*uParam2 = 11997;
					break;
			
				case 290:
					*uParam2 = 11998;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 291:
					*uParam2 = 11999;
					break;
			
				case 292:
					*uParam2 = 12000;
					break;
			
				case 293:
					*uParam2 = 12001;
					break;
			
				case 294:
					*uParam2 = 12002;
					break;
			
				case 295:
					*uParam2 = 12003;
					break;
			
				case 296:
					*uParam2 = 12004;
					break;
			
				case 297:
					*uParam2 = 12005;
					break;
			
				case 298:
					*uParam2 = 12198;
					break;
			
				case 299:
					*uParam2 = 12199;
					break;
			
				case 300:
					*uParam2 = 12200;
					break;
			
				case 301:
					*uParam2 = 12201;
					break;
			
				case 302:
					*uParam2 = 12202;
					break;
			
				case 303:
					*uParam2 = 12203;
					break;
			
				case 304:
					*uParam2 = 12204;
					break;
			
				case 305:
					*uParam2 = 12205;
					break;
			
				case 306:
					*uParam2 = 12337;
					break;
			
				case 307:
					*uParam2 = 12338;
					break;
			
				case 308:
					*uParam2 = 12339;
					break;
			
				case 309:
					*uParam2 = 12340;
					break;
			
				case 310:
					*uParam2 = 12341;
					break;
			}
			break;
	}

	*uParam3 = fmMaleShopPedApparelItemIndex % 32;
	return *uParam2 != 14835;
}

BOOL func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xAE7F
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/][iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/][iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}

	return false;
}

BOOL func_141(int iParam0) // Position - 0xBD22
{
	if (!IS_BIT_SET(Global_79172[1 /*14*/].f_6, 0))
		return false;

	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_79172[1 /*14*/].f_6, 1))
			return false;
	
		if (!IS_BIT_SET(Global_79172[1 /*14*/].f_6, 2))
			return false;
	}

	return true;
}

BOOL func_142(Ped pedParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xBD6A
{
	int num;

	num = func_100(hParam1);

	if (num >= 3 || num < 0)
		return false;

	if (Global_113969.f_2366.f_539[num /*65*/].f_60 != -99)
	{
		if (!func_215(pedParam0, Global_113969.f_2366.f_539[num /*65*/].f_61, Global_113969.f_2366.f_539[num /*65*/].f_60) || iParam3 == 1)
		{
			*uParam2 = Global_113969.f_2366.f_539[num /*65*/].f_59;
			Global_113969.f_2366.f_539[num /*65*/].f_60 = -99;
			Global_113969.f_2366.f_539[num /*65*/].f_61 = 2;
			return true;
		}
	}

	return false;
}

ePedComponentType func_143(ePedComponentType epctParam0) // Position - 0xBE15
{
	switch (epctParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

struct<10> func_144(Hash hParam0, ePedComponentType epctParam1) // Position - 0xBEC5
{
	int i;
	var unk;

	unk = 9;

	for (i = 0; i <= 8; i = i + 1)
	{
		unk[i] = -99;
	}

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case 31:
					func_146(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_146(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_146(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_146(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_146(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_146(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_146(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_146(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_146(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_146(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_146(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_145(&unk, hParam0, epctParam1, 10);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case 31:
					func_146(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_146(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_146(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_146(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_146(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_146(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_146(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_146(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_146(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_146(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_145(&unk, hParam0, epctParam1, 9);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case 31:
					func_146(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_146(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_146(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_146(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_146(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_146(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_146(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_146(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_146(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_146(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_145(&unk, hParam0, epctParam1, 9);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case 31:
					func_146(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_146(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_146(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_146(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_146(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_146(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_146(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_146(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_146(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_146(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_146(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_146(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_146(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_146(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_146(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 14:
					func_146(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_146(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_146(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_146(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_146(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_146(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_146(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_146(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_146(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_146(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 24:
					func_146(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_145(&unk, hParam0, epctParam1, 25);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case 31:
					func_146(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_146(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_146(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_146(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_146(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_146(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_146(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_146(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_146(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_146(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_146(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_146(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_146(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_146(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_146(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
			
				case 14:
					func_146(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_146(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_146(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_146(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_146(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_146(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_146(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_146(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_146(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_146(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_145(&unk, hParam0, epctParam1, 25);
					break;
			}
			break;
	}

	return unk;
}

void func_145(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xC7F6
{
	int num;
	Hash itemHash;
	Hash unk;
	int unk2;

	if (iParam2 != 0 && iParam2 != -99)
	{
		uParam0->[0] = 0;
		uParam0->[1] = 1;
		uParam0->[2] = 2;
		uParam0->[3] = 3;
		uParam0->[4] = 4;
		uParam0->[5] = 5;
		uParam0->[6] = 6;
		uParam0->[7] = 7;
		uParam0->[8] = 8;
		num = 0;
	
		if (hParam1 == joaat("Player_Zero"))
			num = 0;
		else if (hParam1 == joaat("Player_One"))
			num = 1;
		else if (hParam1 == joaat("Player_Two"))
			num = 2;
		else if (hParam1 == joaat("MP_M_Freemode_01"))
			num = 3;
		else if (hParam1 == joaat("MP_F_Freemode_01"))
			num = 4;
	
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &itemHash);
	
		if (!FILES::IS_CONTENT_ITEM_LOCKED(itemHash))
		{
			for (i = 0; i < itemHash.f_3; i = i + 1)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 != -1)
					if (outPropVariant != 0 && outPropVariant != -1 && outPropVariant != joaat("0"))
						uParam0->[outPropVariant.f_2] = func_124(hParam1, outPropVariant, 14, num);
					else if (outPropVariant.f_1 != -1)
						uParam0->[outPropVariant.f_2] = outPropVariant.f_1;
			}
		}
	}

	return;
}

void func_146(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xC920
{
	uParam0->[0] = iParam1;
	uParam0->[1] = iParam2;
	uParam0->[2] = iParam3;
	uParam0->[3] = iParam4;
	uParam0->[4] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[6] = iParam7;
	uParam0->[7] = iParam8;
	uParam0->[8] = iParam9;
	return;
}

struct<17> func_147(Hash hParam0, ePedComponentType epctParam1) // Position - 0xC968
{
	int i;
	var unk;

	unk = 15;

	for (i = 0; i <= 14; i = i + 1)
	{
		unk[i] = -99;
	}

	unk.f_16 = 0;

	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case 0:
					if (Global_113969.f_9088.f_99.f_58[120])
						func_150(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					else
						func_150(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_150(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
			
				case 2:
					func_150(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
			
				case 3:
					func_150(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
			
				case 4:
					func_150(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
			
				case 5:
					func_150(&unk, -99, -99, Global_113969.f_2366.f_539.f_196[0], Global_113969.f_2366.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
			
				case 6:
					func_150(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_150(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 8:
					func_150(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_150(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_150(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
			
				case 11:
					func_150(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_150(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_150(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_150(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
			
				case 15:
					func_150(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
			
				case 16:
					func_150(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_150(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_150(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
			
				case 19:
					func_150(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_150(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_150(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_150(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_150(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_150(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_150(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_150(&unk, -99, -99, PV_COMP_UPPR, PV_COMP_UPPR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_150(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_150(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_150(&unk, -99, -99, PV_COMP_HAIR, PV_COMP_HAIR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_150(&unk, -99, -99, 161, PV_COMP_UPPR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_150(&unk, -99, -99, PV_COMP_UPPR, PV_COMP_UPPR, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
			
				case 32:
					func_150(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_150(&unk, -99, -99, 86, PV_COMP_LOWR, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_150(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
			
				case 35:
					func_150(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_150(&unk, -99, -99, PV_COMP_LOWR, PV_COMP_LOWR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_150(&unk, -99, -99, PV_COMP_HAND, PV_COMP_HAND, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_150(&unk, -99, -99, PV_COMP_FEET, PV_COMP_FEET, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_150(&unk, -99, -99, PV_COMP_TEEF, PV_COMP_TEEF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_150(&unk, -99, -99, PV_COMP_ACCS, PV_COMP_ACCS, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_150(&unk, -99, -99, PV_COMP_TASK, PV_COMP_TASK, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_150(&unk, -99, -99, PV_COMP_DECL, PV_COMP_DECL, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_150(&unk, -99, -99, PV_COMP_JBIB, PV_COMP_JBIB, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_150(&unk, -99, -99, PV_COMP_MAX, PV_COMP_MAX, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_150(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 46:
					func_150(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_150(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 48:
					func_150(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 49:
					func_150(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 50:
					func_150(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
			
				case 51:
					func_150(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 52:
					func_150(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_148(&unk, hParam0, epctParam1, 53);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case 0:
					func_150(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_150(&unk, -99, -99, 22, PV_COMP_DECL, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 2:
					func_150(&unk, -99, -99, Global_113969.f_2366.f_539.f_196[1], Global_113969.f_2366.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
			
				case 3:
					func_150(&unk, -99, -99, 23, PV_COMP_JBIB, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
			
				case 4:
					func_150(&unk, -99, -99, 23, PV_COMP_JBIB, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
			
				case 5:
					func_150(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 6:
					func_150(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_150(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
			
				case 8:
					func_150(&unk, -99, -99, 17, PV_COMP_HAND, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
			
				case 9:
					func_150(&unk, -99, -99, 16, PV_COMP_LOWR, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_150(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_150(&unk, -99, -99, 259, PV_COMP_DECL, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 12:
					func_150(&unk, -99, -99, 18, PV_COMP_FEET, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_150(&unk, -99, -99, 19, PV_COMP_TEEF, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_150(&unk, -99, -99, 20, PV_COMP_ACCS, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_150(&unk, -99, -99, 21, PV_COMP_TASK, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_150(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_150(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_150(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
			
				case 19:
					func_150(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_150(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_150(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
			
				case 22:
					func_150(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
			
				case 23:
					func_150(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
			
				case 24:
					func_150(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
			
				case 25:
					func_150(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
			
				case 26:
					func_150(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
			
				case 27:
					func_150(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
			
				case 28:
					func_150(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
			
				case 29:
					func_150(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
			
				case 30:
					func_150(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
			
				case 31:
					func_150(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
			
				case 32:
					func_150(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
			
				case 33:
					func_150(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
			
				case 34:
					func_150(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
			
				case 35:
					func_150(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
			
				case 36:
					func_150(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
			
				case 37:
					func_150(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
			
				case 38:
					func_150(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_150(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_150(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_150(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_150(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_150(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
			
				case 44:
					func_150(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 45:
					func_150(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
			
				case 46:
					func_150(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
			
				default:
					func_148(&unk, hParam0, epctParam1, 47);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case 0:
					func_150(&unk, -99, -99, PV_COMP_HEAD, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_150(&unk, -99, -99, 17, PV_COMP_HAND, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
			
				case 2:
					func_150(&unk, -99, -99, 43, PV_COMP_ACCS, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
			
				case 3:
					func_150(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
			
				case 4:
					func_150(&unk, -99, -99, Global_113969.f_2366.f_539.f_196[2], Global_113969.f_2366.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 5:
					func_150(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
			
				case 6:
					func_150(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
			
				case 7:
					func_150(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
			
				case 8:
					func_150(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_150(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_150(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_150(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_150(&unk, -99, -99, PV_COMP_HEAD, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_150(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_150(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_150(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_150(&unk, -99, -99, 44, PV_COMP_TASK, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_150(&unk, -99, -99, 45, PV_COMP_DECL, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_150(&unk, -99, -99, 46, PV_COMP_JBIB, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 19:
					func_150(&unk, -99, -99, 47, PV_COMP_MAX, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_150(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_150(&unk, -99, -99, PV_COMP_HEAD, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_150(&unk, -99, -99, 98, PV_COMP_HEAD, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_150(&unk, -99, -99, 27, PV_COMP_HEAD, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_150(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_150(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_150(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_150(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_150(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_150(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_150(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_150(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 32:
					func_150(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_150(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_150(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 35:
					func_150(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_150(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_150(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_150(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_150(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_150(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_150(&unk, -99, -99, PV_COMP_HAIR, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_150(&unk, -99, -99, 55, PV_COMP_HEAD, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_150(&unk, -99, -99, PV_COMP_HEAD, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_150(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_150(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 46:
					func_150(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_150(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_148(&unk, hParam0, epctParam1, 48);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case 0:
					func_150(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
			
				case 1:
					func_150(&unk, -99, -99, PV_COMP_BERD, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
			
				case 2:
					func_150(&unk, -99, -99, PV_COMP_HEAD, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
			
				case 3:
					func_150(&unk, -99, -99, PV_COMP_LOWR, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
			
				case 4:
					func_150(&unk, -99, -99, PV_COMP_BERD, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
			
				case 5:
					func_150(&unk, -99, -99, PV_COMP_BERD, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
			
				case 6:
					func_150(&unk, -99, -99, PV_COMP_BERD, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
			
				case 7:
					func_150(&unk, -99, -99, PV_COMP_BERD, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
			
				case 8:
					func_150(&unk, -99, -99, PV_COMP_HEAD, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
			
				case 9:
					func_150(&unk, -99, -99, PV_COMP_LOWR, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
			
				case 10:
					func_150(&unk, -99, -99, PV_COMP_BERD, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
			
				case 11:
					func_150(&unk, -99, -99, PV_COMP_BERD, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
			
				case 12:
					func_150(&unk, -99, -99, PV_COMP_BERD, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
			
				case 13:
					func_150(&unk, -99, -99, PV_COMP_BERD, PV_COMP_LOWR, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
			
				case 14:
					func_150(&unk, -99, -99, PV_COMP_BERD, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
			
				case 15:
					func_150(&unk, -99, -99, PV_COMP_BERD, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
			
				case 16:
					func_150(&unk, -99, -99, PV_COMP_BERD, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
			
				case 17:
					func_150(&unk, -99, -99, PV_COMP_BERD, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
			
				case 18:
					func_150(&unk, -99, -99, PV_COMP_HAND, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
			
				case 19:
					func_150(&unk, -99, -99, PV_COMP_HAND, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
			
				case 20:
					func_150(&unk, -99, -99, PV_COMP_BERD, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
			
				case 21:
					func_150(&unk, -99, -99, PV_COMP_HEAD, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
			
				case 22:
					func_150(&unk, -99, -99, PV_COMP_FEET, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
			
				case 23:
					func_150(&unk, -99, -99, PV_COMP_BERD, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
			
				case 24:
					func_150(&unk, -99, -99, PV_COMP_BERD, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
			
				case 25:
					func_150(&unk, -99, -99, PV_COMP_HAIR, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
			
				default:
					func_148(&unk, hParam0, epctParam1, 26);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case 0:
					func_150(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
			
				case 1:
					func_150(&unk, -99, -99, PV_COMP_HAND, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
			
				case 2:
					func_150(&unk, -99, -99, PV_COMP_LOWR, PV_COMP_BERD, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
			
				case 3:
					func_150(&unk, -99, -99, PV_COMP_BERD, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
			
				case 4:
					func_150(&unk, -99, -99, PV_COMP_HAIR, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
			
				case 5:
					func_150(&unk, -99, -99, PV_COMP_TASK, PV_COMP_TEEF, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
			
				case 6:
					func_150(&unk, -99, -99, PV_COMP_BERD, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
			
				case 7:
					func_150(&unk, -99, -99, PV_COMP_LOWR, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
			
				case 8:
					func_150(&unk, -99, -99, PV_COMP_BERD, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
			
				case 9:
					func_150(&unk, -99, -99, PV_COMP_HAND, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
			
				case 10:
					func_150(&unk, -99, -99, PV_COMP_TASK, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
			
				case 11:
					func_150(&unk, -99, -99, PV_COMP_HAND, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
			
				case 12:
					func_150(&unk, -99, -99, PV_COMP_FEET, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
			
				case 13:
					func_150(&unk, -99, -99, PV_COMP_HAND, PV_COMP_HEAD, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
			
				case 14:
					func_150(&unk, -99, -99, PV_COMP_LOWR, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
			
				case 15:
					func_150(&unk, -99, -99, PV_COMP_TASK, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
			
				case 16:
					func_150(&unk, -99, -99, PV_COMP_HAIR, PV_COMP_ACCS, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
			
				case 17:
					func_150(&unk, -99, -99, PV_COMP_HAND, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
			
				case 18:
					func_150(&unk, -99, -99, PV_COMP_FEET, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
			
				case 19:
					func_150(&unk, -99, -99, PV_COMP_LOWR, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
			
				case 20:
					func_150(&unk, -99, -99, PV_COMP_LOWR, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
			
				case 21:
					func_150(&unk, -99, -99, PV_COMP_LOWR, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
			
				case 22:
					func_150(&unk, -99, -99, PV_COMP_UPPR, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
			
				case 23:
					func_150(&unk, -99, -99, PV_COMP_HEAD, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
			
				case 24:
					func_150(&unk, -99, -99, PV_COMP_HAND, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
			
				case 25:
					func_150(&unk, -99, -99, PV_COMP_TEEF, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
			
				case 26:
					func_150(&unk, -99, -99, PV_COMP_LOWR, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
			
				case 27:
					func_150(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
			
				default:
					func_148(&unk, hParam0, epctParam1, 28);
					break;
			}
			break;
	}

	return unk;
}

void func_148(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xE7B0
{
	int num;
	Hash outfit;
	Hash unk;
	var unk2;
	int unk3;

	uParam0->[0] = 0;
	uParam0->[2] = -99;
	uParam0->[3] = 0;
	uParam0->[4] = 0;
	uParam0->[6] = 0;
	uParam0->[5] = 0;
	uParam0->[8] = 0;
	uParam0->[9] = 0;
	uParam0->[10] = 0;
	uParam0->[1] = 0;
	uParam0->[7] = 0;
	uParam0->[11] = 0;
	uParam0->[13] = -99;
	uParam0->[14] = -99;
	uParam0->f_16 = 0;
	num = 0;

	if (hParam1 == joaat("Player_Zero"))
	{
		num = 0;
		uParam0->[13] = 10 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("Player_One"))
	{
		num = 1;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("Player_Two"))
	{
		num = 2;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("MP_M_Freemode_01"))
	{
		num = 3;
	}
	else if (hParam1 == joaat("MP_F_Freemode_01"))
	{
		num = 4;
	}

	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT(iParam2 - iParam3, &outfit);

	if (!FILES::IS_CONTENT_ITEM_LOCKED(outfit))
	{
		for (i = 0; i < outfit.f_4; i = i + 1)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(outfit.f_1, i, &outComponentVariant))
			{
				if (outComponentVariant != 0 && outComponentVariant != -1 && outComponentVariant != joaat("0"))
				{
					if (outComponentVariant.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
						FILES::GET_SHOP_PED_COMPONENT(outComponentVariant, &outComponent);
					
						if (outComponentVariant != outComponent.f_1)
							uParam0->f_16 = 1;
					}
				
					if (outComponentVariant.f_2 == 10 && uParam0->f_16)
					{
						uParam0->[func_149(outComponentVariant.f_2)] = outComponentVariant;
						uParam0->f_16 = 1;
					}
					else
					{
						uParam0->[func_149(outComponentVariant.f_2)] = func_124(hParam1, outComponentVariant, func_149(outComponentVariant.f_2), num);
					}
				}
				else if (outComponentVariant.f_1 != -1)
				{
					uParam0->[func_149(outComponentVariant.f_2)] = outComponentVariant.f_1;
				}
			}
		}
	
		if (outfit.f_3 == 0)
			uParam0->[13] = -99;
		else
			uParam0->[13] = outfit.f_1;
	}

	return;
}

int func_149(int iParam0) // Position - 0xE99A
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

void func_150(var uParam0, int iParam1, int iParam2, ePedComponentType epctParam3, ePedComponentType epctParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0xEA4A
{
	uParam0->[0] = iParam1;
	uParam0->[2] = iParam2;
	uParam0->[3] = epctParam3;
	uParam0->[4] = epctParam4;
	uParam0->[6] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[8] = iParam7;
	uParam0->[9] = iParam8;
	uParam0->[10] = iParam9;
	uParam0->[1] = iParam10;
	uParam0->[7] = iParam11;
	uParam0->[11] = iParam12;
	uParam0->[13] = iParam13;
	uParam0->[14] = -99;
	return;
}

struct<14> func_151(Hash hParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, int iParam3) // Position - 0xEABB
{
	func_214();

	if (hParam0 == joaat("Player_Zero"))
		func_196(epctParam1, epctParam2);
	else if (hParam0 == joaat("Player_One"))
		func_177(epctParam1, epctParam2);
	else if (hParam0 == joaat("Player_Two"))
		func_152(epctParam1, epctParam2);

	return Global_79172[0 /*14*/];
}

void func_152(int iParam0, int iParam1) // Position - 0xEB0D
{
	switch (iParam0)
	{
		case 0:
			func_176(iParam1);
			break;
	
		case 2:
			func_175(iParam1);
			break;
	
		case 3:
			func_172(iParam1);
			break;
	
		case 4:
			func_171(iParam1);
			break;
	
		case 6:
			func_170(iParam1);
			break;
	
		case 5:
			func_169(iParam1);
			break;
	
		case 8:
			func_168(iParam1);
			break;
	
		case 9:
			func_167(iParam1);
			break;
	
		case 10:
			func_166(iParam1);
			break;
	
		case 1:
			func_165(iParam1);
			break;
	
		case 7:
			func_164(iParam1);
			break;
	
		case 11:
			func_163(iParam1);
			break;
	
		case 12:
			func_162(iParam1);
			break;
	
		case 13:
			func_161(iParam1);
			break;
	
		case 14:
			func_153(iParam1);
			break;
	}

	return;
}

void func_153(int iParam0) // Position - 0xEBFD
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E1" /*Specs Pest Shades*/, 16);
			num2 = 1;
			num3 = 0;
			num = 45;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2" /*Dix Charcoal Glasses*/, 16);
			num2 = 2;
			num3 = 0;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_1" /*Dix Brown Glasses*/, 16);
			num2 = 2;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_2" /*Dix Black Glasses*/, 16);
			num2 = 2;
			num3 = 2;
			num = 55;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_3" /*Dix Checked Glasses*/, 16);
			num2 = 2;
			num3 = 3;
			num = 52;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_4" /*Dix White Glasses*/, 16);
			num2 = 2;
			num3 = 4;
			num = 54;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_5" /*Dix Red Glasses*/, 16);
			num2 = 2;
			num3 = 5;
			num = 54;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_6" /*Dix Maroon Glasses*/, 16);
			num2 = 2;
			num3 = 6;
			num = 55;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_7" /*Dix Yellow Glasses*/, 16);
			num2 = 2;
			num3 = 7;
			num = 55;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_8" /*Dix Spring Glasses*/, 16);
			num2 = 2;
			num3 = 8;
			num = 58;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_9" /*Dix Fall Glasses*/, 16);
			num2 = 2;
			num3 = 9;
			num = 58;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3" /*Tung Charcoal Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 75;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_1" /*Tung White Shades*/, 16);
			num2 = 3;
			num3 = 1;
			num = 75;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_2" /*Tung Ash Shades*/, 16);
			num2 = 3;
			num3 = 2;
			num = 75;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_3" /*Tung Red Shades*/, 16);
			num2 = 3;
			num3 = 3;
			num = 75;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_4" /*Tung Blue Shades*/, 16);
			num2 = 3;
			num3 = 4;
			num = 75;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_5" /*Tung Black Shades*/, 16);
			num2 = 3;
			num3 = 5;
			num = 75;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_6" /*Tung Orange Tint Shades*/, 16);
			num2 = 3;
			num3 = 6;
			num = 75;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_7" /*Tung Purple Tint Shades*/, 16);
			num2 = 3;
			num3 = 7;
			num = 75;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_8" /*Tung Hornet Shades*/, 16);
			num2 = 3;
			num3 = 8;
			num = 75;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_9" /*Tung Two-Tone Shades*/, 16);
			num2 = 3;
			num3 = 9;
			num = 75;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			num4 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_0" /*OG Black Shades*/, 16);
			num2 = 7;
			num3 = 0;
			num = 60;
			num4 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_1" /*OG Ash Shades*/, 16);
			num2 = 7;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_2" /*OG Red Shades*/, 16);
			num2 = 7;
			num3 = 2;
			num = 50;
			num4 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_3" /*OG Yellow Shades*/, 16);
			num2 = 7;
			num3 = 3;
			num = 59;
			num4 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_4" /*OG Brown Shades*/, 16);
			num2 = 7;
			num3 = 4;
			num = 55;
			num4 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_5" /*OG Gray Shades*/, 16);
			num2 = 7;
			num3 = 5;
			num = 55;
			num4 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_6" /*OG Blue Shades*/, 16);
			num2 = 7;
			num3 = 6;
			num = 65;
			num4 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_7" /*OG Smoke Shades*/, 16);
			num2 = 7;
			num3 = 7;
			num = 59;
			num4 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_8" /*OG Orange Shades*/, 16);
			num2 = 7;
			num3 = 8;
			num = 79;
			num4 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_9" /*OG Slate Shades*/, 16);
			num2 = 7;
			num3 = 9;
			num = 79;
			num4 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_0" /*Steel Aviators*/, 16);
			num2 = 8;
			num3 = 0;
			num = 150;
			num4 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_1" /*Slate Aviators*/, 16);
			num2 = 8;
			num3 = 1;
			num = 150;
			num4 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_2" /*Gold Aviators*/, 16);
			num2 = 8;
			num3 = 2;
			num = 170;
			num4 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_3" /*Silver Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 3;
			num = 175;
			num4 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_4" /*Aluminum Aviators*/, 16);
			num2 = 8;
			num3 = 4;
			num = 180;
			num4 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_5" /*Bronze Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 5;
			num = 185;
			num4 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_6" /*Brown Two-Tone Aviators*/, 16);
			num2 = 8;
			num3 = 6;
			num = 189;
			num4 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_7" /*Black Aviators*/, 16);
			num2 = 8;
			num3 = 7;
			num = 195;
			num4 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_8" /*Silver Aviators*/, 16);
			num2 = 8;
			num3 = 8;
			num = 210;
			num4 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_9" /*Smoke Aviators*/, 16);
			num2 = 8;
			num3 = 9;
			num = 215;
			num4 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_0" /*Krepp Gold Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 165;
			num4 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_1" /*Krepp Gray Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 165;
			num4 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_2" /*Krepp Slate Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 169;
			num4 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_3" /*Krepp Black Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 169;
			num4 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_4" /*Krepp White Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 175;
			num4 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_5" /*Krepp Silver Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 175;
			num4 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_6" /*Krepp Ash Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 175;
			num4 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_7" /*Krepp Brown Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 189;
			num4 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_8" /*Krepp Beige Shades*/, 16);
			num2 = 9;
			num3 = 8;
			num = 195;
			num4 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_9" /*Krepp Coffee Shades*/, 16);
			num2 = 9;
			num3 = 9;
			num = 195;
			num4 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_0" /*Broker Black Shades*/, 16);
			num2 = 10;
			num3 = 0;
			num = 49;
			num4 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_1" /*Broker Purple Shades*/, 16);
			num2 = 10;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_2" /*Broker Brown Shades*/, 16);
			num2 = 10;
			num3 = 2;
			num = 52;
			num4 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_3" /*Broker Orange Shades*/, 16);
			num2 = 10;
			num3 = 3;
			num = 55;
			num4 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_4" /*Broker Gray Shades*/, 16);
			num2 = 10;
			num3 = 4;
			num = 60;
			num4 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_5" /*Broker Striped Shades*/, 16);
			num2 = 10;
			num3 = 5;
			num = 58;
			num4 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_6" /*Broker Beige Shades*/, 16);
			num2 = 10;
			num3 = 6;
			num = 60;
			num4 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_7" /*Broker Ash Shades*/, 16);
			num2 = 10;
			num3 = 7;
			num = 63;
			num4 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_8" /*Broker Charcoal Shades*/, 16);
			num2 = 10;
			num3 = 8;
			num = 65;
			num4 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_9" /*Broker Gradient Shades*/, 16);
			num2 = 10;
			num3 = 9;
			num = 68;
			num4 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H2_0" /*Hockey Mask*/, 16);
			num2 = 2;
			num3 = 0;
			num = 320;
			num4 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_0" /*Black Hat*/, 16);
			num2 = 7;
			num3 = 0;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_1", 16);
			num2 = 7;
			num3 = 1;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 4;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 5;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 6;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 7;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 8;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 9;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 10;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 11;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 12;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 13;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 14;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 15;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 6;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 7;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 15;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 16;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 16;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 17;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 18;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 18;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 19;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 19;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 20;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 20;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 20;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			num4 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			num4 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 1;
			num4 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 2;
			num4 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 3;
			num4 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 4;
			num4 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 5;
			num4 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			num4 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			num4 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_0" /*Hawk and Little Baseball Cap*/, 16);
			num2 = 26;
			num3 = 0;
			num = 20;
			num4 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_1" /*Taco Bomb Baseball Cap*/, 16);
			num2 = 26;
			num3 = 1;
			num = 25;
			num4 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_2" /*Nut House Baseball Cap*/, 16);
			num2 = 26;
			num3 = 2;
			num = 25;
			num4 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_3" /*Rusty Brown's Baseball Cap*/, 16);
			num2 = 26;
			num3 = 3;
			num = 22;
			num4 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_4" /*Bishop's Chicken Baseball Cap*/, 16);
			num2 = 26;
			num3 = 4;
			num = 20;
			num4 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_5" /*24/7 Baseball Cap*/, 16);
			num2 = 26;
			num3 = 5;
			num = 25;
			num4 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_6" /*iFruit 80s Baseball Cap*/, 16);
			num2 = 26;
			num3 = 6;
			num = 28;
			num4 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_7" /*Blarneys Baseball Cap*/, 16);
			num2 = 26;
			num3 = 7;
			num = 24;
			num4 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_8" /*Pisswasser Baseball Cap*/, 16);
			num2 = 26;
			num3 = 8;
			num = 25;
			num4 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_9" /*RON Baseball Cap*/, 16);
			num2 = 26;
			num3 = 9;
			num = 22;
			num4 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_10" /*Logger Light Baseball Cap*/, 16);
			num2 = 26;
			num3 = 10;
			num = 18;
			num4 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_11" /*Meteorite Baseball Cap*/, 16);
			num2 = 26;
			num3 = 11;
			num = 20;
			num4 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_12" /*Dusche Gold Baseball Cap*/, 16);
			num2 = 26;
			num3 = 12;
			num = 24;
			num4 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_13" /*Barracho Baseball Cap*/, 16);
			num2 = 26;
			num3 = 13;
			num = 22;
			num4 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_14" /*Vespucci Beach Baseball Cap*/, 16);
			num2 = 26;
			num3 = 14;
			num = 25;
			num4 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_15" /*Orang-O-Tang Baseball Cap*/, 16);
			num2 = 26;
			num3 = 15;
			num = 25;
			num4 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			num4 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 155, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_154(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0xFE74
{
	int num;
	int num2;

	iParam0->f_6 = 0;
	*iParam0 = iParam9;
	iParam0->f_1 = iParam2 % 32;
	iParam0->f_2 = iParam2 / 32;
	iParam0->f_3 = iParam4;
	iParam0->f_4 = iParam5;
	iParam0->f_7 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
	iParam0->f_13 = iParam8;
	iParam0->f_12 = func_159(iParam8);

	if (iParam0->f_2 >= 10 && iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		!bParam10;
		iParam0->f_2 = 0;
	}

	MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL");

	if (bParam7)
		MISC::SET_BIT(&(iParam0->f_6), 3);

	if (bParam10)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
			MISC::SET_BIT(&(iParam0->f_6), 5);
	
		MISC::SET_BIT(&(iParam0->f_6), 1);
		MISC::SET_BIT(&(iParam0->f_6), 2);
		MISC::SET_BIT(&(iParam0->f_6), 6);
	
		if (func_34(14))
			return;
	
		if (iParam1 == 1)
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
				MISC::SET_BIT(&(iParam0->f_6), 7);
	
		if (iParam1 == 12)
		{
			if (!func_158(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_158(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_158(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_158(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else
		{
			if (!func_158(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_158(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
	
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(iParam0->f_6), 1);
			MISC::CLEAR_BIT(&(iParam0->f_6), 0);
		}
	}
	else if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
		MISC::SET_BIT(&(iParam0->f_6), 5);
	
		if (func_140(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 1);
	
		if (func_140(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 2);
	
		if (!func_140(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 4);
	}
	else
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 || iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12)
		{
			if (func_34(14))
				return;
		
			num = func_138(func_157(iParam1, iParam0->f_2), Global_79169);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 1);
		
			num = func_138(func_156(iParam1, iParam0->f_2), Global_79169);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 2);
		
			if (func_155(iParam1, iParam0->f_2, &num2))
			{
				num = func_138(num2, Global_79169);
			
				if (!IS_BIT_SET(num, iParam0->f_1))
					MISC::SET_BIT(&(iParam0->f_6), 4);
			}
		}
		else
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	return;
}

BOOL func_155(int iParam0, int iParam1, var uParam2) // Position - 0x10219
{
	*uParam2 = 979;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
			
				case 3:
					*uParam2 = 1430;
					break;
			
				case 4:
					*uParam2 = 996;
					break;
			
				case 6:
					*uParam2 = 1004;
					break;
			
				case 8:
					*uParam2 = 1431;
					break;
			
				case 9:
					*uParam2 = 1439;
					break;
			
				case 10:
					*uParam2 = 1441;
					break;
			
				case 1:
					*uParam2 = 1012;
					break;
			
				case 7:
					*uParam2 = 1442;
					break;
			
				case 11:
					*uParam2 = 988;
					break;
			
				case 14:
					*uParam2 = 1020;
					break;
			
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
			
				case 4:
					*uParam2 = 997;
					break;
			
				case 6:
					*uParam2 = 1005;
					break;
			
				case 8:
					*uParam2 = 1432;
					break;
			
				case 9:
					*uParam2 = 1440;
					break;
			
				case 7:
					*uParam2 = 1443;
					break;
			
				case 11:
					*uParam2 = 989;
					break;
			
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
			
				case 4:
					*uParam2 = 998;
					break;
			
				case 6:
					*uParam2 = 1006;
					break;
			
				case 8:
					*uParam2 = 1433;
					break;
			
				case 7:
					*uParam2 = 1444;
					break;
			
				case 11:
					*uParam2 = 990;
					break;
			
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
			
				case 6:
					*uParam2 = 1007;
					break;
			
				case 8:
					*uParam2 = 1434;
					break;
			
				case 11:
					*uParam2 = 991;
					break;
			
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
			
				case 6:
					*uParam2 = 1008;
					break;
			
				case 8:
					*uParam2 = 1435;
					break;
			
				case 11:
					*uParam2 = 992;
					break;
			
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
			
				case 6:
					*uParam2 = 1009;
					break;
			
				case 8:
					*uParam2 = 1436;
					break;
			
				case 11:
					*uParam2 = 993;
					break;
			
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
			
				case 6:
					*uParam2 = 1010;
					break;
			
				case 8:
					*uParam2 = 1437;
					break;
			
				case 11:
					*uParam2 = 994;
					break;
			
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
			
				case 6:
					*uParam2 = 1011;
					break;
			
				case 8:
					*uParam2 = 1438;
					break;
			
				case 11:
					*uParam2 = 995;
					break;
			
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}

	return *uParam2 != 979;
}

int func_156(int iParam0, int iParam1) // Position - 0x1061E
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
			
				case 3:
					return 1415;
			
				case 4:
					return 944;
			
				case 6:
					return 952;
			
				case 8:
					return 1416;
			
				case 9:
					return 1424;
			
				case 10:
					return 1426;
			
				case 1:
					return 960;
			
				case 7:
					return 1427;
			
				case 11:
					return 936;
			
				case 14:
					return 968;
			
				case 12:
					return 979;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return &func_1;
			
				case 4:
					return 945;
			
				case 6:
					return 953;
			
				case 8:
					return 1417;
			
				case 9:
					return 1425;
			
				case 7:
					return &func_5;
			
				case 11:
					return 937;
			
				case 14:
					return 969;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
			
				case 4:
					return 946;
			
				case 6:
					return 954;
			
				case 8:
					return 1418;
			
				case 7:
					return 1429;
			
				case 11:
					return 938;
			
				case 14:
					return 970;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
			
				case 6:
					return 955;
			
				case 8:
					return 1419;
			
				case 11:
					return 939;
			
				case 14:
					return 971;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
			
				case 6:
					return 956;
			
				case 8:
					return 1420;
			
				case 11:
					return 940;
			
				case 14:
					return 972;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
			
				case 6:
					return 957;
			
				case 8:
					return 1421;
			
				case 11:
					return 941;
			
				case 14:
					return 973;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
			
				case 6:
					return 958;
			
				case 8:
					return 1422;
			
				case 11:
					return 942;
			
				case 14:
					return 974;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
			
				case 6:
					return 959;
			
				case 8:
					return 1423;
			
				case 11:
					return 943;
			
				case 14:
					return 975;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
			}
			break;
	}

	return 936;
}

int func_157(int iParam0, int iParam1) // Position - 0x10A19
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
			
				case 3:
					return 1400;
			
				case 4:
					return 892;
			
				case 6:
					return 900;
			
				case 8:
					return 1401;
			
				case 9:
					return 1409;
			
				case 10:
					return 1411;
			
				case 1:
					return 908;
			
				case 7:
					return 1412;
			
				case 11:
					return 884;
			
				case 14:
					return 916;
			
				case 12:
					return 927;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
			
				case 4:
					return 893;
			
				case 6:
					return 901;
			
				case 8:
					return 1402;
			
				case 9:
					return 1410;
			
				case 7:
					return 1413;
			
				case 11:
					return 885;
			
				case 14:
					return 917;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
			
				case 4:
					return 894;
			
				case 6:
					return 902;
			
				case 8:
					return 1403;
			
				case 7:
					return 1414;
			
				case 11:
					return 886;
			
				case 14:
					return 918;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
			
				case 6:
					return 903;
			
				case 8:
					return 1404;
			
				case 11:
					return 887;
			
				case 14:
					return 919;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
			
				case 6:
					return 904;
			
				case 8:
					return 1405;
			
				case 11:
					return 888;
			
				case 14:
					return 920;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
			
				case 6:
					return 905;
			
				case 8:
					return 1406;
			
				case 11:
					return 889;
			
				case 14:
					return 921;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
			
				case 6:
					return 906;
			
				case 8:
					return 1407;
			
				case 11:
					return 890;
			
				case 14:
					return 922;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
			
				case 6:
					return 907;
			
				case 8:
					return 1408;
			
				case 11:
					return 891;
			
				case 14:
					return 923;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
			}
			break;
	}

	return 884;
}

BOOL func_158(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x10E14
{
	int num;
	int num2;
	int num3;
	int num4;

	num = Global_79169;

	if (iParam4 != -1)
		num = iParam4;

	if (func_139(hParam0, iParam1, &num3, &num2, bParam2, bParam3))
	{
		num4 = func_138(num3, num);
		return IS_BIT_SET(num4, num2);
	}

	return false;
}

int func_159(int iParam0) // Position - 0x10E52
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	}

	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x10F26
{
	int num;
	int num2;
	Hash outfit;
	int unk;
	int unk2;
	Hash unk3;
	int unk4;
	int unk5;
	int unk6;
	Hash unk7;
	int unk8;
	int unk9;

	num = iParam1 - iParam2;
	num = num;

	if (num < 0)
		return;

	num2 = Global_79172[0 /*14*/].f_5;

	if (iParam0 == 12)
	{
		outfitIndex = iParam1 - iParam2;
	
		if (outfitIndex >= 0)
		{
			num3 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
		
			if (num3 > outfitIndex)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(outfitIndex, &outfit);
				Global_2883588 = outfit.f_1;
				Global_2883589 = outfit;
				func_154(&Global_79172[0 /*14*/], iParam0, iParam1, &(outfit.f_7), 0, 0, outfit.f_2, false, -1, 2, true);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_154(&Global_79172[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&outProp);
		componentId = iParam1 - iParam2;
	
		if (componentId >= 0)
		{
			num5 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, true, -1, -1);
		
			if (num5 > componentId)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
			
				if (outProp.f_6 == 0)
					num4 = 9;
				else if (outProp.f_6 == 1)
					num4 = 10;
				else if (outProp.f_6 == 2)
					num4 = 2;
				else if (outProp.f_6 == 3)
					num4 = 3;
				else if (outProp.f_6 == 4)
					num4 = 4;
				else if (outProp.f_6 == 5)
					num4 = 5;
				else if (outProp.f_6 == 6)
					num4 = 6;
				else if (outProp.f_6 == 7)
					num4 = 7;
				else if (outProp.f_6 == 8)
					num4 = 8;
				else
					num4 = -1;
			
				Global_2883588 = outProp.f_1;
				Global_2883589 = outProp;
				func_154(&Global_79172[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num4, 2, outProp.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
	
		if (hParam3 != -1 && Global_79370)
		{
			FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
			Global_2883588 = outComponent.f_1;
			Global_2883589 = outComponent;
			func_154(&Global_79172[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 != 0);
			return;
		}
	
		componentId2 = iParam1 - iParam2;
	
		if (componentId2 >= 0)
		{
			num6 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_143(iParam0));
		
			if (num6 > componentId2)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
				Global_2883588 = outComponent.f_1;
				Global_2883589 = outComponent;
				func_154(&Global_79172[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 != 0);
				return;
			}
		}
	}

	return;
}

void func_161(int iParam0) // Position - 0x111AD
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 9, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_162(int iParam0) // Position - 0x11304
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_0" /*White T-Shirt, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_5" /*Dock Worker*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_6" /*Highway Patrol*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_7" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_8" /*Tennis*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_9", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_10" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_13" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_14" /*Underwear*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_15" /*Security*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_16" /*Toilet*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_17" /*Prologue*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_18" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_19" /*Pink Ladies Sweats*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_20" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_21" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_22" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_23" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_24" /*Hunting*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_25" /*White T-Shirt, Cargo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_26" /*Denim Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_27" /*Ludendorff*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_28" /*Beige Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 119;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_29" /*Blue Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 99;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_30" /*Brown Plaid Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 129;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_44" /*Burgundy Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_45" /*Murky Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 120;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_46" /*Mint Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 139;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_47" /*Green Plaid Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 149;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_48" /*Blue-Gray Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 145;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_49" /*Caramel Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 140;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_50" /*Mocha Cheap Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 135;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_31" /*Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_32" /*Sand Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_33" /*Charcoal Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_34" /*Off-White Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_35" /*Cream Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_36" /*Black Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_37" /*Ash Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_38" /*Red T-Shirt, Cargo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_39" /*Amethyst Polo Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_40" /*White T-Shirt, Camo Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_41" /*Moto-X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_42" /*White Tank Top, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_43" /*White T-Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 48, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_163(int iParam0) // Position - 0x11812
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 1, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_164(int iParam0) // Position - 0x11887
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 1, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_165(int iParam0) // Position - 0x118FB
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_1_0" /*Beard 1*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_2_0" /*Stubble*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_3_0" /*Big Mustache*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_4_0" /*Handlebar*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_5_0" /*The Gerry*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 6, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_166(int iParam0) // Position - 0x119E2
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 7;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 8;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 9;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 4;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 5;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 6;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			break;
	
		default:
			func_160(num6, iParam0, 33, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_167(int iParam0) // Position - 0x11D45
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 0;
			num = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 1;
			num = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 2;
			num = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 3;
			num = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 4;
			num = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 6;
			num3 = 5;
			num = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 7;
			num3 = 0;
			num = 270;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 7;
			num3 = 1;
			num = 270;
			break;
	
		default:
			func_160(num6, iParam0, 17, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_168(int iParam0) // Position - 0x11F56
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_0" /*Black Digital Watch*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_1" /*White Digital Watch*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 18, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_169(int iParam0) // Position - 0x12186
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 7, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_170(int iParam0) // Position - 0x12296
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_0" /*Black Chukka Boots*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_1" /*Snakeskin Chukka Boots*/, 16);
			num2 = 0;
			num3 = 1;
			num = 22;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_2" /*Gray Chukka Boots*/, 16);
			num2 = 0;
			num3 = 2;
			num = 45;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_3" /*Brown Chukka Boots*/, 16);
			num2 = 0;
			num3 = 3;
			num = 65;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_4" /*Crocodile Skin Boots*/, 16);
			num2 = 0;
			num3 = 4;
			num = 58;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_5" /*Cowboy Boots*/, 16);
			num2 = 0;
			num3 = 5;
			num = 72;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_6" /*Yellow Reptile Skin Boots*/, 16);
			num2 = 0;
			num3 = 6;
			num = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_7" /*Reptile Skin Boots*/, 16);
			num2 = 0;
			num3 = 7;
			num = 60;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_5_0" /*Work Boots*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_8_0" /*Dressy Shoes*/, 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_0" /*Black Leather Loafers*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_1" /*Gray Leather Loafers*/, 16);
			num2 = 9;
			num3 = 1;
			num = 680;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_2" /*Cream Leather Loafers*/, 16);
			num2 = 9;
			num3 = 2;
			num = 650;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_3" /*Brown Leather Loafers*/, 16);
			num2 = 9;
			num3 = 3;
			num = 670;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_4" /*White Leather Loafers*/, 16);
			num2 = 9;
			num3 = 4;
			num = 700;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_5" /*Russet Leather Loafers*/, 16);
			num2 = 9;
			num3 = 5;
			num = 680;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_6" /*White Snakeskin Loafers*/, 16);
			num2 = 9;
			num3 = 6;
			num = 720;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_7" /*Rattlesnake Loafers*/, 16);
			num2 = 9;
			num3 = 7;
			num = 740;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 9;
			num3 = 8;
			num = 760;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 9;
			num3 = 9;
			num = 780;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_10" /*Pale Reptile Loafers*/, 16);
			num2 = 9;
			num3 = 10;
			num = 750;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_11" /*Tan Alligator Loafers*/, 16);
			num2 = 9;
			num3 = 11;
			num = 700;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_10_0" /*Chestnut Boots*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_0" /*All Black Oxfords*/, 16);
			num2 = 18;
			num3 = 0;
			num = 790;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_1" /*Chocolate Oxfords*/, 16);
			num2 = 18;
			num3 = 1;
			num = 750;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_2" /*Chestnut Oxfords*/, 16);
			num2 = 18;
			num3 = 2;
			num = 860;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_3" /*Tan Oxfords*/, 16);
			num2 = 18;
			num3 = 3;
			num = 750;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_4" /*White Oxfords*/, 16);
			num2 = 18;
			num3 = 4;
			num = 790;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_5" /*Ash Oxfords*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 18;
			num3 = 6;
			num = 820;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_7" /*Beige Oxfords*/, 16);
			num2 = 18;
			num3 = 7;
			num = 800;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_8" /*Topaz Oxfords*/, 16);
			num2 = 18;
			num3 = 8;
			num = 850;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_9" /*Black Oxfords*/, 16);
			num2 = 18;
			num3 = 9;
			num = 870;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_10" /*Lime Oxfords*/, 16);
			num2 = 18;
			num3 = 10;
			num = 720;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_11" /*Hawthorn Oxfords*/, 16);
			num2 = 18;
			num3 = 11;
			num = 740;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_12" /*Coffee Oxfords*/, 16);
			num2 = 18;
			num3 = 12;
			num = 800;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_13" /*Gray Oxfords*/, 16);
			num2 = 18;
			num3 = 13;
			num = 750;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_14" /*Cream Oxfords*/, 16);
			num2 = 18;
			num3 = 14;
			num = 770;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_15" /*Navy Oxfords*/, 16);
			num2 = 18;
			num3 = 15;
			num = 860;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_0" /*Black Slip-Ons*/, 16);
			num2 = 19;
			num3 = 0;
			num = 850;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_1" /*Red Slip-Ons*/, 16);
			num2 = 19;
			num3 = 1;
			num = 800;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_2" /*Brown Slip-Ons*/, 16);
			num2 = 19;
			num3 = 2;
			num = 780;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 19;
			num3 = 3;
			num = 890;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_4" /*Green Slip-Ons*/, 16);
			num2 = 19;
			num3 = 4;
			num = 820;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_5" /*Copper Slip-Ons*/, 16);
			num2 = 19;
			num3 = 5;
			num = 840;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 6;
			num = 870;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_7" /*Navy Slip-Ons*/, 16);
			num2 = 19;
			num3 = 7;
			num = 930;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_8" /*Blue Slip-Ons*/, 16);
			num2 = 19;
			num3 = 8;
			num = 880;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_9" /*Beige Slip-Ons*/, 16);
			num2 = 19;
			num3 = 9;
			num = 900;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_10" /*White Slip-Ons*/, 16);
			num2 = 19;
			num3 = 10;
			num = 920;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_11" /*Tan Slip-Ons*/, 16);
			num2 = 19;
			num3 = 11;
			num = 970;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 12;
			num = 990;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 13;
			num = 960;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 14;
			num = 980;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_15" /*Gray Slip-Ons*/, 16);
			num2 = 19;
			num3 = 15;
			num = 950;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_0" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 0;
			num = 110;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_1" /*Navy Wingtips*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_2" /*Coffee Wingtips*/, 16);
			num2 = 20;
			num3 = 2;
			num = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_3" /*Burgundy Wingtips*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_4" /*Blue Wingtips*/, 16);
			num2 = 20;
			num3 = 4;
			num = 125;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 20;
			num3 = 5;
			num = 128;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_6" /*Black Wingtips*/, 16);
			num2 = 20;
			num3 = 6;
			num = 135;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_7" /*Tan Wingtips*/, 16);
			num2 = 20;
			num3 = 7;
			num = 130;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_8" /*Purple Wingtips*/, 16);
			num2 = 20;
			num3 = 8;
			num = 145;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_9" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 9;
			num = 110;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_10" /*Chocolate Wingtips*/, 16);
			num2 = 20;
			num3 = 10;
			num = 120;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_11" /*Green Wingtips*/, 16);
			num2 = 20;
			num3 = 11;
			num = 150;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_12" /*Ash Wingtips*/, 16);
			num2 = 20;
			num3 = 12;
			num = 125;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_13" /*Olive Wingtips*/, 16);
			num2 = 20;
			num3 = 13;
			num = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_14" /*Two-Tone Wingtips*/, 16);
			num2 = 20;
			num3 = 14;
			num = 130;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_15" /*Yellow Wingtips*/, 16);
			num2 = 20;
			num3 = 15;
			num = 110;
			break;
	
		default:
			func_160(num6, iParam0, 84, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_171(int iParam0) // Position - 0x12C35
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_0" /*Blue Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_1" /*Dirty Blue Jeans*/, 16);
			num2 = 0;
			num3 = 1;
			num = 95;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_2" /*Navy Jeans*/, 16);
			num2 = 0;
			num3 = 2;
			num = 129;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_3" /*Faded Jeans*/, 16);
			num2 = 0;
			num3 = 3;
			num = 115;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_0" /*Black Golf Pants*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_1" /*Russet Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 1;
			num = 750;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_2" /*White Golf Pants*/, 16);
			num2 = 11;
			num3 = 2;
			num = 650;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_3" /*Maroon Golf Pants*/, 16);
			num2 = 11;
			num3 = 3;
			num = 850;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_4" /*Lobster Golf Pants*/, 16);
			num2 = 11;
			num3 = 4;
			num = 850;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_5" /*Stone Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 5;
			num = 750;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_6" /*Pink Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 6;
			num = 690;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_7" /*Mint Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 7;
			num = 820;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_8" /*Brown Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 8;
			num = 650;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_9" /*Pale Blue Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 9;
			num = 690;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_10" /*Beige Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 10;
			num = 690;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_11" /*Aqua Plaid Golf Pants*/, 16);
			num2 = 11;
			num3 = 11;
			num = 820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_14_0" /*Black Cargo Pants*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_15_0" /*White Shorts*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_16_0" /*Pink Sweatpants*/, 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_0" /*Brown Work Pants*/, 16);
			num2 = 17;
			num3 = 0;
			num = 58;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_1" /*Charcoal Work Pants*/, 16);
			num2 = 17;
			num3 = 1;
			num = 68;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_2" /*Gray Work Pants*/, 16);
			num2 = 17;
			num3 = 2;
			num = 65;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_3" /*Tan Work Pants*/, 16);
			num2 = 17;
			num3 = 3;
			num = 60;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_4" /*Blue Work Pants*/, 16);
			num2 = 17;
			num3 = 4;
			num = 65;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_5" /*Ash Work Pants*/, 16);
			num2 = 17;
			num3 = 5;
			num = 63;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_6" /*White Work Pants*/, 16);
			num2 = 17;
			num3 = 6;
			num = 60;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_7" /*Beige Work Pants*/, 16);
			num2 = 17;
			num3 = 7;
			num = 58;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_0" /*Tan Cargo Pants*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_1" /*Cream Cargo Pants*/, 16);
			num2 = 18;
			num3 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_2" /*Silver Cargo Pants*/, 16);
			num2 = 18;
			num3 = 2;
			num = 99;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_3" /*Gray Cargo Pants*/, 16);
			num2 = 18;
			num3 = 3;
			num = 105;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_4" /*Charcoal Cargo Pants*/, 16);
			num2 = 18;
			num3 = 4;
			num = 110;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_5" /*Green Cargo Pants*/, 16);
			num2 = 18;
			num3 = 5;
			num = 110;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_6" /*White Cargo Pants*/, 16);
			num2 = 18;
			num3 = 6;
			num = 99;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_7" /*Urban Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 7;
			num = 110;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_8" /*Desert Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 8;
			num = 110;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_9" /*Field Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 9;
			num = 105;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_10" /*Forest Camo Cargo Pants*/, 16);
			num2 = 18;
			num3 = 10;
			num = 105;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_0" /*Black Shorts*/, 16);
			num2 = 19;
			num3 = 0;
			num = 15;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_1" /*Pale Blue Shorts*/, 16);
			num2 = 19;
			num3 = 1;
			num = 15;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_2" /*Orange Shorts*/, 16);
			num2 = 19;
			num3 = 2;
			num = 15;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_3" /*Blue Shorts*/, 16);
			num2 = 19;
			num3 = 3;
			num = 15;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_4" /*Slate Shorts*/, 16);
			num2 = 19;
			num3 = 4;
			num = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_5" /*Green Shorts*/, 16);
			num2 = 19;
			num3 = 5;
			num = 15;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_6" /*Crimson Shorts*/, 16);
			num2 = 19;
			num3 = 6;
			num = 15;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_7" /*Pale Blue Stripe Shorts*/, 16);
			num2 = 19;
			num3 = 7;
			num = 15;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_0" /*Gray Pants*/, 16);
			num2 = 20;
			num3 = 0;
			num = 600;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_1" /*Khaki Pants*/, 16);
			num2 = 20;
			num3 = 1;
			num = 600;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_2" /*Charcoal Pants*/, 16);
			num2 = 20;
			num3 = 2;
			num = 600;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_3" /*Cream Pants*/, 16);
			num2 = 20;
			num3 = 3;
			num = 600;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_4" /*Stone Pants*/, 16);
			num2 = 20;
			num3 = 4;
			num = 600;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_5" /*Black Pants*/, 16);
			num2 = 20;
			num3 = 5;
			num = 600;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_6" /*Ash Pants*/, 16);
			num2 = 20;
			num3 = 6;
			num = 600;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_7" /*Beige Pants*/, 16);
			num2 = 20;
			num3 = 7;
			num = 600;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_8" /*Brown Pants*/, 16);
			num2 = 20;
			num3 = 8;
			num = 600;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_0" /*Beige Cheap Pants*/, 16);
			num2 = 21;
			num3 = 0;
			num = 80;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_1" /*Blue Cheap Pants*/, 16);
			num2 = 21;
			num3 = 1;
			num = 80;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_2" /*Brown Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 2;
			num = 80;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_3" /*Burgundy Cheap Pants*/, 16);
			num2 = 21;
			num3 = 3;
			num = 80;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_4" /*Murky Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 4;
			num = 80;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_5" /*Mint Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 5;
			num = 80;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_6" /*Green Plaid Cheap Pants*/, 16);
			num2 = 21;
			num3 = 6;
			num = 80;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_7" /*Blue-Gray Cheap Pants*/, 16);
			num2 = 21;
			num3 = 7;
			num = 80;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_8" /*Caramel Cheap Pants*/, 16);
			num2 = 21;
			num3 = 8;
			num = 80;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_9" /*Mocha Cheap Pants*/, 16);
			num2 = 21;
			num3 = 9;
			num = 80;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_0" /*White Briefs*/, 16);
			num2 = 22;
			num3 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_1" /*Green Briefs*/, 16);
			num2 = 22;
			num3 = 1;
			num = 12;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_2" /*Gray Briefs*/, 16);
			num2 = 22;
			num3 = 2;
			num = 12;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_3" /*Leopardskin Briefs*/, 16);
			num2 = 22;
			num3 = 3;
			num = 22;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_4" /*Impotent Rage Briefs*/, 16);
			num2 = 22;
			num3 = 4;
			num = 18;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_5" /*Pink Leopardskin Briefs*/, 16);
			num2 = 22;
			num3 = 5;
			num = 20;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_6" /*Space Monkey Briefs 1*/, 16);
			num2 = 22;
			num3 = 6;
			num = 30;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_7" /*Space Monkey Briefs 2*/, 16);
			num2 = 22;
			num3 = 7;
			num = 30;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_8" /*Space Monkey Briefs 3*/, 16);
			num2 = 22;
			num3 = 8;
			num = 30;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_9" /*Space Monkey Briefs 4*/, 16);
			num2 = 22;
			num3 = 9;
			num = 30;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_23_0" /*Sweatpants*/, 16);
			num2 = 23;
			num3 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_24_0" /*Brown Tuxedo Pants*/, 16);
			num2 = 24;
			num3 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 1;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 2;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 3;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 4;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 5;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 6;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 7;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 8;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 9;
			break;
	
		default:
			func_160(num6, iParam0, 104, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_172(int iParam0) // Position - 0x137A8
{
	if (iParam0 < 136)
		func_174(iParam0);
	else
		func_173(iParam0);

	if (Global_79172[0 /*14*/].f_2 == -1)
		func_160(3, iParam0, 242, -1);

	return;
}

void func_173(int iParam0) // Position - 0x137DD
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_0" /*Peyton Blue Blouson*/, 16);
			num2 = 21;
			num3 = 0;
			num = 32;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_1" /*Overlooked Red Blouson*/, 16);
			num2 = 21;
			num3 = 1;
			num = 39;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_2" /*Natural Blouson*/, 16);
			num2 = 21;
			num3 = 2;
			num = 40;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_3" /*Sky Blue Blouson*/, 16);
			num2 = 21;
			num3 = 3;
			num = 42;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_4" /*Deep Green Blouson*/, 16);
			num2 = 21;
			num3 = 4;
			num = 45;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_5" /*Champagne Driver Blouson*/, 16);
			num2 = 21;
			num3 = 5;
			num = 48;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_6" /*Snakeskin Blouson*/, 16);
			num2 = 21;
			num3 = 6;
			num = 52;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_7" /*Desert Brown Blouson*/, 16);
			num2 = 21;
			num3 = 7;
			num = 55;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_0" /*Black Striped Leather Jacket*/, 16);
			num2 = 22;
			num3 = 0;
			num = 390;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_1" /*Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 1;
			num = 390;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_2" /*Chestnut Leather Jacket*/, 16);
			num2 = 22;
			num3 = 2;
			num = 560;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_3" /*Red Leather Jacket*/, 16);
			num2 = 22;
			num3 = 3;
			num = 390;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_4" /*White Leather Jacket*/, 16);
			num2 = 22;
			num3 = 4;
			num = 390;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_5" /*Blue Leather Jacket*/, 16);
			num2 = 22;
			num3 = 5;
			num = 390;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_6" /*Lonewolf Leather Jacket*/, 16);
			num2 = 22;
			num3 = 6;
			num = 560;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_7" /*Brown Leather Jacket*/, 16);
			num2 = 22;
			num3 = 7;
			num = 390;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_8" /*Gray Striped Leather Jacket*/, 16);
			num2 = 22;
			num3 = 8;
			num = 390;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_9" /*Gray Banded Leather Jacket*/, 16);
			num2 = 22;
			num3 = 9;
			num = 390;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_10" /*Russet Leather Jacket*/, 16);
			num2 = 22;
			num3 = 10;
			num = 390;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_11" /*Brown Suede Jacket*/, 16);
			num2 = 22;
			num3 = 11;
			num = 3950;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_0" /*Brown Shooting Vest*/, 16);
			num2 = 23;
			num3 = 0;
			num = 150;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_1" /*Woodland Shooting Vest*/, 16);
			num2 = 23;
			num3 = 1;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_2" /*Taupe Shooting Vest*/, 16);
			num2 = 23;
			num3 = 2;
			num = 150;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 23;
			num3 = 3;
			num = 150;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_4" /*Field Shooting Vest*/, 16);
			num2 = 23;
			num3 = 4;
			num = 160;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_5" /*Forest Shooting Vest*/, 16);
			num2 = 23;
			num3 = 5;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_0" /*Yellow Tank Top*/, 16);
			num2 = 24;
			num3 = 0;
			num = 19;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_1" /*Blue Birds Tank Top*/, 16);
			num2 = 24;
			num3 = 1;
			num = 20;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_2" /*Orange Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 2;
			num = 19;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_3" /*Blue Stars Tank Top*/, 16);
			num2 = 24;
			num3 = 3;
			num = 22;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_4" /*Aqua Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 4;
			num = 20;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_5" /*Degenatron Tank Top*/, 16);
			num2 = 24;
			num3 = 5;
			num = 28;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_6" /*Taco Libre Tank Top*/, 16);
			num2 = 24;
			num3 = 6;
			num = 28;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_7" /*Pussycat Tank Top*/, 16);
			num2 = 24;
			num3 = 7;
			num = 25;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_8" /*Lemon Pattern Tank Top*/, 16);
			num2 = 24;
			num3 = 8;
			num = 22;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_9" /*Charcoal Tank Top*/, 16);
			num2 = 24;
			num3 = 9;
			num = 19;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_10" /*Off-White Tank Top*/, 16);
			num2 = 24;
			num3 = 10;
			num = 22;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_11" /*Banded Tank Top*/, 16);
			num2 = 24;
			num3 = 11;
			num = 19;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_12" /*Orange Tank Top*/, 16);
			num2 = 24;
			num3 = 12;
			num = 20;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_13" /*Camo Tank Top*/, 16);
			num2 = 24;
			num3 = 13;
			num = 25;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_14" /*Indigo Tank Top*/, 16);
			num2 = 24;
			num3 = 14;
			num = 20;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_15" /*Liberty Cocks Tank Top*/, 16);
			num2 = 24;
			num3 = 15;
			num = 28;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_0" /*Blue Two-Tone Shirt*/, 16);
			num2 = 25;
			num3 = 0;
			num = 35;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_1" /*Circles Shirt*/, 16);
			num2 = 25;
			num3 = 1;
			num = 40;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_2" /*Gray Two-Tone Shirt*/, 16);
			num2 = 25;
			num3 = 2;
			num = 45;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_3" /*Mustard Shirt*/, 16);
			num2 = 25;
			num3 = 3;
			num = 45;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_4" /*Blue Checkered Shirt*/, 16);
			num2 = 25;
			num3 = 4;
			num = 49;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_5" /*Floral Shirt*/, 16);
			num2 = 25;
			num3 = 5;
			num = 820;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_6" /*Beige Shirt*/, 16);
			num2 = 25;
			num3 = 6;
			num = 790;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_7" /*Lavender Shirt*/, 16);
			num2 = 25;
			num3 = 7;
			num = 820;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_8" /*Black Shirt*/, 16);
			num2 = 25;
			num3 = 8;
			num = &func_1;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_9" /*Monogrammed Shirt*/, 16);
			num2 = 25;
			num3 = 9;
			num = 40;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_10" /*Paisley Shirt*/, 16);
			num2 = 25;
			num3 = 10;
			num = 850;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_11" /*Camel Shirt*/, 16);
			num2 = 25;
			num3 = 11;
			num = 790;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_0" /*Beige Tight Jacket*/, 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_1" /*Blue Tight Jacket*/, 16);
			num2 = 26;
			num3 = 1;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_2" /*Brown Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 2;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_3" /*Burgundy Tight Jacket*/, 16);
			num2 = 26;
			num3 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_4" /*Murky Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 4;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_5" /*Mint Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 5;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_6" /*Green Plaid Tight Jacket*/, 16);
			num2 = 26;
			num3 = 6;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_7" /*Blue-Gray Tight Jacket*/, 16);
			num2 = 26;
			num3 = 7;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_8" /*Caramel Tight Jacket*/, 16);
			num2 = 26;
			num3 = 8;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_9" /*Mocha Tight Jacket*/, 16);
			num2 = 26;
			num3 = 9;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_0" /*Gray Jacket*/, 16);
			num2 = 27;
			num3 = 0;
			num = 2200;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_1" /*Oatmeal Jacket*/, 16);
			num2 = 27;
			num3 = 1;
			num = 2500;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_2" /*Charcoal Jacket*/, 16);
			num2 = 27;
			num3 = 2;
			num = 2500;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_3" /*Off-White Jacket*/, 16);
			num2 = 27;
			num3 = 3;
			num = 2200;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_4" /*Cream Jacket*/, 16);
			num2 = 27;
			num3 = 4;
			num = 2500;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_5" /*Black Jacket*/, 16);
			num2 = 27;
			num3 = 5;
			num = 2500;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_6" /*Ash Jacket*/, 16);
			num2 = 27;
			num3 = 6;
			num = 2200;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_0" /*Dark Gray Sweater*/, 16);
			num2 = 28;
			num3 = 0;
			num = 1100;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_1" /*Pale Gray Sweater*/, 16);
			num2 = 28;
			num3 = 1;
			num = 1200;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_2" /*Taupe Sweater*/, 16);
			num2 = 28;
			num3 = 2;
			num = 1220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_3" /*Pale Blue Sweater*/, 16);
			num2 = 28;
			num3 = 3;
			num = 1250;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_4" /*Tangerine Sweater*/, 16);
			num2 = 28;
			num3 = 4;
			num = 1300;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_5" /*Quarry Brown Sweater*/, 16);
			num2 = 28;
			num3 = 5;
			num = 1360;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_6" /*Dark Chevrons Sweater*/, 16);
			num2 = 28;
			num3 = 6;
			num = 35;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_7" /*Zingy Chevrons Sweater*/, 16);
			num2 = 28;
			num3 = 7;
			num = 38;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_8" /*Rainbow Field Sweater*/, 16);
			num2 = 28;
			num3 = 8;
			num = 40;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_9" /*Dark Field Sweater*/, 16);
			num2 = 28;
			num3 = 9;
			num = 42;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_10" /*Animal Strip Sweater*/, 16);
			num2 = 28;
			num3 = 10;
			num = 50;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_11" /*Bill Brown Sweater*/, 16);
			num2 = 28;
			num3 = 11;
			num = 45;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_12" /*Mint Argyle Sweater*/, 16);
			num2 = 28;
			num3 = 12;
			num = 45;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_13" /*Gray Argyle Sweater*/, 16);
			num2 = 28;
			num3 = 13;
			num = 44;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_14" /*Grape Eighties Sweater*/, 16);
			num2 = 28;
			num3 = 14;
			num = 46;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_15" /*Geometric Eighties Sweater*/, 16);
			num2 = 28;
			num3 = 15;
			num = 52;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_0" /*Black Jacket*/, 16);
			num2 = 29;
			num3 = 0;
			num = 3200;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_1" /*All Black Jacket*/, 16);
			num2 = 29;
			num3 = 1;
			num = 3200;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_2" /*White Jacket*/, 16);
			num2 = 29;
			num3 = 2;
			num = 2550;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_3" /*Cream Jacket*/, 16);
			num2 = 29;
			num3 = 3;
			num = 2750;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_4" /*Oatmeal Jacket*/, 16);
			num2 = 29;
			num3 = 4;
			num = 2590;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_5" /*Blue-Gray Jacket*/, 16);
			num2 = 29;
			num3 = 5;
			num = 2750;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_6" /*Beige Jacket*/, 16);
			num2 = 29;
			num3 = 6;
			num = 2550;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_7" /*Off-White Jacket*/, 16);
			num2 = 29;
			num3 = 7;
			num = 2590;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_8" /*Gray Suit Jacket*/, 16);
			num2 = 29;
			num3 = 8;
			num = 2720;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_9" /*Ash Suit Jacket*/, 16);
			num2 = 29;
			num3 = 9;
			num = 2750;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_0" /*Gray Blazer*/, 16);
			num2 = 30;
			num3 = 0;
			num = 3250;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_1" /*Beige Blazer*/, 16);
			num2 = 30;
			num3 = 1;
			num = 2950;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_2" /*Black Blazer*/, 16);
			num2 = 30;
			num3 = 2;
			num = 3100;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_3" /*Brown Blazer*/, 16);
			num2 = 30;
			num3 = 3;
			num = 3150;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_4" /*Navy Blazer*/, 16);
			num2 = 30;
			num3 = 4;
			num = 3240;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_5" /*Navy Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 5;
			num = 3350;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_6" /*Blue-Gray Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 6;
			num = 3400;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_7" /*Brown Pinstripe Blazer*/, 16);
			num2 = 30;
			num3 = 7;
			num = 3280;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_31_0" /*Tuxedo Jacket*/, 16);
			num2 = 31;
			num3 = 0;
			break;
	
		default:
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_174(int iParam0) // Position - 0x143E2
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_0" /*White T-Shirt*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_1" /*Yellow T-Shirt*/, 16);
			num2 = 0;
			num3 = 1;
			num = 25;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_2" /*Dusche Gold T-Shirt*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_3" /*Charcoal T-Shirt*/, 16);
			num2 = 0;
			num3 = 3;
			num = 15;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_4" /*Cerveza Barracho T-Shirt*/, 16);
			num2 = 0;
			num3 = 4;
			num = 25;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_5" /*Liberty City Wrath T-Shirt*/, 16);
			num2 = 0;
			num3 = 5;
			num = 25;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_6" /*Pump & Run T-Shirt*/, 16);
			num2 = 0;
			num3 = 6;
			num = 22;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_7" /*Atomic T-Shirt*/, 16);
			num2 = 0;
			num3 = 7;
			num = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_8" /*LS Nuclear Power T-Shirt*/, 16);
			num2 = 0;
			num3 = 8;
			num = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_9" /*Zancudo T-Shirt*/, 16);
			num2 = 0;
			num3 = 9;
			num = 20;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_10" /*West Coast Classics T-Shirt*/, 16);
			num2 = 0;
			num3 = 10;
			num = 24;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_11" /*BC Talk Radio T-Shirt*/, 16);
			num2 = 0;
			num3 = 11;
			num = 26;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_12" /*Animal Ark T-Shirt*/, 16);
			num2 = 0;
			num3 = 12;
			num = 28;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_13" /*Rimmers T-Shirt*/, 16);
			num2 = 0;
			num3 = 13;
			num = 29;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_14" /*Paperclips T-Shirt*/, 16);
			num2 = 0;
			num3 = 14;
			num = 22;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_15" /*Pop's Pills T-Shirt*/, 16);
			num2 = 0;
			num3 = 15;
			num = 20;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_0" /*Los Santos Tank Top*/, 16);
			num2 = 3;
			num3 = 0;
			num = 35;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_1" /*Del Perro Pier Tank Top*/, 16);
			num2 = 3;
			num3 = 1;
			num = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_2" /*San Andreas Tank Top*/, 16);
			num2 = 3;
			num3 = 2;
			num = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_3" /*Love Fist Tank Top*/, 16);
			num2 = 3;
			num3 = 3;
			num = 38;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_4" /*Space Monkey Tank Top 1*/, 16);
			num2 = 3;
			num3 = 4;
			num = 40;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_5" /*Space Monkey Tank Top 2*/, 16);
			num2 = 3;
			num3 = 5;
			num = 40;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_6" /*Space Monkey Tank Top 3*/, 16);
			num2 = 3;
			num3 = 6;
			num = 40;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_7" /*Space Monkey Tank Top 4*/, 16);
			num2 = 3;
			num3 = 7;
			num = 40;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_8" /*Space Monkey Tank Top 5*/, 16);
			num2 = 3;
			num3 = 8;
			num = 40;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_0" /*Rearwall Black Down Jacket*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_1" /*Crevis Green Down Jacket*/, 16);
			num2 = 4;
			num3 = 1;
			num = 500;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_2" /*Rearwall Fluoro Down Jacket*/, 16);
			num2 = 4;
			num3 = 2;
			num = 560;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_3" /*Rearwall Coffee Down Jacket*/, 16);
			num2 = 4;
			num3 = 3;
			num = 600;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_4tu" /*Crevis Yellow Down Jacket*/, 16);
			num2 = 4;
			num3 = 4;
			num = 650;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_5tu" /*Eris Yellow Down Jacket*/, 16);
			num2 = 4;
			num3 = 5;
			num = 500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_6tu" /*Crevis Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 6;
			num = 560;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_7" /*Rearwall Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 7;
			num = 500;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_8" /*Crevis Blue Down Jacket*/, 16);
			num2 = 4;
			num3 = 8;
			num = 650;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_9" /*Eris Gray Down Jacket*/, 16);
			num2 = 4;
			num3 = 9;
			num = 540;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_10" /*Eris Red Down Jacket*/, 16);
			num2 = 4;
			num3 = 10;
			num = 690;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_11" /*Eris Olive Down Jacket*/, 16);
			num2 = 4;
			num3 = 11;
			num = 560;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_12" /*Eris Aqua Down Jacket*/, 16);
			num2 = 4;
			num3 = 12;
			num = 590;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_13" /*Eris Blue Down Jacket*/, 16);
			num2 = 4;
			num3 = 13;
			num = 690;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_14" /*Crevis Gray Down Jacket*/, 16);
			num2 = 4;
			num3 = 14;
			num = 540;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_15" /*Eris Tan Down Jacket*/, 16);
			num2 = 4;
			num3 = 15;
			num = 500;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			flag = true;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_0" /*Red Floral Polo Shirt*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_1" /*Amethyst Polo Shirt*/, 16);
			num2 = 11;
			num3 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_2" /*Turquoise Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 2;
			num = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_3" /*Pink Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 3;
			num = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_4" /*Mustard Polo Shirt*/, 16);
			num2 = 11;
			num3 = 4;
			num = 22;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_5" /*Orange Polo Shirt*/, 16);
			num2 = 11;
			num3 = 5;
			num = 350;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_6" /*Topaz Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 6;
			num = 27;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_7" /*Mint Polo Shirt*/, 16);
			num2 = 11;
			num3 = 7;
			num = 370;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_8" /*Navy Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 8;
			num = 25;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_9" /*Green Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 9;
			num = 22;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_10" /*Turquoise Two-Tone Polo Shirt*/, 16);
			num2 = 11;
			num3 = 10;
			num = 25;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_11" /*Brown Polo Shirt*/, 16);
			num2 = 11;
			num3 = 11;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_12" /*Pink Polo Shirt*/, 16);
			num2 = 11;
			num3 = 12;
			num = 22;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_13" /*Green Polo Shirt*/, 16);
			num2 = 11;
			num3 = 13;
			num = 27;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_14" /*Aqua Polo Shirt*/, 16);
			num2 = 11;
			num3 = 14;
			num = 25;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_15" /*Brown Striped Polo Shirt*/, 16);
			num2 = 11;
			num3 = 15;
			num = 27;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			num5 = 1;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_0" /*Mint Floral Dress*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_1" /*Pink Dress*/, 16);
			num2 = 13;
			num3 = 1;
			num = 39;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_2" /*White Floral Dress*/, 16);
			num2 = 13;
			num3 = 2;
			num = 42;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_3" /*Purple Zebra Dress*/, 16);
			num2 = 13;
			num3 = 3;
			num = 49;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_4" /*Cream Dress*/, 16);
			num2 = 13;
			num3 = 4;
			num = 35;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_5" /*Space Monkey Dress 1*/, 16);
			num2 = 13;
			num3 = 5;
			num = 50;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_6" /*Space Monkey Dress 2*/, 16);
			num2 = 13;
			num3 = 6;
			num = 50;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_7" /*Space Monkey Dress 3*/, 16);
			num2 = 13;
			num3 = 7;
			num = 50;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_0" /*Black Hoodie*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_1" /*Silver Hoodie*/, 16);
			num2 = 14;
			num3 = 1;
			num = 88;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_2" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 14;
			num3 = 2;
			num = 60;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 14;
			num3 = 3;
			num = 80;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_4" /*LSGC Gray Hoodie*/, 16);
			num2 = 14;
			num3 = 4;
			num = 70;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 14;
			num3 = 5;
			num = 80;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_6" /*Blauser Hoodie*/, 16);
			num2 = 14;
			num3 = 6;
			num = 70;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_7" /*LSGC Forest Hoodie*/, 16);
			num2 = 14;
			num3 = 7;
			num = 90;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_8" /*Penetrators Hoodie*/, 16);
			num2 = 14;
			num3 = 8;
			num = 95;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_9" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 14;
			num3 = 9;
			num = 105;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_10" /*Blue Hoodie*/, 16);
			num2 = 14;
			num3 = 10;
			num = 95;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_11" /*Green Hoodie*/, 16);
			num2 = 14;
			num3 = 11;
			num = 110;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_12" /*LS Jardineros Hoodie*/, 16);
			num2 = 14;
			num3 = 12;
			num = 98;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_13" /*Ash 18 Hoodie*/, 16);
			num2 = 14;
			num3 = 13;
			num = 88;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_14" /*Red Mist XI Hoodie*/, 16);
			num2 = 14;
			num3 = 14;
			num = 98;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_15" /*Eris Charcoal Hoodie*/, 16);
			num2 = 14;
			num3 = 15;
			num = 110;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_15_0" /*Tennis Shirt*/, 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_16_0" /*Bare Chest*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_17_0" /*Pink Jacket*/, 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_0" /*Blue Denim Jacket*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_1" /*Black Denim Jacket*/, 16);
			num2 = 18;
			num3 = 1;
			num = 520;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_2" /*Gray Denim Jacket*/, 16);
			num2 = 18;
			num3 = 2;
			num = 490;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_3" /*Brown Denim Jacket*/, 16);
			num2 = 18;
			num3 = 3;
			num = 450;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_4" /*Faded Denim Jacket*/, 16);
			num2 = 18;
			num3 = 4;
			num = 420;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_5" /*Ash Denim Jacket*/, 16);
			num2 = 18;
			num3 = 5;
			num = 420;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_0" /*Denim Shirt*/, 16);
			num2 = 19;
			num3 = 0;
			num = 85;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_1" /*Faded Denim Shirt*/, 16);
			num2 = 19;
			num3 = 1;
			num = 85;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_2" /*Black Shirt*/, 16);
			num2 = 19;
			num3 = 2;
			num = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_3" /*Gray Check Shirt*/, 16);
			num2 = 19;
			num3 = 3;
			num = 68;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_4" /*Brown Check Shirt*/, 16);
			num2 = 19;
			num3 = 4;
			num = 68;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_5" /*Red Check Shirt*/, 16);
			num2 = 19;
			num3 = 5;
			num = 78;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_6" /*Brown Shirt*/, 16);
			num2 = 19;
			num3 = 6;
			num = 85;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_7" /*Khaki Shirt*/, 16);
			num2 = 19;
			num3 = 7;
			num = 68;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_8" /*Red Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 8;
			num = 75;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_9" /*Brown Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 9;
			num = 75;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_10" /*Green Check Shirt*/, 16);
			num2 = 19;
			num3 = 10;
			num = 78;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_11" /*Maroon Check Shirt*/, 16);
			num2 = 19;
			num3 = 11;
			num = 75;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_12" /*Gray Shirt*/, 16);
			num2 = 19;
			num3 = 12;
			num = 75;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_13" /*Blue Check Shirt*/, 16);
			num2 = 19;
			num3 = 13;
			num = 75;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_14" /*Blue Two-Tone Shirt*/, 16);
			num2 = 19;
			num3 = 14;
			num = 78;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_15" /*Navy Shirt*/, 16);
			num2 = 19;
			num3 = 15;
			num = 78;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_0" /*Burgundy Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 0;
			num = 40;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_1" /*Purple Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 1;
			num = 32;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_2" /*Crimson Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 2;
			num = 32;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_3" /*Tan Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 3;
			num = 32;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_4" /*Flames Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 4;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_5" /*Skull Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 5;
			num = 38;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_6" /*Pale Blue Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 6;
			num = 35;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_7" /*Scarab Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 7;
			num = 38;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_8" /*Cream Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 8;
			num = 29;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_9" /*Cube Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 9;
			num = 32;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_10" /*Beige Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 10;
			num = 29;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_11" /*Blue Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 11;
			num = 35;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_12" /*Yellow Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 12;
			num = 32;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_13" /*Pink Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 13;
			num = 35;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_14" /*White Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 14;
			num = 32;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_15" /*Black Bowling Shirt*/, 16);
			num2 = 20;
			num3 = 15;
			num = 40;
			break;
	
		default:
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_175(int iParam0) // Position - 0x152F0
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_0" /*Trailer Cut*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_1" /*Frozen*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_1_0" /*Clean Razor*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_2_0" /*Randal*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_3_0" /*Side Shed*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_4_0" /*Grown Out*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_5_0" /*Mullet*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_6_0" /*Shaved 2*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_7_0" /*Swept Back*/, 16);
			num2 = 7;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 9, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_176(int iParam0) // Position - 0x1541D
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_79172[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		default:
			func_160(num6, iParam0, 7, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_177(int iParam0, int iParam1) // Position - 0x1551B
{
	switch (iParam0)
	{
		case 0:
			func_195(iParam1);
			break;
	
		case 2:
			func_194(iParam1);
			break;
	
		case 3:
			func_190(iParam1);
			break;
	
		case 4:
			func_189(iParam1);
			break;
	
		case 6:
			func_188(iParam1);
			break;
	
		case 5:
			func_187(iParam1);
			break;
	
		case 8:
			func_186(iParam1);
			break;
	
		case 9:
			func_185(iParam1);
			break;
	
		case 10:
			func_184(iParam1);
			break;
	
		case 1:
			func_183(iParam1);
			break;
	
		case 7:
			func_182(iParam1);
			break;
	
		case 11:
			func_181(iParam1);
			break;
	
		case 12:
			func_180(iParam1);
			break;
	
		case 13:
			func_179(iParam1);
			break;
	
		case 14:
			func_178(iParam1);
			break;
	}

	return;
}

void func_178(int iParam0) // Position - 0x1560B
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_0" /*De Koch Diamond Studs*/, 16);
			num2 = 1;
			num3 = 0;
			num = 4590;
			num4 = 2;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_1" /*De Koch Obsidian Studs*/, 16);
			num2 = 1;
			num3 = 1;
			num = 4100;
			num4 = 2;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_2" /*De Koch Sapphire Studs*/, 16);
			num2 = 1;
			num3 = 2;
			num = &func_30;
			num4 = 2;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_3" /*De Koch Opal Studs*/, 16);
			num2 = 1;
			num3 = 3;
			num = 1850;
			num4 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_4" /*De Koch Platinum Studs*/, 16);
			num2 = 1;
			num3 = 4;
			num = 5250;
			num4 = 2;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_5" /*De Koch Garnet Studs*/, 16);
			num2 = 1;
			num3 = 5;
			num = 2700;
			num4 = 2;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_6" /*De Koch Jasper Studs*/, 16);
			num2 = 1;
			num3 = 6;
			num = 3100;
			num4 = 2;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_7" /*De Koch Aquamarine Studs*/, 16);
			num2 = 1;
			num3 = 7;
			num = 5050;
			num4 = 2;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_0" /*Vankhov Diamond Studs*/, 16);
			num2 = 2;
			num3 = 0;
			num = 2500;
			num4 = 2;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_1" /*Vankhov Emerald Studs*/, 16);
			num2 = 2;
			num3 = 1;
			num = 1950;
			num4 = 2;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_2" /*Vankhov Quartz Studs*/, 16);
			num2 = 2;
			num3 = 2;
			num = 3900;
			num4 = 2;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_3" /*Vankhov Obsidian Studs*/, 16);
			num2 = 2;
			num3 = 3;
			num = 3550;
			num4 = 2;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_4" /*Vankhov Platinum Studs*/, 16);
			num2 = 2;
			num3 = 4;
			num = 4500;
			num4 = 2;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_5" /*Vankhov Agate Studs*/, 16);
			num2 = 2;
			num3 = 5;
			num = 2700;
			num4 = 2;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_6" /*Vankhov Jade Studs*/, 16);
			num2 = 2;
			num3 = 6;
			num = 3100;
			num4 = 2;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_7" /*Vankhov Onyx Studs*/, 16);
			num2 = 2;
			num3 = 7;
			num = 2950;
			num4 = 2;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_0" /*Orange Tint Contour Shades*/, 16);
			num2 = 1;
			num3 = 0;
			num = 75;
			num4 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_1" /*Slate Contour Shades*/, 16);
			num2 = 1;
			num3 = 1;
			num = 75;
			num4 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_2" /*Gray Contour Shades*/, 16);
			num2 = 1;
			num3 = 2;
			num = 75;
			num4 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_3" /*Brown Contour Shades*/, 16);
			num2 = 1;
			num3 = 3;
			num = 75;
			num4 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_4" /*Burgundy Contour Shades*/, 16);
			num2 = 1;
			num3 = 4;
			num = 75;
			num4 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_5" /*Chocolate Contour Shades*/, 16);
			num2 = 1;
			num3 = 5;
			num = 75;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_6" /*Black Contour Shades*/, 16);
			num2 = 1;
			num3 = 6;
			num = 75;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_7" /*Purple Tint Contour Shades*/, 16);
			num2 = 1;
			num3 = 7;
			num = 75;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_8" /*Blue-Gray Contour Shades*/, 16);
			num2 = 1;
			num3 = 8;
			num = 75;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_9" /*White Contour Shades*/, 16);
			num2 = 1;
			num3 = 9;
			num = 75;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E2" /*Swimming Goggles*/, 16);
			num2 = 2;
			num3 = 0;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E3" /*Racer Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 110;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_0" /*Stank Slate Shades*/, 16);
			num2 = 4;
			num3 = 0;
			num = 120;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_1" /*Broker Ash Shades*/, 16);
			num2 = 4;
			num3 = 1;
			num = 128;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_2" /*Broker Chocolate Shades*/, 16);
			num2 = 4;
			num3 = 2;
			num = 130;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_3" /*Stank Black Shades*/, 16);
			num2 = 4;
			num3 = 3;
			num = 140;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_4" /*Broker Black Shades*/, 16);
			num2 = 4;
			num3 = 4;
			num = 145;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_5" /*Stank Green Tint Shades*/, 16);
			num2 = 4;
			num3 = 5;
			num = 135;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_6" /*Stank Blue Tint Shades*/, 16);
			num2 = 4;
			num3 = 6;
			num = 138;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_0" /*Black Aviator Shades*/, 16);
			num2 = 5;
			num3 = 0;
			num = 110;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_1" /*White Aviator Shades*/, 16);
			num2 = 5;
			num3 = 1;
			num = 112;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_2" /*Brown Aviator Shades*/, 16);
			num2 = 5;
			num3 = 2;
			num = 115;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_3" /*Gray Aviator Shades*/, 16);
			num2 = 5;
			num3 = 3;
			num = 118;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_4" /*Two-Tone Aviator Shades*/, 16);
			num2 = 5;
			num3 = 4;
			num = 120;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_5" /*Bone Aviator Shades*/, 16);
			num2 = 5;
			num3 = 5;
			num = 125;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_6" /*Red Aviator Shades*/, 16);
			num2 = 5;
			num3 = 6;
			num = 128;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_7" /*Silver Aviator Shades*/, 16);
			num2 = 5;
			num3 = 7;
			num = 138;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_8" /*Charcoal Aviator Shades*/, 16);
			num2 = 5;
			num3 = 8;
			num = 140;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_9" /*Gold Aviator Shades*/, 16);
			num2 = 5;
			num3 = 9;
			num = 155;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_0" /*Tinted Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 0;
			num = 55;
			num4 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_1" /*Silver Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 1;
			num = 55;
			num4 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_2" /*Sepia Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 2;
			num = 58;
			num4 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_3" /*Blue Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 3;
			num = 58;
			num4 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_4" /*Yellow Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 4;
			num = 60;
			num4 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_5" /*Gray Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 5;
			num = 62;
			num4 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_6" /*Black Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 6;
			num = 65;
			num4 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_7" /*Slate Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 7;
			num = 68;
			num4 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_8" /*Smoke Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 8;
			num = 68;
			num4 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_9" /*Gold Aviator Glasses*/, 16);
			num2 = 6;
			num3 = 9;
			num = 72;
			num4 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_0" /*Suburban Black Shades*/, 16);
			num2 = 7;
			num3 = 0;
			num = 145;
			num4 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_1" /*Suburban Teal Shades*/, 16);
			num2 = 7;
			num3 = 1;
			num = 149;
			num4 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_2" /*Suburban Tortoiseshell Shades*/, 16);
			num2 = 7;
			num3 = 2;
			num = 139;
			num4 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_3" /*Suburban Orange Shades*/, 16);
			num2 = 7;
			num3 = 3;
			num = 149;
			num4 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_4" /*Fuque White Shades*/, 16);
			num2 = 7;
			num3 = 4;
			num = 135;
			num4 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_5" /*Fuque Camo Shades*/, 16);
			num2 = 7;
			num3 = 5;
			num = 138;
			num4 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_6" /*Fuque Yellow Shades*/, 16);
			num2 = 7;
			num3 = 6;
			num = 140;
			num4 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_7" /*Fuque Burgundy Shades*/, 16);
			num2 = 7;
			num3 = 7;
			num = 145;
			num4 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_8" /*Fuque Funky Shades*/, 16);
			num2 = 7;
			num3 = 8;
			num = 159;
			num4 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_9" /*Fuque Squared Shades*/, 16);
			num2 = 7;
			num3 = 9;
			num = 155;
			num4 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_0" /*Gold T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 0;
			num = 198;
			num4 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_1" /*Silver T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 1;
			num = 210;
			num4 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_2" /*Two-Tone T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 2;
			num = 185;
			num4 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_3" /*Green T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 3;
			num = 220;
			num4 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_4" /*Brown T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 4;
			num = 190;
			num4 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_5" /*Peach T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 5;
			num = 200;
			num4 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_6" /*Gray T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 6;
			num = 208;
			num4 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_7" /*Orange T-Bone Shades*/, 16);
			num2 = 8;
			num3 = 7;
			num = 210;
			num4 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_0" /*Yellow Mono Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 165;
			num4 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_1" /*Gray Mono Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 185;
			num4 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_2" /*Hornet Mono Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 190;
			num4 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_3" /*Copper Mono Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 178;
			num4 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_4" /*Blue Mono Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 180;
			num4 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_5" /*Sepia Mono Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 168;
			num4 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_6" /*White Mono Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 170;
			num4 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_7" /*Orange Tint Mono Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 175;
			num4 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_8" /*Blue Tint Mono Shades*/, 16);
			num2 = 9;
			num3 = 8;
			num = 170;
			num4 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_9" /*Smoke Mono Shades*/, 16);
			num2 = 9;
			num3 = 9;
			num = 178;
			num4 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_0" /*Gold Triptych Shades*/, 16);
			num2 = 10;
			num3 = 0;
			num = 140;
			num4 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_1" /*Gray Triptych Shades*/, 16);
			num2 = 10;
			num3 = 1;
			num = 145;
			num4 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_2" /*Silver Triptych Shades*/, 16);
			num2 = 10;
			num3 = 2;
			num = 150;
			num4 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_3" /*Two-Tone Triptych Shades*/, 16);
			num2 = 10;
			num3 = 3;
			num = 165;
			num4 = 10;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_4" /*Copper Triptych Shades*/, 16);
			num2 = 10;
			num3 = 4;
			num = 168;
			num4 = 10;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_5" /*Black Triptych Shades*/, 16);
			num2 = 10;
			num3 = 5;
			num = 178;
			num4 = 10;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_6" /*White Triptych Shades*/, 16);
			num2 = 10;
			num3 = 6;
			num = 160;
			num4 = 10;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H0_0" /*Hockey Mask*/, 16);
			num2 = 0;
			num3 = 0;
			num = 320;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H3_0" /*Gray Flat Cap*/, 16);
			num2 = 3;
			num3 = 0;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 7;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 8;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 8;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 8;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 9;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 9;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 10;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 10;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 11;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 12;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 12;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 13;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 13;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 14;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
			num2 = 16;
			num3 = 0;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
			num2 = 16;
			num3 = 1;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
			num2 = 16;
			num3 = 2;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
			num2 = 16;
			num3 = 3;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
			num2 = 16;
			num3 = 4;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
			num2 = 16;
			num3 = 5;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
			num2 = 16;
			num3 = 6;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
			num2 = 16;
			num3 = 7;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
			num2 = 16;
			num3 = 8;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
			num2 = 16;
			num3 = 9;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
			num2 = 16;
			num3 = 10;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
			num2 = 16;
			num3 = 11;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
			num2 = 16;
			num3 = 12;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
			num2 = 16;
			num3 = 13;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
			num2 = 16;
			num3 = 14;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
			num2 = 16;
			num3 = 15;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 1;
			num4 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 2;
			num4 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 3;
			num4 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 4;
			num4 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 5;
			num4 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			num4 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
			num2 = 19;
			num3 = 0;
			num = 30;
			num4 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
			num2 = 19;
			num3 = 1;
			num = 30;
			num4 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
			num2 = 19;
			num3 = 2;
			num = 32;
			num4 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
			num2 = 19;
			num3 = 3;
			num = 35;
			num4 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
			num2 = 19;
			num3 = 4;
			num = 38;
			num4 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
			num2 = 19;
			num3 = 5;
			num = 42;
			num4 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
			num2 = 19;
			num3 = 6;
			num = 42;
			num4 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
			num2 = 19;
			num3 = 7;
			num = 40;
			num4 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
			num2 = 19;
			num3 = 8;
			num = 45;
			num4 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
			num2 = 19;
			num3 = 9;
			num = 48;
			num4 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
			num2 = 19;
			num3 = 10;
			num = 25;
			num4 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
			num2 = 19;
			num3 = 11;
			num = 25;
			num4 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
			num2 = 19;
			num3 = 12;
			num = 28;
			num4 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
			num2 = 19;
			num3 = 13;
			num = 28;
			num4 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
			num2 = 19;
			num3 = 14;
			num = 30;
			num4 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
			num2 = 19;
			num3 = 15;
			num = 35;
			num4 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			num4 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 175, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_179(int iParam0) // Position - 0x16AFC
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 9, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_180(int iParam0) // Position - 0x16C4D
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_0" /*Blue Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_2" /*White Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_4" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_7" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_11" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_12" /*Fireman*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_13" /*Exterminator*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_15" /*Black Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_16" /*Skydiving*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_17" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_18" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_19" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_20" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_21" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_22" /*Ash Hoodie, Sweatpants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_23" /*Yellow Check Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_24" /*Gray Plaid Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_25" /*Black Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_26" /*Track Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_27" /*Off-White Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_28" /*Gray Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4000;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_29" /*Ash Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_30" /*Charcoal Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_31" /*Tan Plaid 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4650;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_32" /*Slate 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_33" /*Ash 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5000;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_34" /*Stone 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4750;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_35" /*Oatmeal 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4750;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_36" /*Navy Plaid Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5200;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_37" /*Off-White 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5200;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_38" /*Red Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_39" /*Gray Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_40" /*Navy 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_41" /*Russet Piped 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_42" /*Green 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_43" /*Beige 3 Piece Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_47" /*Underwear*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_48" /*LS Black Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_49" /*Gray Hoodie, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_50" /*Moto X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_51" /*U.R. Jersey, Fatigues*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_52" /*U.R. OG Tee, Bike Leathers*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_53" /*Uptown Riders Longsleeve, Camos*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_54" /*U.R. Jacket, Baggies*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 47, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_181(int iParam0) // Position - 0x17158
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_0", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_1", 16);
			num2 = 2;
			num3 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_2", 16);
			num2 = 2;
			num3 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_3", 16);
			num2 = 2;
			num3 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
			num2 = 3;
			num3 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
			num2 = 3;
			num3 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
			num2 = 3;
			num3 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
			num2 = 3;
			num3 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
			num2 = 3;
			num3 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
			num2 = 3;
			num3 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
			num2 = 3;
			num3 = 7;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
			num2 = 3;
			num3 = 8;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
			num2 = 3;
			num3 = 9;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
			num2 = 3;
			num3 = 10;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
			num2 = 3;
			num3 = 11;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
			num2 = 3;
			num3 = 12;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
			num2 = 3;
			num3 = 13;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
			num2 = 3;
			num3 = 14;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
			num2 = 3;
			num3 = 15;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
			num2 = 4;
			num3 = 1;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
			num2 = 4;
			num3 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
			num2 = 4;
			num3 = 3;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
			num2 = 4;
			num3 = 4;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
			num2 = 4;
			num3 = 5;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
			num2 = 4;
			num3 = 6;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
			num2 = 4;
			num3 = 7;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
			num2 = 4;
			num3 = 8;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
			num2 = 4;
			num3 = 9;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
			num2 = 4;
			num3 = 10;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
			num2 = 4;
			num3 = 11;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
			num2 = 4;
			num3 = 12;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
			num2 = 4;
			num3 = 13;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
			num2 = 4;
			num3 = 14;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
			num2 = 4;
			num3 = 15;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_5_0" /*White Shirt*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_0" /*White Shirt*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_1" /*Two-Tone Shirt*/, 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_7_0" /*Charcoal Hoodie*/, 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_8_0" /*White T-Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_9_0" /*Blue Shirt*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_0" /*White T-Shirt*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_1" /*Crevis T-Shirt*/, 16);
			num2 = 10;
			num3 = 1;
			num = 48;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_2" /*Yeti T-Shirt*/, 16);
			num2 = 10;
			num3 = 2;
			num = 35;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_3" /*Sweatbox T-Shirt*/, 16);
			num2 = 10;
			num3 = 3;
			num = 32;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_4" /*Trey Baker T-Shirt*/, 16);
			num2 = 10;
			num3 = 4;
			num = 35;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_5" /*Black T-Shirt*/, 16);
			num2 = 10;
			num3 = 5;
			num = 48;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_6" /*Fruntalot T-Shirt*/, 16);
			num2 = 10;
			num3 = 6;
			num = 52;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_7" /*Kingz of Los Santos T-Shirt*/, 16);
			num2 = 10;
			num3 = 7;
			num = 38;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_8" /*Ten Off The Chain T-Shirt*/, 16);
			num2 = 10;
			num3 = 8;
			num = 42;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_9" /*Gray T-Shirt*/, 16);
			num2 = 10;
			num3 = 9;
			num = 38;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_10" /*Green T-Shirt*/, 16);
			num2 = 10;
			num3 = 10;
			num = 35;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_11" /*Camo T-Shirt*/, 16);
			num2 = 10;
			num3 = 11;
			num = 48;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_12" /*Yeti Rainbow T-Shirt*/, 16);
			num2 = 10;
			num3 = 12;
			num = 42;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_13" /*Feud Banded T-Shirt*/, 16);
			num2 = 10;
			num3 = 13;
			num = 45;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_14" /*Yogarishima T-Shirt*/, 16);
			num2 = 10;
			num3 = 14;
			num = 45;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_15" /*Feud Gray T-Shirt*/, 16);
			num2 = 10;
			num3 = 15;
			num = 49;
			break;
	
		default:
			func_160(num6, iParam0, 63, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_182(int iParam0) // Position - 0x177C6
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 1, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_183(int iParam0) // Position - 0x1783A
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_1_0" /*Full Van Dyke*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_2_0" /*Methodical*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_3_0" /*Full Spartan*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_4_0" /*Stubble*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 5, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_184(int iParam0) // Position - 0x1790A
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 2;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 4;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 5;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 6;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 7;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 8;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 9;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 10;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 11;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 12;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 13;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 14;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 15;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 2;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 4;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 5;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 6;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 7;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 53, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_185(int iParam0) // Position - 0x17E3A
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 0;
			num = 125;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 1;
			num = 150;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 2;
			num = 175;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 3;
			num = 85;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 4;
			num = 150;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 5;
			num3 = 5;
			num = 175;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 12, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_186(int iParam0) // Position - 0x17FD1
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_9_0" /*Bandana*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_0" /*Silver Tie*/, 16);
			num2 = 11;
			num3 = 0;
			num = 195;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_1" /*Gold Tie*/, 16);
			num2 = 11;
			num3 = 1;
			num = 195;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_2" /*Cream Tie*/, 16);
			num2 = 11;
			num3 = 2;
			num = 195;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_3" /*Blue Diamond Tie*/, 16);
			num2 = 11;
			num3 = 3;
			num = 250;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_4" /*Blue Spotted Tie*/, 16);
			num2 = 11;
			num3 = 4;
			num = 250;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_5" /*White Spotted Tie*/, 16);
			num2 = 11;
			num3 = 5;
			num = 250;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_6" /*Dark Gray Tie*/, 16);
			num2 = 11;
			num3 = 6;
			num = 195;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_7" /*Gray Striped Tie*/, 16);
			num2 = 11;
			num3 = 7;
			num = 250;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_8" /*Silver Striped Tie*/, 16);
			num2 = 11;
			num3 = 8;
			num = 250;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_9" /*Red Striped Tie*/, 16);
			num2 = 11;
			num3 = 9;
			num = 250;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_10" /*Bronze Striped Tie*/, 16);
			num2 = 11;
			num3 = 10;
			num = 250;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_11" /*White Diamond Tie*/, 16);
			num2 = 11;
			num3 = 11;
			num = 195;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_12" /*Black Diamond Tie*/, 16);
			num2 = 11;
			num3 = 12;
			num = 250;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 15;
			num3 = 1;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 15;
			num3 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 15;
			num3 = 3;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 15;
			num3 = 5;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 15;
			num3 = 6;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 15;
			num3 = 7;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 15;
			num3 = 8;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 15;
			num3 = 9;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 15;
			num3 = 10;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 15;
			num3 = 11;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 15;
			num3 = 12;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 15;
			num3 = 13;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 15;
			num3 = 14;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 15;
			num3 = 15;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 16;
			num3 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 16;
			num3 = 2;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 16;
			num3 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 16;
			num3 = 4;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 16;
			num3 = 5;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 16;
			num3 = 6;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 16;
			num3 = 7;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 16;
			num3 = 8;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 16;
			num3 = 9;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 16;
			num3 = 10;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 16;
			num3 = 11;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 16;
			num3 = 12;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 16;
			num3 = 13;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 16;
			num3 = 14;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 16;
			num3 = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
			num2 = 17;
			num3 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
			num2 = 17;
			num3 = 3;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
			num2 = 17;
			num3 = 4;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
			num2 = 17;
			num3 = 5;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
			num2 = 17;
			num3 = 6;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
			num2 = 17;
			num3 = 7;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
			num2 = 17;
			num3 = 8;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
			num2 = 17;
			num3 = 9;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
			num2 = 17;
			num3 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
			num2 = 17;
			num3 = 11;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
			num2 = 17;
			num3 = 12;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
			num2 = 17;
			num3 = 13;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
			num2 = 17;
			num3 = 14;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
			num2 = 17;
			num3 = 15;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 77, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_187(int iParam0) // Position - 0x187D6
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 1;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 7, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_188(int iParam0) // Position - 0x188E6
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_0" /*White Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_1" /*All White Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 1;
			num = 80;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_2" /*Charcoal Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 2;
			num = 80;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_3" /*Yellow Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 3;
			num = 89;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_4" /*Gray Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 4;
			num = 45;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_5" /*Black Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 5;
			num = 35;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_6" /*Gray Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 6;
			num = 89;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_7" /*Lemon Accent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 7;
			num = 95;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_8" /*Two-Tone Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 8;
			num = 115;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_9" /*Cyan Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 9;
			num = 40;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_10" /*Cyan Accent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 10;
			num = 145;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_11" /*Fluorescent Athletic Shoes*/, 16);
			num2 = 0;
			num3 = 11;
			num = 145;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_01_0" /*Work Boots*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 1;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_0" /*Desert Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_1" /*Coffee Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 1;
			num = 180;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_2" /*Chocolate Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 2;
			num = 80;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_3" /*Gray Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 3;
			num = 200;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_4" /*Slate Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 4;
			num = 220;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_5" /*Copper Round-Toe Boots*/, 16);
			num2 = 6;
			num3 = 5;
			num = 235;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_0" /*Gray Snake Shoes*/, 16);
			num2 = 8;
			num3 = 0;
			num = 870;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_1" /*Black Shoes*/, 16);
			num2 = 8;
			num3 = 1;
			num = 870;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_2" /*White Snake Shoes*/, 16);
			num2 = 8;
			num3 = 2;
			num = 870;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_3" /*Gray Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 3;
			num = 1275;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_4" /*Alligator Shoes*/, 16);
			num2 = 8;
			num3 = 4;
			num = 1275;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_5" /*Brown Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 5;
			num = 1275;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_6" /*Rattlesnake Shoes*/, 16);
			num2 = 8;
			num3 = 6;
			num = 1275;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_7" /*Gray Python Shoes*/, 16);
			num2 = 8;
			num3 = 7;
			num = 1275;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_8" /*Two-Tone Crocodile Shoes*/, 16);
			num2 = 8;
			num3 = 8;
			num = 1275;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_10_0" /*Black Brogues*/, 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_0" /*Two-Tone Sneakers*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_1" /*Orange Sneakers*/, 16);
			num2 = 11;
			num3 = 1;
			num = 50;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_2" /*Black Sneakers*/, 16);
			num2 = 11;
			num3 = 2;
			num = 50;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_3" /*Desert Green Sneakers*/, 16);
			num2 = 11;
			num3 = 3;
			num = 50;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_4" /*Mint Sneakers*/, 16);
			num2 = 11;
			num3 = 4;
			num = 50;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_5" /*Freeway Sneakers*/, 16);
			num2 = 11;
			num3 = 5;
			num = 50;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_6" /*Animal Fashion Sneakers*/, 16);
			num2 = 11;
			num3 = 6;
			num = 50;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_7" /*Feud Classic Sneakers*/, 16);
			num2 = 11;
			num3 = 7;
			num = 50;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_8" /*Cacao Blend Sneakers*/, 16);
			num2 = 11;
			num3 = 8;
			num = 50;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_9" /*Magnetics Sneakers*/, 16);
			num2 = 11;
			num3 = 9;
			num = 50;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_10" /*Blue Sneakers*/, 16);
			num2 = 11;
			num3 = 10;
			num = 50;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_11" /*White Sneakers*/, 16);
			num2 = 11;
			num3 = 11;
			num = 50;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_12" /*Winter Camo Sneakers*/, 16);
			num2 = 11;
			num3 = 12;
			num = 50;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_13" /*Forest Camo Sneakers*/, 16);
			num2 = 11;
			num3 = 13;
			num = 50;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_14" /*Soft Seas Sneakers*/, 16);
			num2 = 11;
			num3 = 14;
			num = 50;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_15" /*Latte Sneakers*/, 16);
			num2 = 11;
			num3 = 15;
			num = 50;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_0" /*White Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_1" /*Green Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 1;
			num = 25;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_2" /*Two-Tone Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 2;
			num = 20;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_3" /*Black Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 3;
			num = 24;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_4" /*Blue Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 4;
			num = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_5" /*Orange Accent Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 5;
			num = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_6" /*Red Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 6;
			num = 29;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_7" /*Orange Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 7;
			num = 27;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_8" /*Mocha Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 8;
			num = 25;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_9" /*Black Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 9;
			num = 30;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_10" /*Fresh Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 10;
			num = 28;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_11" /*Green Skate Sneakers*/, 16);
			num2 = 12;
			num3 = 11;
			num = 30;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_13_0" /*Black Oxfords*/, 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_0" /*Gray Skate Shoes*/, 16);
			num2 = 14;
			num3 = 0;
			num = 155;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_1" /*White Skate Shoes*/, 16);
			num2 = 14;
			num3 = 1;
			num = 155;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_2" /*Chestnut Skate Shoes*/, 16);
			num2 = 14;
			num3 = 2;
			num = 165;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_3" /*Jade Accent Skate Shoes*/, 16);
			num2 = 14;
			num3 = 3;
			num = 170;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_4" /*Two-Tone Skate Shoes*/, 16);
			num2 = 14;
			num3 = 4;
			num = 160;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_5" /*Red Piped Skate Shoes*/, 16);
			num2 = 14;
			num3 = 5;
			num = 165;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_6" /*Red Skate Shoes*/, 16);
			num2 = 14;
			num3 = 6;
			num = 170;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_7" /*Beige Skate Shoes*/, 16);
			num2 = 14;
			num3 = 7;
			num = 160;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_0" /*Black Leather Loafers*/, 16);
			num2 = 16;
			num3 = 0;
			num = 720;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_1" /*Gray Leather Loafers*/, 16);
			num2 = 16;
			num3 = 1;
			num = 680;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_2" /*Cream Leather Loafers*/, 16);
			num2 = 16;
			num3 = 2;
			num = 650;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_3" /*Brown Leather Loafers*/, 16);
			num2 = 16;
			num3 = 3;
			num = 670;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_4" /*White Leather Loafers*/, 16);
			num2 = 16;
			num3 = 4;
			num = 700;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_5" /*Russet Leather Loafers*/, 16);
			num2 = 16;
			num3 = 5;
			num = 680;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_6" /*White Snakeskin Loafers*/, 16);
			num2 = 16;
			num3 = 6;
			num = 720;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_7" /*Rattlesnake Loafers*/, 16);
			num2 = 16;
			num3 = 7;
			num = 740;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 16;
			num3 = 8;
			num = 760;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 16;
			num3 = 9;
			num = 780;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_10" /*Pale Reptile Loafers*/, 16);
			num2 = 16;
			num3 = 10;
			num = 750;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_11" /*Tan Alligator Loafers*/, 16);
			num2 = 16;
			num3 = 11;
			num = 700;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_0" /*All Black Oxfords*/, 16);
			num2 = 17;
			num3 = 0;
			num = 790;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_1" /*Chocolate Oxfords*/, 16);
			num2 = 17;
			num3 = 1;
			num = 750;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_2" /*Chestnut Oxfords*/, 16);
			num2 = 17;
			num3 = 2;
			num = 860;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_3" /*Tan Oxfords*/, 16);
			num2 = 17;
			num3 = 3;
			num = 750;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_4" /*White Oxfords*/, 16);
			num2 = 17;
			num3 = 4;
			num = 790;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_5" /*Ash Oxfords*/, 16);
			num2 = 17;
			num3 = 5;
			num = 840;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 17;
			num3 = 6;
			num = 820;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_7" /*Beige Oxfords*/, 16);
			num2 = 17;
			num3 = 7;
			num = 800;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_8" /*Topaz Oxfords*/, 16);
			num2 = 17;
			num3 = 8;
			num = 850;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_9" /*Black Oxfords*/, 16);
			num2 = 17;
			num3 = 9;
			num = 870;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_10" /*Lime Oxfords*/, 16);
			num2 = 17;
			num3 = 10;
			num = 720;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_11" /*Hawthorn Oxfords*/, 16);
			num2 = 17;
			num3 = 11;
			num = 740;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_12" /*Coffee Oxfords*/, 16);
			num2 = 17;
			num3 = 12;
			num = 800;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_13" /*Gray Oxfords*/, 16);
			num2 = 17;
			num3 = 13;
			num = 750;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_14" /*Cream Oxfords*/, 16);
			num2 = 17;
			num3 = 14;
			num = 770;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_15" /*Navy Oxfords*/, 16);
			num2 = 17;
			num3 = 15;
			num = 860;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_0" /*Black Slip-Ons*/, 16);
			num2 = 18;
			num3 = 0;
			num = 850;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_1" /*Red Slip-Ons*/, 16);
			num2 = 18;
			num3 = 1;
			num = 800;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_2" /*Brown Slip-Ons*/, 16);
			num2 = 18;
			num3 = 2;
			num = 780;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 18;
			num3 = 3;
			num = 890;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_4" /*Green Slip-Ons*/, 16);
			num2 = 18;
			num3 = 4;
			num = 820;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_5" /*Copper Slip-Ons*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 18;
			num3 = 6;
			num = 870;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_7" /*Navy Slip-Ons*/, 16);
			num2 = 18;
			num3 = 7;
			num = 930;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_8" /*Blue Slip-Ons*/, 16);
			num2 = 18;
			num3 = 8;
			num = 880;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_9" /*Beige Slip-Ons*/, 16);
			num2 = 18;
			num3 = 9;
			num = 900;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_10" /*White Slip-Ons*/, 16);
			num2 = 18;
			num3 = 10;
			num = 920;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_11" /*Tan Slip-Ons*/, 16);
			num2 = 18;
			num3 = 11;
			num = 970;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 18;
			num3 = 12;
			num = 990;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 18;
			num3 = 13;
			num = 960;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 18;
			num3 = 14;
			num = 980;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_15" /*Gray Slip-Ons*/, 16);
			num2 = 18;
			num3 = 15;
			num = 950;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_0" /*Brown Wingtips*/, 16);
			num2 = 19;
			num3 = 0;
			num = 110;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_1" /*Navy Wingtips*/, 16);
			num2 = 19;
			num3 = 1;
			num = 115;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_2" /*Coffee Wingtips*/, 16);
			num2 = 19;
			num3 = 2;
			num = 120;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_3" /*Burgundy Wingtips*/, 16);
			num2 = 19;
			num3 = 3;
			num = 110;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_4" /*Blue Wingtips*/, 16);
			num2 = 19;
			num3 = 4;
			num = 125;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 19;
			num3 = 5;
			num = 128;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_6" /*Black Wingtips*/, 16);
			num2 = 19;
			num3 = 6;
			num = 135;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_7" /*Tan Wingtips*/, 16);
			num2 = 19;
			num3 = 7;
			num = 130;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_8" /*Purple Wingtips*/, 16);
			num2 = 19;
			num3 = 8;
			num = 145;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_9" /*Brown Wingtips*/, 16);
			num2 = 19;
			num3 = 9;
			num = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_10" /*Chocolate Wingtips*/, 16);
			num2 = 19;
			num3 = 10;
			num = 120;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_11" /*Green Wingtips*/, 16);
			num2 = 19;
			num3 = 11;
			num = 150;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_12" /*Ash Wingtips*/, 16);
			num2 = 19;
			num3 = 12;
			num = 125;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_13" /*Olive Wingtips*/, 16);
			num2 = 19;
			num3 = 13;
			num = 120;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_14" /*Two-Tone Wingtips*/, 16);
			num2 = 19;
			num3 = 14;
			num = 130;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_15" /*Yellow Wingtips*/, 16);
			num2 = 19;
			num3 = 15;
			num = 110;
			break;
	
		default:
			func_160(num6, iParam0, 134, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_189(int iParam0) // Position - 0x19811
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_0" /*Cream Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_1" /*Sand Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 1;
			num = 32;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_2" /*Navy Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 2;
			num = 38;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_3" /*Olive Cargo Shorts*/, 16);
			num2 = 0;
			num3 = 3;
			num = 44;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 4;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 5;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_2_0" /*Black Tuxedo Pants*/, 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_0" /*Gray Golf Pants*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_1" /*Cream Golf Pants*/, 16);
			num2 = 6;
			num3 = 1;
			num = 690;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_2" /*Tan Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 2;
			num = 720;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_3" /*Tartan Golf Pants*/, 16);
			num2 = 6;
			num3 = 3;
			num = 850;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_4" /*Charcoal Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 4;
			num = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_5" /*Dark Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 5;
			num = 740;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_6" /*Brown Plaid Golf Pants*/, 16);
			num2 = 6;
			num3 = 6;
			num = 750;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_7" /*Slate Golf Pants*/, 16);
			num2 = 6;
			num3 = 7;
			num = 790;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			flag = true;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_0" /*Slate Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_1" /*Blue Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 1;
			num = 145;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_2" /*Gray Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 2;
			num = 140;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_3" /*Pale Blue Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 3;
			num = 148;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_4" /*Black Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 4;
			num = 150;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_5" /*Blue-Green Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 5;
			num = 154;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_6" /*Faded Baggy Jeans*/, 16);
			num2 = 8;
			num3 = 6;
			num = 158;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_0" /*Beige Chinos*/, 16);
			num2 = 11;
			num3 = 0;
			num = 820;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_1" /*Olive Chinos*/, 16);
			num2 = 11;
			num3 = 1;
			num = 820;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_2" /*Black Chinos*/, 16);
			num2 = 11;
			num3 = 2;
			num = 850;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_3" /*Off-White Chinos*/, 16);
			num2 = 11;
			num3 = 3;
			num = 850;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_4" /*Gray Chinos*/, 16);
			num2 = 11;
			num3 = 4;
			num = 920;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_5" /*Navy Chinos*/, 16);
			num2 = 11;
			num3 = 5;
			num = 950;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_0" /*Silver Sweatpants*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_1" /*Gray Sweatpants*/, 16);
			num2 = 13;
			num3 = 1;
			num = 45;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_2" /*Topaz Sweatpants*/, 16);
			num2 = 13;
			num3 = 2;
			num = 48;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_3" /*Ash Sweatpants*/, 16);
			num2 = 13;
			num3 = 3;
			num = 45;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_4" /*Slate Sweatpants*/, 16);
			num2 = 13;
			num3 = 4;
			num = 48;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_5" /*Olive Sweatpants*/, 16);
			num2 = 13;
			num3 = 5;
			num = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_6" /*Jade Sweatpants*/, 16);
			num2 = 13;
			num3 = 6;
			num = 55;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_7" /*Dark Green Sweatpants*/, 16);
			num2 = 13;
			num3 = 7;
			num = 58;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_8" /*Teal Sweatpants*/, 16);
			num2 = 13;
			num3 = 8;
			num = 60;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_9" /*Brown Sweatpants*/, 16);
			num2 = 13;
			num3 = 9;
			num = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_10" /*Kingz Green Sweatpants*/, 16);
			num2 = 13;
			num3 = 10;
			num = 62;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_11" /*Gray Stripe Sweatpants*/, 16);
			num2 = 13;
			num3 = 11;
			num = 65;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_14_0" /*White Shorts*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_0" /*Gray Plaid Pants*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_1" /*Silver Plaid Pants*/, 16);
			num2 = 15;
			num3 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_2" /*Charcoal Plaid Pants*/, 16);
			num2 = 15;
			num3 = 2;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_3" /*Tan Plaid Pants*/, 16);
			num2 = 15;
			num3 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_4" /*Charcoal Pants*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_5" /*Ash Pants*/, 16);
			num2 = 15;
			num3 = 5;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_6" /*Beige Pants*/, 16);
			num2 = 15;
			num3 = 6;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_7" /*Cream Pants*/, 16);
			num2 = 15;
			num3 = 7;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_8" /*Navy Plaid Pants*/, 16);
			num2 = 15;
			num3 = 8;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_9" /*Off-White Pants*/, 16);
			num2 = 15;
			num3 = 9;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_10" /*White Pants*/, 16);
			num2 = 15;
			num3 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_11" /*Subtle Blue Pants*/, 16);
			num2 = 15;
			num3 = 11;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_12" /*Navy Pants*/, 16);
			num2 = 15;
			num3 = 12;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_13" /*Rust Pants*/, 16);
			num2 = 15;
			num3 = 13;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_14" /*Green Pants*/, 16);
			num2 = 15;
			num3 = 14;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_15" /*Tan Pants*/, 16);
			num2 = 15;
			num3 = 15;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_16_0" /*Combat Pants*/, 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_0" /*White Boxers*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_1" /*Gray Boxers*/, 16);
			num2 = 18;
			num3 = 1;
			num = 160;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_2" /*Black Boxers*/, 16);
			num2 = 18;
			num3 = 2;
			num = 180;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_3" /*Kings Ash Boxers*/, 16);
			num2 = 18;
			num3 = 3;
			num = 180;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_4" /*Feud Green Boxers*/, 16);
			num2 = 18;
			num3 = 4;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_5" /*Feud White Boxers*/, 16);
			num2 = 18;
			num3 = 5;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_19_0" /*Black Tuxedo Pants*/, 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_0" /*Indigo Jeans*/, 16);
			num2 = 20;
			num3 = 0;
			num = 118;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_1" /*Black Jeans*/, 16);
			num2 = 20;
			num3 = 1;
			num = 120;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_2" /*Gray Faded Jeans*/, 16);
			num2 = 20;
			num3 = 2;
			num = 128;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_3" /*Navy Jeans*/, 16);
			num2 = 20;
			num3 = 3;
			num = 128;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_4" /*Brown Jeans*/, 16);
			num2 = 20;
			num3 = 4;
			num = 130;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_5" /*Blue Jeans*/, 16);
			num2 = 20;
			num3 = 5;
			num = 145;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_6" /*Olive Jeans*/, 16);
			num2 = 20;
			num3 = 6;
			num = 138;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_7" /*Black Faded Jeans*/, 16);
			num2 = 20;
			num3 = 7;
			num = 132;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_8" /*Coffee Jeans*/, 16);
			num2 = 20;
			num3 = 8;
			num = 148;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_0" /*Indigo Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 0;
			num = 118;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_1" /*Black Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 1;
			num = 118;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_2" /*Aqua Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 2;
			num = 118;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_3" /*Brown Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 3;
			num = 129;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_4" /*Blue Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 4;
			num = 135;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_5" /*Red Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 5;
			num = 135;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_6" /*Gray Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 6;
			num = 118;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_7" /*Green Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 7;
			num = 118;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_8" /*Coffee Skinny Jeans*/, 16);
			num2 = 21;
			num3 = 8;
			num = 118;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_0" /*LS Panic Charcoal Shorts*/, 16);
			num2 = 22;
			num3 = 0;
			num = 55;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_1" /*LS Panic Yellow Shorts*/, 16);
			num2 = 22;
			num3 = 1;
			num = 55;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_2" /*Prolaps White Shorts*/, 16);
			num2 = 22;
			num3 = 2;
			num = 59;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_3" /*Prolaps Blue Shorts*/, 16);
			num2 = 22;
			num3 = 3;
			num = 59;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_4" /*LC Salamanders Red Shorts*/, 16);
			num2 = 22;
			num3 = 4;
			num = 65;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_5" /*LC Salamanders Green Shorts*/, 16);
			num2 = 22;
			num3 = 5;
			num = 65;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_6" /*LS Shrimps Gray Shorts*/, 16);
			num2 = 22;
			num3 = 6;
			num = 69;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_7" /*LS Shrimps White Shorts*/, 16);
			num2 = 22;
			num3 = 7;
			num = 69;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_8" /*LOB Gray Shorts*/, 16);
			num2 = 22;
			num3 = 8;
			num = 75;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_9" /*LOB Blue Shorts*/, 16);
			num2 = 22;
			num3 = 9;
			num = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_10" /*LOB Green Shorts*/, 16);
			num2 = 22;
			num3 = 10;
			num = 65;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_11" /*LOB Tan Shorts*/, 16);
			num2 = 22;
			num3 = 11;
			num = 65;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_12" /*LOB Orange Shorts*/, 16);
			num2 = 22;
			num3 = 12;
			num = 65;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_13" /*LOB Pale Blue Shorts*/, 16);
			num2 = 22;
			num3 = 13;
			num = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_0" /*Broker White Shorts*/, 16);
			num2 = 23;
			num3 = 0;
			num = 38;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_1" /*Broker Black Shorts*/, 16);
			num2 = 23;
			num3 = 1;
			num = 38;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_2" /*Broker Gray Shorts*/, 16);
			num2 = 23;
			num3 = 2;
			num = 28;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_3" /*Broker Navy Shorts*/, 16);
			num2 = 23;
			num3 = 3;
			num = 34;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_4" /*Broker Green Shorts*/, 16);
			num2 = 23;
			num3 = 4;
			num = 36;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_5" /*Broker Brown Shorts*/, 16);
			num2 = 23;
			num3 = 5;
			num = 32;
			break;
	
		default:
			func_160(num6, iParam0, 117, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_190(int iParam0) // Position - 0x1A4CE
{
	if (iParam0 < 107)
		func_193(iParam0);
	else if (iParam0 < 227)
		func_192(iParam0);
	else
		func_191(iParam0);

	if (Global_79172[0 /*14*/].f_2 == -1)
		func_160(3, iParam0, 318, -1);

	return;
}

void func_191(int iParam0) // Position - 0x1A514
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 0;
			num5 = 3;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 1;
			num5 = 3;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 2;
			num5 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
			num2 = 23;
			num3 = 3;
			num5 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
			num2 = 23;
			num3 = 4;
			num5 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
			num2 = 23;
			num3 = 5;
			num5 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
			num2 = 23;
			num3 = 6;
			num5 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
			num2 = 23;
			num3 = 7;
			num5 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
			num2 = 23;
			num3 = 8;
			num5 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
			num2 = 23;
			num3 = 9;
			num5 = 3;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
			num2 = 23;
			num3 = 10;
			num5 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
			num2 = 23;
			num3 = 11;
			num5 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
			num2 = 23;
			num3 = 12;
			num5 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
			num2 = 23;
			num3 = 13;
			num5 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
			num2 = 23;
			num3 = 14;
			num5 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
			num2 = 23;
			num3 = 15;
			num5 = 3;
			break;
	
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_0" /*Navy Plaid Vest*/, 16);
			num2 = 24;
			num3 = 0;
			num = 2200;
			num5 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_1" /*Gray Plaid Vest*/, 16);
			num2 = 24;
			num3 = 1;
			num = 2200;
			num5 = 3;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_2" /*Silver Plaid Vest*/, 16);
			num2 = 24;
			num3 = 2;
			num = 2200;
			num5 = 3;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_3" /*Charcoal Vest*/, 16);
			num2 = 24;
			num3 = 3;
			num = 2200;
			num5 = 3;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_4" /*Plum Plaid Vest*/, 16);
			num2 = 24;
			num3 = 4;
			num = 2200;
			num5 = 3;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_5" /*All Ash Vest*/, 16);
			num2 = 24;
			num3 = 5;
			num = 2200;
			num5 = 3;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_6" /*Silverback Vest*/, 16);
			num2 = 24;
			num3 = 6;
			num = 2200;
			num5 = 3;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_7" /*Gray Subtle Plaid Vest*/, 16);
			num2 = 24;
			num3 = 7;
			num = 2200;
			num5 = 3;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_8" /*Green Plaid Vest*/, 16);
			num2 = 24;
			num3 = 8;
			num = 2200;
			num5 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_9" /*Ash Plaid Vest*/, 16);
			num2 = 24;
			num3 = 9;
			num = 2200;
			num5 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_10" /*Stone Plaid Vest*/, 16);
			num2 = 24;
			num3 = 10;
			num = 2200;
			num5 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_11" /*Charcoal Plaid Vest*/, 16);
			num2 = 24;
			num3 = 11;
			num = 2200;
			num5 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_12" /*White Vest*/, 16);
			num2 = 24;
			num3 = 12;
			num = 2200;
			num5 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_13" /*Gray Vest*/, 16);
			num2 = 24;
			num3 = 13;
			num = 2200;
			num5 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_14" /*Silver Light Plaid Vest*/, 16);
			num2 = 24;
			num3 = 14;
			num = 2200;
			num5 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_15" /*All Silver Vest*/, 16);
			num2 = 24;
			num3 = 15;
			num = 2200;
			num5 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_25_0" /*Gray Tuxedo Jacket*/, 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			num5 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			num5 = 1;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_0" /*Brown Shooting Vest*/, 16);
			num2 = 27;
			num3 = 0;
			num = 150;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_1" /*Woodland Shooting Vest*/, 16);
			num2 = 27;
			num3 = 1;
			num = 160;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_2" /*Taupe Shooting Vest*/, 16);
			num2 = 27;
			num3 = 2;
			num = 150;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 27;
			num3 = 3;
			num = 150;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_4" /*Field Shooting Vest*/, 16);
			num2 = 27;
			num3 = 4;
			num = 160;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_5" /*Forest Shooting Vest*/, 16);
			num2 = 27;
			num3 = 5;
			num = 160;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_0" /*Silver Hoodie*/, 16);
			num2 = 28;
			num3 = 0;
			num = 88;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_1" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 28;
			num3 = 1;
			num = 60;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_2" /*LSGC Gray Hoodie*/, 16);
			num2 = 28;
			num3 = 2;
			num = 70;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 28;
			num3 = 3;
			num = 80;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_4" /*LSGC Forest Hoodie*/, 16);
			num2 = 28;
			num3 = 4;
			num = 90;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 28;
			num3 = 5;
			num = 80;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_6" /*Blauser Hoodie*/, 16);
			num2 = 28;
			num3 = 6;
			num = 70;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_7" /*Penetrators Orange Hoodie*/, 16);
			num2 = 28;
			num3 = 7;
			num = 95;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_8" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 28;
			num3 = 8;
			num = 105;
			break;
	
		case 276:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_9" /*Blue Hoodie*/, 16);
			num2 = 28;
			num3 = 9;
			num = 95;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_10" /*Green Hoodie*/, 16);
			num2 = 28;
			num3 = 10;
			num = 110;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_11" /*LS Jardineros Hoodie*/, 16);
			num2 = 28;
			num3 = 11;
			num = 98;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_12" /*Ash 18 Hoodie*/, 16);
			num2 = 28;
			num3 = 12;
			num = 88;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_13" /*Red Mist XI Hoodie*/, 16);
			num2 = 28;
			num3 = 13;
			num = 98;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_14" /*Eris Charcoal Hoodie*/, 16);
			num2 = 28;
			num3 = 14;
			num = 110;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_15" /*OG Hoodie*/, 16);
			num2 = 28;
			num3 = 15;
			num = 98;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_0" /*White V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 0;
			num = 250;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_1" /*Ash V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 1;
			num = 270;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_2" /*Black V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 2;
			num = 280;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_3" /*Brown V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 3;
			num = 275;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_4" /*Olive V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 4;
			num = 290;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_5" /*Corkers V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 5;
			num = 35;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_6" /*Feud V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 6;
			num = 35;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_7" /*Magnetics V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 7;
			num = 35;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_8" /*Mint V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 8;
			num = 295;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_9" /*Harsh Souls V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 9;
			num = 35;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_10" /*Trey Baker V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 10;
			num = 35;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_11" /*Fuque V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 11;
			num = 35;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_12" /*Fellowship V Neck T-Shirt*/, 16);
			num2 = 29;
			num3 = 12;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_0" /*Green Cardigan*/, 16);
			num2 = 30;
			num3 = 0;
			num = 1750;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_1" /*Gray Cardigan*/, 16);
			num2 = 30;
			num3 = 1;
			num = 1920;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_2" /*Slate Cardigan*/, 16);
			num2 = 30;
			num3 = 2;
			num = 1890;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_3" /*Blue Cardigan*/, 16);
			num2 = 30;
			num3 = 3;
			num = 1850;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_4" /*Red Cardigan*/, 16);
			num2 = 30;
			num3 = 4;
			num = 1750;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_5" /*Charcoal Cardigan*/, 16);
			num2 = 30;
			num3 = 5;
			num = 1990;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_6" /*White Cardigan*/, 16);
			num2 = 30;
			num3 = 6;
			num = 1820;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_7" /*Silver Cardigan*/, 16);
			num2 = 30;
			num3 = 7;
			num = 1990;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_8" /*Pale Blue Cardigan*/, 16);
			num2 = 30;
			num3 = 8;
			num = 1920;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_9" /*Aqua Cardigan*/, 16);
			num2 = 30;
			num3 = 9;
			num = 1850;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_10" /*Gray Two-Tone Cardigan*/, 16);
			num2 = 30;
			num3 = 10;
			num = 1990;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_11" /*Pink Cardigan*/, 16);
			num2 = 30;
			num3 = 11;
			num = 1790;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_12" /*Yellow Cardigan*/, 16);
			num2 = 30;
			num3 = 12;
			num = 1790;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_0" /*LS Panic Gray Jersey*/, 16);
			num2 = 31;
			num3 = 0;
			num = 69;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_1" /*LS Panic Yellow Jersey*/, 16);
			num2 = 31;
			num3 = 1;
			num = 75;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_2" /*Penetrators White Jersey*/, 16);
			num2 = 31;
			num3 = 2;
			num = 75;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_3" /*Penetrators Blue Jersey*/, 16);
			num2 = 31;
			num3 = 3;
			num = 79;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_4" /*LC Salamanders Red Jersey*/, 16);
			num2 = 31;
			num3 = 4;
			num = 79;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_5" /*LC Salamanders Green Jersey*/, 16);
			num2 = 31;
			num3 = 5;
			num = 89;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_6" /*LS Shrimps Gray Jersey*/, 16);
			num2 = 31;
			num3 = 6;
			num = 85;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_7" /*LS Shrimps White Jersey*/, 16);
			num2 = 31;
			num3 = 7;
			num = 85;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_8" /*Uptown Riders Jersey*/, 16);
			num2 = 31;
			num3 = 8;
			break;
	
		default:
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_192(int iParam0) // Position - 0x1AFB9
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_0" /*Snake A Jacket*/, 16);
			num2 = 12;
			num3 = 0;
			num = 195;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_1" /*Eagle 69 Jacket*/, 16);
			num2 = 12;
			num3 = 1;
			num = 420;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_2" /*LS Corkers 33 Jacket*/, 16);
			num2 = 12;
			num3 = 2;
			num = 390;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_3" /*LSP 41 Jacket*/, 16);
			num2 = 12;
			num3 = 3;
			num = 450;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_4" /*LS Corkers E Jacket*/, 16);
			num2 = 12;
			num3 = 4;
			num = 400;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_5" /*LS Squeezers Jacket*/, 16);
			num2 = 12;
			num3 = 5;
			num = 390;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_6" /*The Feud 69 Jacket*/, 16);
			num2 = 12;
			num3 = 6;
			num = 570;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_7" /*LS Pounders Jacket*/, 16);
			num2 = 12;
			num3 = 7;
			num = 390;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_8" /*SA Jacket*/, 16);
			num2 = 12;
			num3 = 8;
			num = 470;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_9" /*Redwood A Jacket*/, 16);
			num2 = 12;
			num3 = 9;
			num = 390;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_10" /*Uptown Riders Jacket*/, 16);
			num2 = 12;
			num3 = 10;
			num = 520;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_11" /*The Feud Black Jacket*/, 16);
			num2 = 12;
			num3 = 11;
			num = 490;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_12" /*Yeti Jacket*/, 16);
			num2 = 12;
			num3 = 12;
			num = 490;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_13" /*LSP 71 Jacket*/, 16);
			num2 = 12;
			num3 = 13;
			num = 590;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_14" /*Dust Devils Jacket*/, 16);
			num2 = 12;
			num3 = 14;
			num = 560;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_15" /*SA 56 Jacket*/, 16);
			num2 = 12;
			num3 = 15;
			num = 520;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_0" /*Gray Hoodie*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_1" /*Kingz of Los Santos Hoodie*/, 16);
			num2 = 13;
			num3 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_2" /*LS Black Hoodie*/, 16);
			num2 = 13;
			num3 = 2;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_3" /*Dark Blue Hoodie*/, 16);
			num2 = 13;
			num3 = 3;
			num = 90;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_4" /*LS Mustard Hoodie*/, 16);
			num2 = 13;
			num3 = 4;
			num = 85;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_5" /*Crevis Hoodie*/, 16);
			num2 = 13;
			num3 = 5;
			num = 45;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_6" /*Dust Devils Hoodie*/, 16);
			num2 = 13;
			num3 = 6;
			num = 90;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_7" /*Feud Olive Hoodie*/, 16);
			num2 = 13;
			num3 = 7;
			num = 47;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_8" /*Eris Hoodie*/, 16);
			num2 = 13;
			num3 = 8;
			num = 45;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_9" /*Hinterland Hoodie*/, 16);
			num2 = 13;
			num3 = 9;
			num = 48;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_10" /*Feud Mint Hoodie*/, 16);
			num2 = 13;
			num3 = 10;
			num = 45;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_11" /*Penetrators Gray Hoodie*/, 16);
			num2 = 13;
			num3 = 11;
			num = 85;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_12" /*Ash Hoodie*/, 16);
			num2 = 13;
			num3 = 12;
			num = 45;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_13" /*Rearwall Hoodie*/, 16);
			num2 = 13;
			num3 = 13;
			num = 47;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_14" /*Trey Baker Hoodie*/, 16);
			num2 = 13;
			num3 = 14;
			num = 45;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_15" /*Feud Camo Hoodie*/, 16);
			num2 = 13;
			num3 = 15;
			num = 48;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_0" /*Gray Jacket*/, 16);
			num2 = 14;
			num3 = 0;
			num = 290;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_1" /*Charcoal Jacket*/, 16);
			num2 = 14;
			num3 = 1;
			num = 290;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_2" /*Silver Jacket*/, 16);
			num2 = 14;
			num3 = 2;
			num = 290;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_3" /*Olive Jacket*/, 16);
			num2 = 14;
			num3 = 3;
			num = 290;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_4" /*Brown Jacket*/, 16);
			num2 = 14;
			num3 = 4;
			num = 290;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_5" /*Desert Sand Jacket*/, 16);
			num2 = 14;
			num3 = 5;
			num = 290;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_6" /*Field Camo Jacket*/, 16);
			num2 = 14;
			num3 = 6;
			num = 65;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_7" /*Desert Camo Jacket*/, 16);
			num2 = 14;
			num3 = 7;
			num = 65;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_0" /*White T-Shirt*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_1" /*Gray T-Shirt*/, 16);
			num2 = 15;
			num3 = 1;
			num = 220;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_2" /*Slate T-Shirt*/, 16);
			num2 = 15;
			num3 = 2;
			num = 220;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_3" /*Jade T-Shirt*/, 16);
			num2 = 15;
			num3 = 3;
			num = 240;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_4" /*100% T-Shirt*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_5" /*Navy T-Shirt*/, 16);
			num2 = 15;
			num3 = 5;
			num = 250;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_6" /*Black T-Shirt*/, 16);
			num2 = 15;
			num3 = 6;
			num = 260;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_7" /*LC Wrath T-Shirt*/, 16);
			num2 = 15;
			num3 = 7;
			num = 40;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_8" /*LOB T-Shirt*/, 16);
			num2 = 15;
			num3 = 8;
			num = 50;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_9" /*UCLS Bookworms T-Shirt*/, 16);
			num2 = 15;
			num3 = 9;
			num = 45;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_10" /*Los Santos Red T-Shirt*/, 16);
			num2 = 15;
			num3 = 10;
			num = 40;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_11" /*Queensbury Boxing T-Shirt*/, 16);
			num2 = 15;
			num3 = 11;
			num = 55;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_16_0" /*Black Shirt*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_0" /*Blue Jacket*/, 16);
			num2 = 17;
			num3 = 0;
			num = 40;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_1" /*OG Slate Jacket*/, 16);
			num2 = 17;
			num3 = 1;
			num = 50;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_2" /*OG White Jacket*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_3" /*Corkers Green Jacket*/, 16);
			num2 = 17;
			num3 = 3;
			num = 50;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_4" /*Deep Gray Jacket*/, 16);
			num2 = 17;
			num3 = 4;
			num = 50;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_5" /*Kingz Banded Jacket*/, 16);
			num2 = 17;
			num3 = 5;
			num = 50;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_6" /*Stank Forest Camo Jacket*/, 16);
			num2 = 17;
			num3 = 6;
			num = 50;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_7" /*Trey Baker Camo Jacket*/, 16);
			num2 = 17;
			num3 = 7;
			num = 50;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_8" /*Coffee Jacket*/, 16);
			num2 = 17;
			num3 = 8;
			num = 50;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_9" /*Plain Coffee Jacket*/, 16);
			num2 = 17;
			num3 = 9;
			num = 50;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_10" /*Fruntalot Green Jacket*/, 16);
			num2 = 17;
			num3 = 10;
			num = 50;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_11" /*Mocha Jacket*/, 16);
			num2 = 17;
			num3 = 11;
			num = 50;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_12" /*Brown Jacket*/, 16);
			num2 = 17;
			num3 = 12;
			num = 50;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_13" /*LS Snake Weave Jacket*/, 16);
			num2 = 17;
			num3 = 13;
			num = 50;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_14" /*Feud Animal Print Jacket*/, 16);
			num2 = 17;
			num3 = 14;
			num = 50;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_15" /*Fruntalot Techno Jacket*/, 16);
			num2 = 17;
			num3 = 15;
			num = 50;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 0;
			num5 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 1;
			num5 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 2;
			num5 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
			num2 = 18;
			num3 = 3;
			num5 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
			num2 = 18;
			num3 = 4;
			num5 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
			num2 = 18;
			num3 = 5;
			num5 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
			num2 = 18;
			num3 = 6;
			num5 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
			num2 = 18;
			num3 = 7;
			num5 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
			num2 = 18;
			num3 = 8;
			num5 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
			num2 = 18;
			num3 = 9;
			num5 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
			num2 = 18;
			num3 = 10;
			num5 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
			num2 = 18;
			num3 = 11;
			num5 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
			num2 = 18;
			num3 = 12;
			num5 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
			num2 = 18;
			num3 = 13;
			num5 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
			num2 = 18;
			num3 = 14;
			num5 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
			num2 = 18;
			num3 = 15;
			num5 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_0" /*Blue Striped Shirt*/, 16);
			num2 = 19;
			num3 = 0;
			num = 480;
			num5 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_1" /*Beige Striped Shirt*/, 16);
			num2 = 19;
			num3 = 1;
			num = 440;
			num5 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_2" /*Gray Shirt*/, 16);
			num2 = 19;
			num3 = 2;
			num = 440;
			num5 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_3" /*Slate Shirt*/, 16);
			num2 = 19;
			num3 = 3;
			num = 520;
			num5 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_4" /*Green Shirt*/, 16);
			num2 = 19;
			num3 = 4;
			num = 440;
			num5 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_5" /*Picnic Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 5;
			num = 440;
			num5 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_6" /*White Shirt*/, 16);
			num2 = 19;
			num3 = 6;
			num = 480;
			num5 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_7" /*Light Green Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 7;
			num = 480;
			num5 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_8" /*Pink Striped Shirt*/, 16);
			num2 = 19;
			num3 = 8;
			num = 480;
			num5 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_9" /*Country Check Shirt*/, 16);
			num2 = 19;
			num3 = 9;
			num = 480;
			num5 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_10" /*Off-White Striped Shirt*/, 16);
			num2 = 19;
			num3 = 10;
			num = 480;
			num5 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_11" /*Russet Striped Shirt*/, 16);
			num2 = 19;
			num3 = 11;
			num = 480;
			num5 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_12" /*Sea Green Plaid Shirt*/, 16);
			num2 = 19;
			num3 = 12;
			num = 520;
			num5 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_13" /*Navy Shirt*/, 16);
			num2 = 19;
			num3 = 13;
			num = 520;
			num5 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_14" /*Brown Check Shirt*/, 16);
			num2 = 19;
			num3 = 14;
			num = 520;
			num5 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_15" /*Sand Check Shirt*/, 16);
			num2 = 19;
			num3 = 15;
			num = 440;
			num5 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_0" /*Black Jacket*/, 16);
			num2 = 21;
			num3 = 0;
			num = 220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_1" /*Sand Jacket*/, 16);
			num2 = 21;
			num3 = 1;
			num = 200;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_2" /*Teal Jacket*/, 16);
			num2 = 21;
			num3 = 2;
			num = 240;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_3" /*Gray Jacket*/, 16);
			num2 = 21;
			num3 = 3;
			num = 240;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_4" /*Gray Three-Way Jacket*/, 16);
			num2 = 21;
			num3 = 4;
			num = 260;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_5" /*Red Accent Jacket*/, 16);
			num2 = 21;
			num3 = 5;
			num = 275;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_6" /*Aqua Accent Jacket*/, 16);
			num2 = 21;
			num3 = 6;
			num = 275;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_7" /*Brown Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 7;
			num = 280;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_8" /*White Jacket*/, 16);
			num2 = 21;
			num3 = 8;
			num = 280;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_9" /*Tan Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 9;
			num = 280;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_10" /*Red Jacket*/, 16);
			num2 = 21;
			num3 = 10;
			num = 280;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_11" /*Olive Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 11;
			num = 280;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_12" /*Three-Way Jacket*/, 16);
			num2 = 21;
			num3 = 12;
			num = 280;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_13" /*Ash Two-Tone Jacket*/, 16);
			num2 = 21;
			num3 = 13;
			num = 280;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_0" /*Navy Peacoat*/, 16);
			num2 = 22;
			num3 = 0;
			num = 3100;
			num5 = 3;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_1" /*Gray Peacoat*/, 16);
			num2 = 22;
			num3 = 1;
			num = 2800;
			num5 = 3;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_2" /*Brown Peacoat*/, 16);
			num2 = 22;
			num3 = 2;
			num = 2500;
			num5 = 3;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_3" /*Black Peacoat*/, 16);
			num2 = 22;
			num3 = 3;
			num = 3000;
			num5 = 3;
			break;
	
		default:
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_193(int iParam0) // Position - 0x1BDA8
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_0" /*White Tank Top*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_1" /*Black Tank Top*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_2" /*Gray Tank Top*/, 16);
			num2 = 0;
			num3 = 2;
			num = 180;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_3" /*Feud Green Tank Top*/, 16);
			num2 = 0;
			num3 = 3;
			num = 22;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_4" /*Fruntalot Jade Tank Top*/, 16);
			num2 = 0;
			num3 = 4;
			num = 20;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_5" /*Fruntalot Brown Tank Top*/, 16);
			num2 = 0;
			num3 = 5;
			num = 18;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_6" /*Broker Blue Tank Top*/, 16);
			num2 = 0;
			num3 = 6;
			num = 19;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_7" /*Kingz Green Tank Top*/, 16);
			num2 = 0;
			num3 = 7;
			num = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_8" /*Broker Gray Tank Top*/, 16);
			num2 = 0;
			num3 = 8;
			num = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_9" /*Harsh Souls Tank Top*/, 16);
			num2 = 0;
			num3 = 9;
			num = 19;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_10" /*Sweatbox Tank Top*/, 16);
			num2 = 0;
			num3 = 10;
			num = 19;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_11" /*White Ringer Tank Top*/, 16);
			num2 = 0;
			num3 = 11;
			num = 18;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_12" /*Rearwall Tank Top*/, 16);
			num2 = 0;
			num3 = 12;
			num = 20;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_13" /*Feud 3 Tank Top*/, 16);
			num2 = 0;
			num3 = 13;
			num = 22;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_14" /*Kingz Charcoal Tank Top*/, 16);
			num2 = 0;
			num3 = 14;
			num = 19;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_15" /*Feud White Tank Top*/, 16);
			num2 = 0;
			num3 = 15;
			num = 22;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			flag = true;
			num5 = 4;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			flag = true;
			num5 = 4;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			flag = true;
			num5 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 4;
			flag = true;
			num5 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 5;
			flag = true;
			num5 = 4;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_2_0" /*White Tuxedo Jacket*/, 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num5 = 3;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num5 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_0" /*White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 0;
			num = 20;
			num5 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_1" /*Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 1;
			num = 22;
			num5 = 2;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_2" /*Ash OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 2;
			num = 20;
			num5 = 2;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_3" /*LC Swingers OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 3;
			num = 25;
			num5 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_4" /*Corkers Red OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 4;
			num = 23;
			num5 = 2;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_5" /*Corkers Green OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 5;
			num = 25;
			num5 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_6" /*Uptown Riders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 6;
			num = 28;
			num5 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_7" /*Feud White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 7;
			num = 26;
			num5 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_8" /*Salamanders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 8;
			num = 24;
			num5 = 2;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_9" /*LC Rampage OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 9;
			num = 27;
			num5 = 2;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_10" /*Dust Devils OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 10;
			num = 29;
			num5 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_11" /*LS Gray OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 11;
			num = 28;
			num5 = 2;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_12" /*Los Santos Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 12;
			num = 25;
			num5 = 2;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_13" /*Los Santos White OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 13;
			num = 22;
			num5 = 2;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_14" /*Pounders OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 14;
			num = 27;
			num5 = 2;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_15" /*Feud Black OG T-Shirt*/, 16);
			num2 = 4;
			num3 = 15;
			num = 29;
			num5 = 2;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_0" /*Pine Striped Sweater*/, 16);
			num2 = 6;
			num3 = 0;
			num5 = 3;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_1" /*Yellow Sweater*/, 16);
			num2 = 6;
			num3 = 1;
			num = 1270;
			num5 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_2" /*Blue Sweater*/, 16);
			num2 = 6;
			num3 = 2;
			num = 1270;
			num5 = 3;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_3" /*Sand Striped Sweater*/, 16);
			num2 = 6;
			num3 = 3;
			num = 1270;
			num5 = 3;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_4" /*Silver Sweater*/, 16);
			num2 = 6;
			num3 = 4;
			num = 1090;
			num5 = 3;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_5" /*Gray Sweater*/, 16);
			num2 = 6;
			num3 = 5;
			num = 1090;
			num5 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_6" /*Navy Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 6;
			num = 1120;
			num5 = 3;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_7" /*Sand Sweater*/, 16);
			num2 = 6;
			num3 = 7;
			num = 1120;
			num5 = 3;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_8" /*Salmon Pink Sweater*/, 16);
			num2 = 6;
			num3 = 8;
			num = 1290;
			num5 = 3;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_9" /*Turquoise Sweater*/, 16);
			num2 = 6;
			num3 = 9;
			num = 1290;
			num5 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_10" /*Green Sweater*/, 16);
			num2 = 6;
			num3 = 10;
			num = 1320;
			num5 = 3;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_11" /*Amethyst Sweater*/, 16);
			num2 = 6;
			num3 = 11;
			num = 1320;
			num5 = 3;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_12" /*Yellow Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 12;
			num = 1590;
			num5 = 3;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_13" /*Gray Two-Tone Sweater*/, 16);
			num2 = 6;
			num3 = 13;
			num = 1590;
			num5 = 3;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_14" /*Sand Argyle Sweater*/, 16);
			num2 = 6;
			num3 = 14;
			num = 1590;
			num5 = 3;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_15" /*Charcoal Sweater*/, 16);
			num2 = 6;
			num3 = 15;
			num = 1320;
			num5 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_0" /*Ash Shirt*/, 16);
			num2 = 7;
			num3 = 0;
			num = 98;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_1" /*Gray Shirt*/, 16);
			num2 = 7;
			num3 = 1;
			num = 98;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_2" /*Black Shirt*/, 16);
			num2 = 7;
			num3 = 2;
			num = 110;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_3" /*Silver Shirt*/, 16);
			num2 = 7;
			num3 = 3;
			num = 110;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_4" /*White Shirt*/, 16);
			num2 = 7;
			num3 = 4;
			num = 118;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_5" /*Olive Shirt*/, 16);
			num2 = 7;
			num3 = 5;
			num = 120;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_6" /*Navy Shirt*/, 16);
			num2 = 7;
			num3 = 6;
			num = 120;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_7" /*Red Shirt*/, 16);
			num2 = 7;
			num3 = 7;
			num = 129;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_8" /*Tan Check Shirt*/, 16);
			num2 = 7;
			num3 = 8;
			num = 125;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_9" /*Beige Gingham Shirt*/, 16);
			num2 = 7;
			num3 = 9;
			num = 125;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_10" /*Gray Gingham Shirt*/, 16);
			num2 = 7;
			num3 = 10;
			num = 129;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_11" /*Gray Check Shirt*/, 16);
			num2 = 7;
			num3 = 11;
			num = 129;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_12" /*Blue Shirt*/, 16);
			num2 = 7;
			num3 = 12;
			num = 135;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_13" /*Off-White Shirt*/, 16);
			num2 = 7;
			num3 = 13;
			num = 139;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_14" /*Pastel Check Shirt*/, 16);
			num2 = 7;
			num3 = 14;
			num = 145;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_15" /*Fruity Check Shirt*/, 16);
			num2 = 7;
			num3 = 15;
			num = 145;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_0" /*Blue Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_1" /*Yellow Check Shirt*/, 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_2" /*Off-White Striped Shirt*/, 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_3" /*Off-White Shirt*/, 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_4" /*Red Check Shirt*/, 16);
			num2 = 8;
			num3 = 4;
			num = 30;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_5" /*Charcoal Shirt*/, 16);
			num2 = 8;
			num3 = 5;
			num = 38;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_6" /*Blue Check Shirt*/, 16);
			num2 = 8;
			num3 = 6;
			num = 32;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_7" /*Gingham Shirt*/, 16);
			num2 = 8;
			num3 = 7;
			num = 30;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_8" /*Aqua Check Shirt*/, 16);
			num2 = 8;
			num3 = 8;
			num = 33;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_9" /*Orange Shirt*/, 16);
			num2 = 8;
			num3 = 9;
			num = 35;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_10" /*Mint Check Shirt*/, 16);
			num2 = 8;
			num3 = 10;
			num = 35;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_11" /*Dark Gray Check Shirt*/, 16);
			num2 = 8;
			num3 = 11;
			num = 38;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_12" /*Purple Check Shirt*/, 16);
			num2 = 8;
			num3 = 12;
			num = 33;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_13" /*Olive Shirt*/, 16);
			num2 = 8;
			num3 = 13;
			num = 35;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_14" /*Cream Shirt*/, 16);
			num2 = 8;
			num3 = 14;
			num = 38;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_15" /*Fruity Check Shirt*/, 16);
			num2 = 8;
			num3 = 15;
			num = 32;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_0" /*White Longsleeve*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_1" /*Gray Longsleeve*/, 16);
			num2 = 11;
			num3 = 1;
			num = 59;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_2" /*Black Longsleeve*/, 16);
			num2 = 11;
			num3 = 2;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_3" /*Ten Off Yellow Longsleeve*/, 16);
			num2 = 11;
			num3 = 3;
			num = 25;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_4" /*Kingz Of Los Santos Longsleeve*/, 16);
			num2 = 11;
			num3 = 4;
			num = 29;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_5" /*Yeti Rainbow Longsleeve*/, 16);
			num2 = 11;
			num3 = 5;
			num = 27;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_6" /*Ten Off Red Longsleeve*/, 16);
			num2 = 11;
			num3 = 6;
			num = 25;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_7" /*Trey Baker Longsleeve*/, 16);
			num2 = 11;
			num3 = 7;
			num = 27;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_8" /*Stank Striped Longsleeve*/, 16);
			num2 = 11;
			num3 = 8;
			num = 28;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_9" /*Feud Olive Longsleeve*/, 16);
			num2 = 11;
			num3 = 9;
			num = 30;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_10" /*Yeti Gray Longsleeve*/, 16);
			num2 = 11;
			num3 = 10;
			num = 29;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_11" /*Yogarishima Longsleeve*/, 16);
			num2 = 11;
			num3 = 11;
			num = 27;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_12" /*Yeti Camo Longsleeve*/, 16);
			num2 = 11;
			num3 = 12;
			num = 29;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_13" /*Crevis White Longsleeve*/, 16);
			num2 = 11;
			num3 = 13;
			num = 32;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_14" /*Yeti Blue Longsleeve*/, 16);
			num2 = 11;
			num3 = 14;
			num = 30;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_15" /*Uptown Ryders Longsleeve*/, 16);
			num2 = 11;
			num3 = 15;
			num = 28;
			break;
	
		default:
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_194(int iParam0) // Position - 0x1CC22
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_0" /*Fade*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_1" /*Triple Rails*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_2" /*Side Shaded*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_3" /*Wavy Siderows*/, 16);
			num2 = 0;
			num3 = 3;
			num5 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_4" /*Snakes*/, 16);
			num2 = 0;
			num3 = 4;
			num5 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_5" /*Tramlines*/, 16);
			num2 = 0;
			num3 = 5;
			num5 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_6" /*The King Fresh*/, 16);
			num2 = 0;
			num3 = 6;
			num5 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_7" /*Star Kutz*/, 16);
			num2 = 0;
			num3 = 7;
			num5 = 3;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_8" /*Tigerized*/, 16);
			num2 = 0;
			num3 = 8;
			num5 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_9" /*Abstraction*/, 16);
			num2 = 0;
			num3 = 9;
			num5 = 3;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_10" /*Shutters*/, 16);
			num2 = 0;
			num3 = 10;
			num5 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_11" /*Berms*/, 16);
			num2 = 0;
			num3 = 11;
			num5 = 3;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_12" /*Mellowplex*/, 16);
			num2 = 0;
			num3 = 12;
			num5 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_13" /*The Feud*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_14" /*Business on Top*/, 16);
			num2 = 0;
			num3 = 14;
			num5 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_15" /*Wild Palm*/, 16);
			num2 = 0;
			num3 = 15;
			num5 = 3;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_1_0" /*Lo Fro*/, 16);
			num2 = 1;
			num3 = 0;
			num5 = 3;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_2_0" /*Blowout*/, 16);
			num2 = 2;
			num3 = 0;
			num5 = 3;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_3_0" /*Cornrows*/, 16);
			num2 = 3;
			num3 = 0;
			num5 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_4_0" /*Shape-up*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 21, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_195(int iParam0) // Position - 0x1CE9B
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_79172[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 9;
			break;
	
		default:
			func_160(num6, iParam0, 10, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_196(int iParam0, int iParam1) // Position - 0x1CFE1
{
	switch (iParam0)
	{
		case 0:
			func_213(iParam1);
			break;
	
		case 2:
			func_212(iParam1);
			break;
	
		case 3:
			func_209(iParam1);
			break;
	
		case 4:
			func_208(iParam1);
			break;
	
		case 6:
			func_207(iParam1);
			break;
	
		case 5:
			func_206(iParam1);
			break;
	
		case 8:
			func_205(iParam1);
			break;
	
		case 9:
			func_204(iParam1);
			break;
	
		case 10:
			func_203(iParam1);
			break;
	
		case 1:
			func_202(iParam1);
			break;
	
		case 7:
			func_201(iParam1);
			break;
	
		case 11:
			func_200(iParam1);
			break;
	
		case 12:
			func_199(iParam1);
			break;
	
		case 13:
			func_198(iParam1);
			break;
	
		case 14:
			func_197(iParam1);
			break;
	}

	return;
}

void func_197(int iParam0) // Position - 0x1D0D1
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H1" /*Blue Baseball Cap*/, 16);
			num2 = 1;
			num3 = 0;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H2" /*White Hockey Mask*/, 16);
			num2 = 2;
			num3 = 0;
			num = 320;
			num4 = 11;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 6;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 7;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H12" /*Black Knitted Hat*/, 16);
			num2 = 12;
			num3 = 0;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
			num2 = 14;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
			num2 = 14;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
			num2 = 15;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
			num2 = 16;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
			num2 = 16;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
			num2 = 17;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
			num2 = 18;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
			num2 = 18;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
			num2 = 19;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
			num2 = 19;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
			num2 = 20;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
			num2 = 20;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
			num2 = 20;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 1;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 2;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 3;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 4;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 5;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 28;
			num3 = 0;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E0" /*Black-Rimmed Glasses*/, 16);
			num2 = 0;
			num3 = 0;
			num = 45;
			num4 = 10;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E3" /*Copper Sports Shades*/, 16);
			num2 = 3;
			num3 = 0;
			num = 55;
			num4 = 10;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4" /*Enema Brown Glasses*/, 16);
			num2 = 4;
			num3 = 0;
			num = 58;
			num4 = 10;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_1" /*Enema Gray Glasses*/, 16);
			num2 = 4;
			num3 = 1;
			num = 56;
			num4 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_2" /*Enema Black Glasses*/, 16);
			num2 = 4;
			num3 = 2;
			num = 60;
			num4 = 10;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_3" /*Enema Tortoiseshell Glasses*/, 16);
			num2 = 4;
			num3 = 3;
			num = 65;
			num4 = 10;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_4" /*Enema Coffee Glasses*/, 16);
			num2 = 4;
			num3 = 4;
			num = 62;
			num4 = 10;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_5" /*Enema Walnut Glasses*/, 16);
			num2 = 4;
			num3 = 5;
			num = 65;
			num4 = 10;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_6" /*Enema Silver Accent Glasses*/, 16);
			num2 = 4;
			num3 = 6;
			num = 68;
			num4 = 10;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_7" /*Enema Smoke Glasses*/, 16);
			num2 = 4;
			num3 = 7;
			num = 68;
			num4 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5" /*Farshtunken Gold Aviators*/, 16);
			num2 = 5;
			num3 = 0;
			num = 65;
			num4 = 10;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_1" /*Farshtunken Purple Aviators*/, 16);
			num2 = 5;
			num3 = 1;
			num = 69;
			num4 = 10;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_2" /*Farshtunken Silver Aviators*/, 16);
			num2 = 5;
			num3 = 2;
			num = 72;
			num4 = 10;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_3" /*Farshtunken Gray Aviators*/, 16);
			num2 = 5;
			num3 = 3;
			num = 70;
			num4 = 10;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_4" /*Farshtunken Blue Aviators*/, 16);
			num2 = 5;
			num3 = 4;
			num = 74;
			num4 = 10;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_5" /*Farshtunken Tinted Aviators*/, 16);
			num2 = 5;
			num3 = 5;
			num = 78;
			num4 = 10;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_6" /*Farshtunken Steel Aviators*/, 16);
			num2 = 5;
			num3 = 6;
			num = 82;
			num4 = 10;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_7" /*Farshtunken Sepia Aviators*/, 16);
			num2 = 5;
			num3 = 7;
			num = 85;
			num4 = 10;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_8" /*Farshtunken Black Aviators*/, 16);
			num2 = 5;
			num3 = 8;
			num = 85;
			num4 = 10;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_9" /*Farshtunken Smoke Aviators*/, 16);
			num2 = 5;
			num3 = 9;
			num4 = 10;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6" /*Tung Charcoal Shades*/, 16);
			num2 = 6;
			num3 = 0;
			num = 69;
			num4 = 10;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_1" /*Tung Ash Shades*/, 16);
			num2 = 6;
			num3 = 1;
			num = 69;
			num4 = 10;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_2" /*Tung Gray Shades*/, 16);
			num2 = 6;
			num3 = 2;
			num = 69;
			num4 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_3" /*Tung Red Shades*/, 16);
			num2 = 6;
			num3 = 3;
			num = 69;
			num4 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_4" /*Tung Blue Shades*/, 16);
			num2 = 6;
			num3 = 4;
			num = 69;
			num4 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_5" /*Tung Yellow Shades*/, 16);
			num2 = 6;
			num3 = 5;
			num = 69;
			num4 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_6" /*Tung Black Shades*/, 16);
			num2 = 6;
			num3 = 6;
			num = 69;
			num4 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_7" /*Tung Rosy Shades*/, 16);
			num2 = 6;
			num3 = 7;
			num = 69;
			num4 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_8" /*Tung Hornet Shades*/, 16);
			num2 = 6;
			num3 = 8;
			num = 69;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_9" /*Tung Two-Tone Shades*/, 16);
			num2 = 6;
			num3 = 9;
			num = 69;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E7" /*Swimming Goggles*/, 16);
			num2 = 7;
			num3 = 0;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8" /*Rimmers Azure Aviators*/, 16);
			num2 = 8;
			num3 = 0;
			num = 170;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_1" /*Rimmers Smoke Aviators*/, 16);
			num2 = 8;
			num3 = 1;
			num = 175;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_2" /*Rimmers Yellow Aviators*/, 16);
			num2 = 8;
			num3 = 2;
			num = 180;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_3" /*Rimmers Topaz Aviators*/, 16);
			num2 = 8;
			num3 = 3;
			num = 185;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_4" /*Rimmers Tinted Aviators*/, 16);
			num2 = 8;
			num3 = 4;
			num = 189;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_5" /*Rimmers Steel Aviators*/, 16);
			num2 = 8;
			num3 = 5;
			num = 195;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_6" /*Rimmers Indigo Aviators*/, 16);
			num2 = 8;
			num3 = 6;
			num = 235;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_7" /*Rimmers Chocolate Aviators*/, 16);
			num2 = 8;
			num3 = 7;
			num = 245;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_8" /*Rimmers Sepia Aviators*/, 16);
			num2 = 8;
			num3 = 8;
			num = 250;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_9" /*Rimmers Slate Aviators*/, 16);
			num2 = 8;
			num3 = 9;
			num = 275;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_10" /*Rimmers Gold Aviators*/, 16);
			num2 = 8;
			num3 = 10;
			num = 280;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_11" /*Rimmers Blue Aviators*/, 16);
			num2 = 8;
			num3 = 11;
			num = 295;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9" /*Hawaiian Snow Black Shades*/, 16);
			num2 = 9;
			num3 = 0;
			num = 179;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_1" /*Hawaiian Snow Charcoal Shades*/, 16);
			num2 = 9;
			num3 = 1;
			num = 159;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_2" /*Hawaiian Snow Ash Shades*/, 16);
			num2 = 9;
			num3 = 2;
			num = 165;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_3" /*Hawaiian Snow Gray Shades*/, 16);
			num2 = 9;
			num3 = 3;
			num = 155;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_4" /*Hawaiian Snow Tan Shades*/, 16);
			num2 = 9;
			num3 = 4;
			num = 175;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_5" /*Hawaiian Snow Tortoiseshell Shades*/, 16);
			num2 = 9;
			num3 = 5;
			num = 185;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_6" /*Hawaiian Snow Walnut Shades*/, 16);
			num2 = 9;
			num3 = 6;
			num = 189;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_7" /*Hawaiian Snow Marbled Shades*/, 16);
			num2 = 9;
			num3 = 7;
			num = 225;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		default:
			func_160(num6, iParam0, 113, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_198(int iParam0) // Position - 0x1DE5B
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 10, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_199(int iParam0) // Position - 0x1DFD5
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_0" /*Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_1" /*Firefighter*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_4" /*Janitor*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_7" /*Highway Patrol*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_8" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_9" /*Bed*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_12" /*Tennis*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_14" /*Scuba Land*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_18" /*Triathlon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_19" /*Security*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_20" /*Exterminator*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_22" /*Tuxedo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_23" /*Ludendorff*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_24" /*Rappel Gear*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_26" /*Blue Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_28" /*Navy Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_29" /*Gray Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_30" /*Green Boiler Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_31" /*Prologue*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_32" /*Spec Ops*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_33" /*Denim Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_34" /*Slate Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_35" /*Leather Jacket, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_36" /*Charcoal Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_37" /*Pale Blue Shirt, Gray Pants*/, 16);
			num2 = 0;
			num3 = 0;
			num = 840;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_38" /*Jewel Heist Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_39" /*Polo Shirt, Beach Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_40" /*Polo Shirt, Suit Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_41" /*Shirt, Shorts*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_42" /*Polo Shirt, Jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_43" /*Topaz Suit*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_44" /*Pale Blue Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_45" /*Off-White Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_46" /*Olive Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_47" /*Cream Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4600;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_48" /*Navy Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_49" /*Beige Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4400;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_50" /*Smoke Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4400;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_51" /*Blue-Gray Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_52" /*Ash Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_53" /*Sand Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_54" /*Black Suit*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_55" /*Moto X*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 53, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_200(int iParam0) // Position - 0x1E54C
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_0" /*Ash T-Shirt*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_1" /*White T-Shirt*/, 16);
			num2 = 2;
			num3 = 1;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_2" /*Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 2;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_3" /*Charcoal T-Shirt*/, 16);
			num2 = 2;
			num3 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_4" /*Green T-Shirt*/, 16);
			num2 = 2;
			num3 = 4;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_5" /*Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 5;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_0" /*Charcoal Henley*/, 16);
			num2 = 3;
			num3 = 0;
			num = 390;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_1" /*Gray Henley*/, 16);
			num2 = 3;
			num3 = 1;
			num = 390;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_2" /*Black Henley*/, 16);
			num2 = 3;
			num3 = 2;
			num = 420;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_3" /*Beige Henley*/, 16);
			num2 = 3;
			num3 = 3;
			num = 420;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_4" /*Brown Henley*/, 16);
			num2 = 3;
			num3 = 4;
			num = 490;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_5" /*Navy Henley*/, 16);
			num2 = 3;
			num3 = 5;
			num = 490;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_6" /*Navy Striped Henley*/, 16);
			num2 = 3;
			num3 = 6;
			num = 540;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_7" /*Gray Striped Henley*/, 16);
			num2 = 3;
			num3 = 7;
			num = 540;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_8" /*Gray Wool Henley*/, 16);
			num2 = 3;
			num3 = 8;
			num = 550;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_9" /*Charcoal Striped Henley*/, 16);
			num2 = 3;
			num3 = 9;
			num = 540;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_0" /*Charcoal V Neck*/, 16);
			num2 = 4;
			num3 = 0;
			num = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_1" /*Beige V Neck*/, 16);
			num2 = 4;
			num3 = 1;
			num = 850;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_2" /*Black V Neck*/, 16);
			num2 = 4;
			num3 = 2;
			num = 890;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_3" /*Olive V Neck*/, 16);
			num2 = 4;
			num3 = 3;
			num = 890;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_4" /*Gray V Neck*/, 16);
			num2 = 4;
			num3 = 4;
			num = 920;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_5" /*Brown V Neck*/, 16);
			num2 = 4;
			num3 = 5;
			num = 920;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_6" /*Black Striped V Neck*/, 16);
			num2 = 4;
			num3 = 6;
			num = 950;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_7" /*Gray Diamond V Neck*/, 16);
			num2 = 4;
			num3 = 7;
			num = 980;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_8" /*Brown Striped V Neck*/, 16);
			num2 = 4;
			num3 = 8;
			num = 1050;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_9" /*Silver Diamond V Neck*/, 16);
			num2 = 4;
			num3 = 9;
			num = 1100;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_0" /*Black Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 0;
			num = 1890;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_1" /*Black Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 1;
			num = 1820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_2" /*Black Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 2;
			num = 1820;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_3" /*Black Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 3;
			num = 1850;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_4" /*Black Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 4;
			num = 1850;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_5" /*Ash Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 5;
			num = 1900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_6" /*Ash Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 6;
			num = 1920;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_7" /*Ash Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 7;
			num = 1980;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_8" /*Ash Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 8;
			num = 2100;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_9" /*Ash Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 9;
			num = 2120;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_10" /*Blue Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 10;
			num = 2000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_11" /*Blue Vest, Black Shirt*/, 16);
			num2 = 5;
			num3 = 11;
			num = 2200;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_12" /*Blue Vest, Gray Shirt*/, 16);
			num2 = 5;
			num3 = 12;
			num = 2280;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_13" /*Blue Vest, Blue Shirt*/, 16);
			num2 = 5;
			num3 = 13;
			num = 2300;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_14" /*Blue Vest, Pink Shirt*/, 16);
			num2 = 5;
			num3 = 14;
			num = 2350;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_15" /*Stone Vest, White Shirt*/, 16);
			num2 = 5;
			num3 = 15;
			num = 2280;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_06_0" /*Bare Chest*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 45, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_201(int iParam0) // Position - 0x1EA76
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 1, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_202(int iParam0) // Position - 0x1EAEA
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_0_0" /*Clean Shave*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_1_0" /*Stubbled*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_2_0" /*Long Stubbled*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_3_0" /*Full Goatee*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_4_0" /*Full Beard*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 5, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_203(int iParam0) // Position - 0x1EBBA
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 2;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 4;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 5;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 6;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 7;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 5;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 4;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 5;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 6;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 1;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 3;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 4;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 5;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 6;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 7;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_8" /*Del Perro Pier T-Shirt*/, 16);
			num2 = 10;
			num3 = 8;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_9" /*Los Santos T-Shirt*/, 16);
			num2 = 10;
			num3 = 9;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_10" /*Sharkies Bites T-Shirt*/, 16);
			num2 = 10;
			num3 = 10;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_11" /*Muscle Peach T-Shirt*/, 16);
			num2 = 10;
			num3 = 11;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_12" /*Coral Reefers T-Shirt*/, 16);
			num2 = 10;
			num3 = 12;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_13" /*SmokeBomb T-Shirt*/, 16);
			num2 = 10;
			num3 = 13;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_14" /*The Big Puffa T-Shirt*/, 16);
			num2 = 10;
			num3 = 14;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_15" /*Lob-Star T-Shirt*/, 16);
			num2 = 10;
			num3 = 15;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			break;
	
		default:
			func_160(num6, iParam0, 48, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_204(int iParam0) // Position - 0x1F092
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 0;
			num = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 1;
			num = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 2;
			num = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 3;
			num = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 4;
			num = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
			num2 = 8;
			num3 = 5;
			num = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 1;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 20, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_205(int iParam0) // Position - 0x1F2FB
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_10" /*Watch and Bracelet*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_16" /*Leather Watch*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			flag = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 24, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_206(int iParam0) // Position - 0x1F5D1
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 2;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 3;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 4;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_160(num6, iParam0, 14, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_207(int iParam0) // Position - 0x1F79A
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_0" /*Black Leather Shoes*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_1" /*Brown Leather Shoes*/, 16);
			num2 = 0;
			num3 = 1;
			num = 665;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_2" /*Charcoal Leather Shoes*/, 16);
			num2 = 0;
			num3 = 2;
			num = 620;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_3" /*Gray Leather Shoes*/, 16);
			num2 = 0;
			num3 = 3;
			num = 540;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_4" /*Sand Leather Shoes*/, 16);
			num2 = 0;
			num3 = 4;
			num = 580;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_5" /*Blue Suede Shoes*/, 16);
			num2 = 0;
			num3 = 5;
			num = 650;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_13_0" /*Dress Loafers*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_0" /*Ash Skate Shoes*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_1" /*Black Skate Shoes*/, 16);
			num2 = 15;
			num3 = 1;
			num = 64;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_2" /*White Skate Shoes*/, 16);
			num2 = 15;
			num3 = 2;
			num = 56;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_3" /*Red Skate Shoes*/, 16);
			num2 = 15;
			num3 = 3;
			num = 69;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_4" /*Plaid Skate Shoes*/, 16);
			num2 = 15;
			num3 = 4;
			num = 59;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_5" /*Striped Skate Shoes*/, 16);
			num2 = 15;
			num3 = 5;
			num = 62;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_6" /*Coffee Skate Shoes*/, 16);
			num2 = 15;
			num3 = 6;
			num = 74;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_7" /*Camo Skate Shoes*/, 16);
			num2 = 15;
			num3 = 7;
			num = 68;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_8" /*Tropical Skate Shoes*/, 16);
			num2 = 15;
			num3 = 8;
			num = 72;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_9" /*Green Skate Shoes*/, 16);
			num2 = 15;
			num3 = 9;
			num = 70;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_0" /*Chocolate Boat Shoes*/, 16);
			num2 = 16;
			num3 = 0;
			num = 48;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_1" /*Teal Boat Shoes*/, 16);
			num2 = 16;
			num3 = 1;
			num = 48;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_2" /*Black Boat Shoes*/, 16);
			num2 = 16;
			num3 = 2;
			num = 55;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_3" /*Chestnut Boat Shoes*/, 16);
			num2 = 16;
			num3 = 3;
			num = 75;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_4" /*Tan Boat Shoes*/, 16);
			num2 = 16;
			num3 = 4;
			num = 65;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_5" /*Gray Boat Shoes*/, 16);
			num2 = 16;
			num3 = 5;
			num = 68;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_6" /*Red Boat Shoes*/, 16);
			num2 = 16;
			num3 = 6;
			num = 58;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_7" /*Slate Boat Shoes*/, 16);
			num2 = 16;
			num3 = 7;
			num = 68;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_0" /*All Black Oxfords*/, 16);
			num2 = 18;
			num3 = 0;
			num = 790;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_1" /*Chocolate Oxfords*/, 16);
			num2 = 18;
			num3 = 1;
			num = 750;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_2" /*Chestnut Oxfords*/, 16);
			num2 = 18;
			num3 = 2;
			num = 860;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_3" /*Tan Oxfords*/, 16);
			num2 = 18;
			num3 = 3;
			num = 750;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_4" /*White Oxfords*/, 16);
			num2 = 18;
			num3 = 4;
			num = 790;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_5" /*Ash Oxfords*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_6" /*Gray Two-Tone Oxfords*/, 16);
			num2 = 18;
			num3 = 6;
			num = 820;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_7" /*Beige Oxfords*/, 16);
			num2 = 18;
			num3 = 7;
			num = 800;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_8" /*Topaz Oxfords*/, 16);
			num2 = 18;
			num3 = 8;
			num = 850;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_9" /*Black Oxfords*/, 16);
			num2 = 18;
			num3 = 9;
			num = 870;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_10" /*Lime Oxfords*/, 16);
			num2 = 18;
			num3 = 10;
			num = 720;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_11" /*Hawthorn Oxfords*/, 16);
			num2 = 18;
			num3 = 11;
			num = 740;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_12" /*Coffee Oxfords*/, 16);
			num2 = 18;
			num3 = 12;
			num = 800;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_13" /*Gray Oxfords*/, 16);
			num2 = 18;
			num3 = 13;
			num = 750;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_14" /*Cream Oxfords*/, 16);
			num2 = 18;
			num3 = 14;
			num = 770;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_15" /*Navy Oxfords*/, 16);
			num2 = 18;
			num3 = 15;
			num = 860;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_0" /*Black Slip-Ons*/, 16);
			num2 = 19;
			num3 = 0;
			num = 850;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_1" /*Red Slip-Ons*/, 16);
			num2 = 19;
			num3 = 1;
			num = 800;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_2" /*Brown Slip-Ons*/, 16);
			num2 = 19;
			num3 = 2;
			num = 780;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_3" /*Green Stripe Slip-Ons*/, 16);
			num2 = 19;
			num3 = 3;
			num = 890;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_4" /*Green Slip-Ons*/, 16);
			num2 = 19;
			num3 = 4;
			num = 820;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_5" /*Copper Slip-Ons*/, 16);
			num2 = 19;
			num3 = 5;
			num = 840;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 6;
			num = 870;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_7" /*Navy Slip-Ons*/, 16);
			num2 = 19;
			num3 = 7;
			num = 930;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_8" /*Blue Slip-Ons*/, 16);
			num2 = 19;
			num3 = 8;
			num = 880;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_9" /*Beige Slip-Ons*/, 16);
			num2 = 19;
			num3 = 9;
			num = 900;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_10" /*White Slip-Ons*/, 16);
			num2 = 19;
			num3 = 10;
			num = 920;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_11" /*Tan Slip-Ons*/, 16);
			num2 = 19;
			num3 = 11;
			num = 970;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_12" /*Black Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 12;
			num = 990;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_13" /*Two-Tone Slip-Ons*/, 16);
			num2 = 19;
			num3 = 13;
			num = 960;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
			num2 = 19;
			num3 = 14;
			num = 980;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_15" /*Gray Slip-Ons*/, 16);
			num2 = 19;
			num3 = 15;
			num = 950;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_0" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 0;
			num = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_1" /*Navy Wingtips*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_2" /*Coffee Wingtips*/, 16);
			num2 = 20;
			num3 = 2;
			num = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_3" /*Burgundy Wingtips*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_4" /*Blue Wingtips*/, 16);
			num2 = 20;
			num3 = 4;
			num = 125;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_5" /*Woodland Camo Wingtips*/, 16);
			num2 = 20;
			num3 = 5;
			num = 128;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_6" /*Black Wingtips*/, 16);
			num2 = 20;
			num3 = 6;
			num = 135;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_7" /*Tan Wingtips*/, 16);
			num2 = 20;
			num3 = 7;
			num = 130;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_8" /*Purple Wingtips*/, 16);
			num2 = 20;
			num3 = 8;
			num = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_9" /*Brown Wingtips*/, 16);
			num2 = 20;
			num3 = 9;
			num = 110;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_10" /*Chocolate Wingtips*/, 16);
			num2 = 20;
			num3 = 10;
			num = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_11" /*Green Wingtips*/, 16);
			num2 = 20;
			num3 = 11;
			num = 150;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_12" /*Ash Wingtips*/, 16);
			num2 = 20;
			num3 = 12;
			num = 125;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_13" /*Olive Wingtips*/, 16);
			num2 = 20;
			num3 = 13;
			num = 120;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_14" /*Two-Tone Wingtips*/, 16);
			num2 = 20;
			num3 = 14;
			num = 130;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_15" /*Yellow Wingtips*/, 16);
			num2 = 20;
			num3 = 15;
			num = 110;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_0" /*Black Leather Loafers*/, 16);
			num2 = 21;
			num3 = 0;
			num = 720;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_1" /*Gray Leather Loafers*/, 16);
			num2 = 21;
			num3 = 1;
			num = 680;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_2" /*Cream Leather Loafers*/, 16);
			num2 = 21;
			num3 = 2;
			num = 650;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_3" /*Brown Leather Loafers*/, 16);
			num2 = 21;
			num3 = 3;
			num = 670;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_4" /*White Leather Loafers*/, 16);
			num2 = 21;
			num3 = 4;
			num = 700;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_5" /*Russet Leather Loafers*/, 16);
			num2 = 21;
			num3 = 5;
			num = 680;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_6" /*White Snakeskin Loafers*/, 16);
			num2 = 21;
			num3 = 6;
			num = 720;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_7" /*Rattlesnake Loafers*/, 16);
			num2 = 21;
			num3 = 7;
			num = 740;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_8" /*Brown Snakeskin Loafers*/, 16);
			num2 = 21;
			num3 = 8;
			num = 760;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_9" /*Zebra Two-Tone Loafers*/, 16);
			num2 = 21;
			num3 = 9;
			num = 780;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_10" /*Pale Reptile Loafers*/, 16);
			num2 = 21;
			num3 = 10;
			num = 750;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_11" /*Tan Alligator Loafers*/, 16);
			num2 = 21;
			num3 = 11;
			num = 700;
			break;
	
		default:
			func_160(num6, iParam0, 99, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_208(int iParam0) // Position - 0x202F0
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_2" /*Charcoal Pants*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_3" /*Slate Pants*/, 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_4" /*Topaz Pants*/, 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_5" /*Pale Blue Pants*/, 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_6" /*Cream Pants*/, 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_7" /*Olive Pants*/, 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_8" /*Off-White Pants*/, 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_9" /*Navy Pants*/, 16);
			num2 = 0;
			num3 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_10" /*Beige Pants*/, 16);
			num2 = 0;
			num3 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_11" /*Smoke Pants*/, 16);
			num2 = 0;
			num3 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_12" /*Blue-Gray Pants*/, 16);
			num2 = 0;
			num3 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_13" /*Ash Pants*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_14" /*Sand Pants*/, 16);
			num2 = 0;
			num3 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_15" /*Black Pants*/, 16);
			num2 = 0;
			num3 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_0" /*Off-White Chinos*/, 16);
			num2 = 7;
			num3 = 0;
			num = 115;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_1" /*Camel Chinos*/, 16);
			num2 = 7;
			num3 = 1;
			num = 115;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_2" /*Ash Chinos*/, 16);
			num2 = 7;
			num3 = 2;
			num = 128;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_3" /*Olive Chinos*/, 16);
			num2 = 7;
			num3 = 3;
			num = 118;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_4" /*Brown Chinos*/, 16);
			num2 = 7;
			num3 = 4;
			num = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_5" /*Black Chinos*/, 16);
			num2 = 7;
			num3 = 5;
			num = 128;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_6" /*Charcoal Chinos*/, 16);
			num2 = 7;
			num3 = 6;
			num = 128;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_7" /*White Chinos*/, 16);
			num2 = 7;
			num3 = 7;
			num = 125;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_0" /*Cream Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 0;
			num = 68;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_1" /*Khaki Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 1;
			num = 68;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_2" /*Camo Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 2;
			num = 68;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_3" /*Gray Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 3;
			num = 68;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_4" /*White Cargo Shorts*/, 16);
			num2 = 13;
			num3 = 4;
			num = 68;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_0" /*Gray Golf Pants*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_1" /*Cream Golf Pants*/, 16);
			num2 = 15;
			num3 = 1;
			num = 550;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_2" /*Brown Golf Pants*/, 16);
			num2 = 15;
			num3 = 2;
			num = 650;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_3" /*Tartan Golf Pants*/, 16);
			num2 = 15;
			num3 = 3;
			num = 875;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_4" /*Charcoal Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 4;
			num = 820;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_5" /*Green Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 5;
			num = 720;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_6" /*Brown Plaid Golf Pants*/, 16);
			num2 = 15;
			num3 = 6;
			num = 750;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_7" /*Slate Golf Pants*/, 16);
			num2 = 15;
			num3 = 7;
			num = 850;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_0" /*Beige Shorts*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_1" /*Yellow Shorts*/, 16);
			num2 = 16;
			num3 = 1;
			num = 48;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_2" /*Blue Shorts*/, 16);
			num2 = 16;
			num3 = 2;
			num = 48;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_3" /*Brown Leafy Shorts*/, 16);
			num2 = 16;
			num3 = 3;
			num = 38;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_4" /*Tropical Shorts*/, 16);
			num2 = 16;
			num3 = 4;
			num = 38;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_5" /*Aqua Vintage Shorts*/, 16);
			num2 = 16;
			num3 = 5;
			num = 42;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_6" /*Bright Two-Tone Shorts*/, 16);
			num2 = 16;
			num3 = 6;
			num = 58;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_7" /*Red Floral Shorts*/, 16);
			num2 = 16;
			num3 = 7;
			num = 46;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_8" /*Navy Floral Shorts*/, 16);
			num2 = 16;
			num3 = 8;
			num = 46;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_9" /*Blue Floral Shorts*/, 16);
			num2 = 16;
			num3 = 9;
			num = 46;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_10" /*Orange Shorts*/, 16);
			num2 = 16;
			num3 = 10;
			num = 68;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_11" /*White Striped Shorts*/, 16);
			num2 = 16;
			num3 = 11;
			num = 58;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_12" /*Charcoal Shorts*/, 16);
			num2 = 16;
			num3 = 12;
			num = 50;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_13" /*Gray Shorts*/, 16);
			num2 = 16;
			num3 = 13;
			num = 68;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_14" /*Candy Surf Shorts*/, 16);
			num2 = 16;
			num3 = 14;
			num = 68;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_15" /*Undersea Shorts*/, 16);
			num2 = 16;
			num3 = 15;
			num = 42;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_0" /*White Striped Boxers*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_1" /*Blue Boxers*/, 16);
			num2 = 18;
			num3 = 1;
			num = 250;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_2" /*Ash Boxers*/, 16);
			num2 = 18;
			num3 = 2;
			num = 250;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_3" /*Blue Striped Boxers*/, 16);
			num2 = 18;
			num3 = 3;
			num = 290;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_4" /*White Boxers*/, 16);
			num2 = 18;
			num3 = 4;
			num = 270;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_5" /*Charcoal Boxers*/, 16);
			num2 = 18;
			num3 = 5;
			num = 270;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_6" /*Red Heart Boxers*/, 16);
			num2 = 18;
			num3 = 6;
			num = 15;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_7" /*Blue Heart Boxers*/, 16);
			num2 = 18;
			num3 = 7;
			num = 12;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_0" /*Blue Casual Jeans*/, 16);
			num2 = 20;
			num3 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_1" /*Black Casual Jeans*/, 16);
			num2 = 20;
			num3 = 1;
			num = 118;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_2" /*Faded Casual Jeans*/, 16);
			num2 = 20;
			num3 = 2;
			num = 110;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_0" /*Tan Pants*/, 16);
			num2 = 21;
			num3 = 0;
			num = 88;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_1" /*Charcoal Pants*/, 16);
			num2 = 21;
			num3 = 1;
			num = 95;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_2" /*Brown Pants*/, 16);
			num2 = 21;
			num3 = 2;
			num = 95;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_3" /*Ash Pants*/, 16);
			num2 = 21;
			num3 = 3;
			num = 98;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_22_0" /*Smart Jeans*/, 16);
			num2 = 22;
			num3 = 0;
			num = 140;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_0" /*White Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 0;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_1" /*Lobon Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 1;
			num = 150;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_2" /*Plaid Tennis Shorts*/, 16);
			num2 = 23;
			num3 = 2;
			num = 130;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_27_0" /*Beige Shorts, Bare Feet*/, 16);
			num2 = 27;
			num3 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_0" /*Pale Blue Bermudas*/, 16);
			num2 = 28;
			num3 = 0;
			num = 45;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_1" /*Beige Bermudas*/, 16);
			num2 = 28;
			num3 = 1;
			num = 48;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_2" /*Cream Bermudas*/, 16);
			num2 = 28;
			num3 = 2;
			num = 48;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_3" /*Olive Bermudas*/, 16);
			num2 = 28;
			num3 = 3;
			num = 52;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_4" /*Blue Bermudas*/, 16);
			num2 = 28;
			num3 = 4;
			num = 52;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_5" /*Off-White Bermudas*/, 16);
			num2 = 28;
			num3 = 5;
			num = 55;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_6" /*Gray Bermudas*/, 16);
			num2 = 28;
			num3 = 6;
			num = 55;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_7" /*Charcoal Bermudas*/, 16);
			num2 = 28;
			num3 = 7;
			num = 55;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_8" /*Pink Bermudas*/, 16);
			num2 = 28;
			num3 = 8;
			num = 58;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_9" /*Beige Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 9;
			num = 58;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_10" /*Pastel Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 10;
			num = 60;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_11" /*Orange Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 11;
			num = 60;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_12" /*Gray Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 12;
			num = 62;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_13" /*Blue Striped Bermudas*/, 16);
			num2 = 28;
			num3 = 13;
			num = 62;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_14" /*Murky Plaid Bermudas*/, 16);
			num2 = 28;
			num3 = 14;
			num = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_15" /*Pastel Check Bermudas*/, 16);
			num2 = 28;
			num3 = 15;
			num = 65;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 29;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 113, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_209(int iParam0) // Position - 0x20F3A
{
	if (iParam0 < 60)
		func_211(iParam0);
	else
		func_210(iParam0);

	if (Global_79172[0 /*14*/].f_2 == -1)
		func_160(3, iParam0, 181, -1);

	return;
}

void func_210(int iParam0) // Position - 0x20F6F
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 1;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 2;
			flag = true;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 3;
			flag = true;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 4;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 5;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_0" /*Rearwall Black Gilet*/, 16);
			num2 = 14;
			num3 = 0;
			num = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_1" /*Fruntalot Red Gilet*/, 16);
			num2 = 14;
			num3 = 1;
			num = 120;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_2" /*Yeti Blue Gilet*/, 16);
			num2 = 14;
			num3 = 2;
			num = 120;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_3" /*Rearwall Brown Gilet*/, 16);
			num2 = 14;
			num3 = 3;
			num = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_4" /*Rearwall Orange Gilet*/, 16);
			num2 = 14;
			num3 = 4;
			num = 120;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_5" /*Rearwall Green Gilet*/, 16);
			num2 = 14;
			num3 = 5;
			num = 120;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_0" /*Purple Golf Shirt*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_1" /*Orange Golf Shirt*/, 16);
			num2 = 16;
			num3 = 1;
			num = 20;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_2" /*Burgundy Golf Shirt*/, 16);
			num2 = 16;
			num3 = 2;
			num = 24;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_3" /*Yellow Golf Shirt*/, 16);
			num2 = 16;
			num3 = 3;
			num = 22;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_4" /*Blue Golf Shirt*/, 16);
			num2 = 16;
			num3 = 4;
			num = 25;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_5" /*Mint Golf Shirt*/, 16);
			num2 = 16;
			num3 = 5;
			num = 25;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_6" /*Brown Golf Shirt*/, 16);
			num2 = 16;
			num3 = 6;
			num = 22;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_7" /*Crimson Golf Shirt*/, 16);
			num2 = 16;
			num3 = 7;
			num = 27;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_0" /*Blue-Gray Polo Shirt*/, 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_1" /*Olive Polo Shirt*/, 16);
			num2 = 17;
			num3 = 1;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_2" /*Red Polo Shirt*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_3" /*Black Polo Shirt*/, 16);
			num2 = 17;
			num3 = 3;
			num = 48;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_4" /*White Polo Shirt*/, 16);
			num2 = 17;
			num3 = 4;
			num = 40;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_5" /*Blue Polo Shirt*/, 16);
			num2 = 17;
			num3 = 5;
			num = 45;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_0" /*Off-White Tank Top*/, 16);
			num2 = 19;
			num3 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_1" /*White Tank Top*/, 16);
			num2 = 19;
			num3 = 1;
			num = 190;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_2" /*Ash Tank Top*/, 16);
			num2 = 19;
			num3 = 2;
			num = 190;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_3" /*Gray Tank Top*/, 16);
			num2 = 19;
			num3 = 3;
			num = 190;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_4" /*Black Tank Top*/, 16);
			num2 = 19;
			num3 = 4;
			num = 210;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_0" /*Blue Denim Shirt*/, 16);
			num2 = 20;
			num3 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_1" /*Deep Black Shirt*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_2" /*Russet Shirt*/, 16);
			num2 = 20;
			num3 = 2;
			num = 55;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_3" /*Green Cord Shirt*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_4" /*Gray Shirt*/, 16);
			num2 = 20;
			num3 = 4;
			num = 99;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_5" /*Fresh Check Shirt*/, 16);
			num2 = 20;
			num3 = 5;
			num = 49;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_6" /*Southern Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 6;
			num = 120;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_7" /*Sunrise Yellow Shirt*/, 16);
			num2 = 20;
			num3 = 7;
			num = 45;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_8" /*White Shirt*/, 16);
			num2 = 20;
			num3 = 8;
			num = 115;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_9" /*Stone Shirt*/, 16);
			num2 = 20;
			num3 = 9;
			num = 105;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_10" /*Earth Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 10;
			num = 90;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_11" /*Green Check Shirt*/, 16);
			num2 = 20;
			num3 = 11;
			num = 95;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_12" /*Country Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 12;
			num = 39;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_13" /*Orange Tight Check Shirt*/, 16);
			num2 = 20;
			num3 = 13;
			num = 95;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_14" /*Bright Blue Plaid Shirt*/, 16);
			num2 = 20;
			num3 = 14;
			num = 35;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_15" /*Blue Check Shirt*/, 16);
			num2 = 20;
			num3 = 15;
			num = 95;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_0" /*Gray Hoodie*/, 16);
			num2 = 21;
			num3 = 0;
			num = 88;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_1" /*Ammu-Nation Camo Hoodie*/, 16);
			num2 = 21;
			num3 = 1;
			num = 60;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_2" /*LSGC Gray Hoodie*/, 16);
			num2 = 21;
			num3 = 2;
			num = 70;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_3" /*LSGC Urban Hoodie*/, 16);
			num2 = 21;
			num3 = 3;
			num = 80;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_4" /*LSGC Forest Hoodie*/, 16);
			num2 = 21;
			num3 = 4;
			num = 90;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_5" /*Ammu-Nation A Hoodie*/, 16);
			num2 = 21;
			num3 = 5;
			num = 80;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_6" /*Blauser Hoodie*/, 16);
			num2 = 21;
			num3 = 6;
			num = 70;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_7" /*Penetrators Orange Hoodie*/, 16);
			num2 = 21;
			num3 = 7;
			num = 95;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_8" /*Crevis Fluorescent Hoodie*/, 16);
			num2 = 21;
			num3 = 8;
			num = 105;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_9" /*Blue Hoodie*/, 16);
			num2 = 21;
			num3 = 9;
			num = 95;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_10" /*Green Hoodie*/, 16);
			num2 = 21;
			num3 = 10;
			num = 110;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_11" /*LS Jardineros Hoodie*/, 16);
			num2 = 21;
			num3 = 11;
			num = 98;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_12" /*Ash 18 Hoodie*/, 16);
			num2 = 21;
			num3 = 12;
			num = 88;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_13" /*Red Mist XI Hoodie*/, 16);
			num2 = 21;
			num3 = 13;
			num = 98;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_14" /*Eris Charcoal Hoodie*/, 16);
			num2 = 21;
			num3 = 14;
			num = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_15" /*OG Hoodie*/, 16);
			num2 = 21;
			num3 = 15;
			num = 98;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_0" /*Distressed Leather Jacket*/, 16);
			num2 = 22;
			num3 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_1" /*Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 1;
			num = 4950;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_2" /*Chestnut Leather Jacket*/, 16);
			num2 = 22;
			num3 = 2;
			num = 4195;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_3" /*Oxblood Leather Jacket*/, 16);
			num2 = 22;
			num3 = 3;
			num = 3195;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_4" /*Vintage Black Leather Jacket*/, 16);
			num2 = 22;
			num3 = 4;
			num = 2950;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_5" /*Brown Leather Jacket*/, 16);
			num2 = 22;
			num3 = 5;
			num = 3950;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_0" /*Silver Sports Coat*/, 16);
			num2 = 23;
			num3 = 0;
			num = 3200;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_1" /*Gray-Green Sports Coat*/, 16);
			num2 = 23;
			num3 = 1;
			num = 3200;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_2" /*Slate Sports Coat*/, 16);
			num2 = 23;
			num3 = 2;
			num = 3200;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_3" /*Gray Sports Coat*/, 16);
			num2 = 23;
			num3 = 3;
			num = 3200;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_4" /*Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 4;
			num = 3200;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_5" /*Pale Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 5;
			num = 3200;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_6" /*White Sports Coat*/, 16);
			num2 = 23;
			num3 = 6;
			num = 3200;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_7" /*Warm Gray Sports Coat*/, 16);
			num2 = 23;
			num3 = 7;
			num = 3200;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_8" /*Cream Sports Coat*/, 16);
			num2 = 23;
			num3 = 8;
			num = 3200;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_9" /*Midnight Blue Sports Coat*/, 16);
			num2 = 23;
			num3 = 9;
			num = 3200;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_10" /*Off-White Sports Coat*/, 16);
			num2 = 23;
			num3 = 10;
			num = 3200;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_11" /*Charcoal Wool Sports Coat*/, 16);
			num2 = 23;
			num3 = 11;
			num = 3200;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_12" /*Charcoal Sports Coat*/, 16);
			num2 = 23;
			num3 = 12;
			num = 3200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_13" /*Ash Plaid Sports Coat*/, 16);
			num2 = 23;
			num3 = 13;
			num = 3200;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_14" /*Beige Sports Coat*/, 16);
			num2 = 23;
			num3 = 14;
			num = 3200;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_15" /*Brown Sports Coat*/, 16);
			num2 = 23;
			num3 = 15;
			num = 3200;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_0" /*Charcoal Sweater*/, 16);
			num2 = 24;
			num3 = 0;
			num = 1350;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_1" /*Gray Sweater*/, 16);
			num2 = 24;
			num3 = 1;
			num = 1400;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_2" /*Beige Sweater*/, 16);
			num2 = 24;
			num3 = 2;
			num = 1200;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_3" /*Red Sweater*/, 16);
			num2 = 24;
			num3 = 3;
			num = 1250;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_4" /*Pale Blue Sweater*/, 16);
			num2 = 24;
			num3 = 4;
			num = 1350;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_5" /*Pale Amethyst Sweater*/, 16);
			num2 = 24;
			num3 = 5;
			num = 1300;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_6" /*Blue Sweater*/, 16);
			num2 = 24;
			num3 = 6;
			num = 1380;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_7" /*Pale Jade Sweater*/, 16);
			num2 = 24;
			num3 = 7;
			num = 1340;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_8" /*Orange Sweater*/, 16);
			num2 = 24;
			num3 = 8;
			num = 1380;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_9" /*Lemon Sweater*/, 16);
			num2 = 24;
			num3 = 9;
			num = 1250;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_0" /*Pale Blue Shirt*/, 16);
			num2 = 25;
			num3 = 0;
			num = 840;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_1" /*Pink Shirt*/, 16);
			num2 = 25;
			num3 = 1;
			num = 840;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_2" /*White Shirt*/, 16);
			num2 = 25;
			num3 = 2;
			num = 840;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_3" /*Gray Shirt*/, 16);
			num2 = 25;
			num3 = 3;
			num = 840;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_4" /*Charcoal Shirt*/, 16);
			num2 = 25;
			num3 = 4;
			num = 840;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_5" /*Blue Shirt*/, 16);
			num2 = 25;
			num3 = 5;
			num = 840;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_6" /*Topaz Shirt*/, 16);
			num2 = 25;
			num3 = 6;
			num = 840;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_7" /*Black Shirt*/, 16);
			num2 = 25;
			num3 = 7;
			num = 840;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_26_0" /*Bare Chested*/, 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			flag = true;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_0" /*Eris White Sweater Vest*/, 16);
			num2 = 28;
			num3 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_1" /*Lobon Sweater Vest*/, 16);
			num2 = 28;
			num3 = 1;
			num = 130;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_2" /*Eris Blue Sweater Vest*/, 16);
			num2 = 28;
			num3 = 2;
			num = 110;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_29_0", 16);
			num2 = 29;
			num3 = 0;
			flag = true;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_0" /*Gray Jacket*/, 16);
			num2 = 30;
			num3 = 0;
			num = 290;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_1" /*Black Jacket*/, 16);
			num2 = 30;
			num3 = 1;
			num = 320;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_0" /*Red Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 0;
			num = 59;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_1" /*Blue Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 1;
			num = 55;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_2" /*Black Winter Shirt*/, 16);
			num2 = 31;
			num3 = 2;
			num = 59;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_3" /*Brown Check Winter Shirt*/, 16);
			num2 = 31;
			num3 = 3;
			num = 49;
			break;
	
		default:
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_211(int iParam0) // Position - 0x21D0F
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_2" /*Charcoal Jacket*/, 16);
			num2 = 0;
			num3 = 2;
			num = 3500;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_3" /*Slate Jacket*/, 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_4" /*Topaz Jacket*/, 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_5" /*Pale Blue Jacket*/, 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_6" /*Cream Jacket*/, 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_7" /*Olive Jacket*/, 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_8" /*Off-White Jacket*/, 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_9" /*Navy Jacket*/, 16);
			num2 = 0;
			num3 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_10" /*Beige Jacket*/, 16);
			num2 = 0;
			num3 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_11" /*Smoke Jacket*/, 16);
			num2 = 0;
			num3 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_12" /*Blue-Gray Jacket*/, 16);
			num2 = 0;
			num3 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_13" /*Ash Jacket*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_14" /*Sand Jacket*/, 16);
			num2 = 0;
			num3 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_15" /*Black Jacket*/, 16);
			num2 = 0;
			num3 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			num = 20;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 1;
			num = 18;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 2;
			num = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 3;
			num = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_4" /*Suburban Yellow T-Shirt*/, 16);
			num2 = 2;
			num3 = 4;
			num = 19;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_5" /*Rearwall Slate T-Shirt*/, 16);
			num2 = 2;
			num3 = 5;
			num = 20;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_6" /*Rearwall Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 6;
			num = 22;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_7" /*Rearwall Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 7;
			num = 18;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_8" /*Suburban Navy T-Shirt*/, 16);
			num2 = 2;
			num3 = 8;
			num = 39;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_9" /*Suburban Russet T-Shirt*/, 16);
			num2 = 2;
			num3 = 9;
			num = 32;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_10" /*Suburban Orange T-Shirt*/, 16);
			num2 = 2;
			num3 = 10;
			num = 35;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_11" /*Suburban Gray T-Shirt*/, 16);
			num2 = 2;
			num3 = 11;
			num = 35;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_12" /*White T-Shirt*/, 16);
			num2 = 2;
			num3 = 12;
			num = 210;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_13" /*Forest Green T-Shirt*/, 16);
			num2 = 2;
			num3 = 13;
			num = 250;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_14" /*Pale Blue T-Shirt*/, 16);
			num2 = 2;
			num3 = 14;
			num = 290;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_15" /*Ash T-Shirt*/, 16);
			num2 = 2;
			num3 = 15;
			num = 310;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_0" /*Brown Shooting Vest*/, 16);
			num2 = 7;
			num3 = 0;
			num = 150;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_1" /*Woodland Shooting Vest*/, 16);
			num2 = 7;
			num3 = 1;
			num = 160;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_2" /*Taupe Shooting Vest*/, 16);
			num2 = 7;
			num3 = 2;
			num = 150;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_3" /*Brown Woven Shooting Vest*/, 16);
			num2 = 7;
			num3 = 3;
			num = 150;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_4" /*Field Shooting Vest*/, 16);
			num2 = 7;
			num3 = 4;
			num = 160;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_5" /*Forest Shooting Vest*/, 16);
			num2 = 7;
			num3 = 5;
			num = 160;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_0" /*Blue-Gray Shirt*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_1" /*White Shirt*/, 16);
			num2 = 8;
			num3 = 1;
			num = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_2" /*Camel Shirt*/, 16);
			num2 = 8;
			num3 = 2;
			num = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_3" /*Black Shirt*/, 16);
			num2 = 8;
			num3 = 3;
			num = 55;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_4" /*Citrus Hawaiian Shirt*/, 16);
			num2 = 8;
			num3 = 4;
			num = 55;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_5" /*Orange Grove Shirt*/, 16);
			num2 = 8;
			num3 = 5;
			num = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_6" /*Parrot Print Shirt*/, 16);
			num2 = 8;
			num3 = 6;
			num = 58;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_7" /*Blue Geometric Shirt*/, 16);
			num2 = 8;
			num3 = 7;
			num = 62;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_8" /*Gray Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 8;
			num = 65;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_9" /*Peach Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 9;
			num = 65;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_10" /*Tropical Shirt*/, 16);
			num2 = 8;
			num3 = 10;
			num = 68;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_11" /*Navy Floral Shirt*/, 16);
			num2 = 8;
			num3 = 11;
			num = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_12" /*Lime Plaid Shirt*/, 16);
			num2 = 8;
			num3 = 12;
			num = 55;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_13" /*Brown Patterned Shirt*/, 16);
			num2 = 8;
			num3 = 13;
			num = 62;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_14" /*Vintage Hawaiian Shirt*/, 16);
			num2 = 8;
			num3 = 14;
			num = 58;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_15" /*Blue Plaid Shirt*/, 16);
			num2 = 8;
			num3 = 15;
			num = 58;
			break;
	
		default:
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_212(int iParam0) // Position - 0x2239B
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_0_0" /*Lexington*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_1_0" /*The Wood*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_2_0" /*Clippered Cut*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_3_0" /*Grown Out*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_4_0" /*Slicker*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		default:
			func_160(num6, iParam0, 6, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_213(int iParam0) // Position - 0x22482
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_79172[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		default:
			func_160(num6, iParam0, 7, -1);
			return;
	}

	func_154(&Global_79172[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_214() // Position - 0x22580
{
	Global_79172[0 /*14*/].f_1 = -1;
	Global_79172[0 /*14*/].f_2 = -1;
	Global_79172[0 /*14*/].f_5 = -1;
	Global_79172[0 /*14*/].f_3 = -1;
	Global_79172[0 /*14*/].f_4 = -1;
	Global_79172[0 /*14*/].f_7 = 0;
	Global_79172[0 /*14*/].f_6 = 0;
	Global_79172[0 /*14*/].f_13 = -1;
	Global_79172[0 /*14*/].f_12 = 0;
	Global_79172[0 /*14*/] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_79172[0 /*14*/].f_8), "NO_LABEL", 16);
	return;
}

BOOL func_215(Ped pedParam0, ePedComponentType epctParam1, ePedComponentType epctParam2) // Position - 0x225F9
{
	Hash entityModel;
	ePedComponentType type;
	int i;
	ePedComponentType j;
	int k;
	var unk;
	var unk2;
	int unk3;
	var unk4;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	Global_79172[1 /*14*/] = { func_151(entityModel, epctParam1, epctParam2, -1) };

	if (!IS_BIT_SET(Global_79172[1 /*14*/].f_6, 0))
		return false;

	if (epctParam1 == 12)
	{
		unk = { func_147(entityModel, epctParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99 && i != 12 && i != 14)
			{
				if (!func_215(pedParam0, i, unk[i]))
				{
					if (i == 13)
					{
						unk18 = { func_144(entityModel, unk[i]) };
					
						for (j = 0; j <= 8; j = j + 1)
						{
							if (!func_215(pedParam0, 14, unk18[j]))
							{
								for (k = 0; k <= 19; k = k + 1)
								{
									Global_79172[2 /*14*/] = { func_151(entityModel, 14, k, -1) };
								
									if (Global_79172[2 /*14*/].f_12 == j)
										if (func_215(pedParam0, 14, k))
											if (!func_105(entityModel, epctParam2, 14, k, &unk, &Global_79172[2 /*14*/]))
												return false;
								}
							}
						}
					}
					else
					{
						type = func_131(pedParam0, i);
						Global_79172[2 /*14*/] = { func_151(entityModel, i, type, -1) };
					
						if (!func_105(entityModel, epctParam2, i, type, &unk, &Global_79172[2 /*14*/]))
							return false;
					}
				}
			}
		}
	
		return true;
	}
	else if (epctParam1 == 13)
	{
		unk28 = { func_144(entityModel, epctParam2) };
	
		for (l = 0; l <= 8; l = l + 1)
		{
			if (!func_215(pedParam0, 14, unk28[l]))
				return false;
		}
	
		return true;
	}
	else if (epctParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(pedParam0, Global_79172[1 /*14*/].f_12, 1) == Global_79172[1 /*14*/].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_79172[1 /*14*/].f_12) == Global_79172[1 /*14*/].f_4 || Global_79172[1 /*14*/].f_3 == -1)
			return true;
	}
	else if (Global_79172[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_143(epctParam1)) && Global_79172[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_143(epctParam1)))
	{
		return true;
	}

	return false;
}

void func_216(const char* sParam0, int iParam1) // Position - 0x22852
{
	STATS::STAT_SET_GXT_LABEL(joaat("SP_LAST_MISSION_NAME"), sParam0, true);

	if (IS_BIT_SET(iParam1, 0))
		STATS::STAT_SET_GXT_LABEL(joaat("SP0_LAST_MISSION_NAME"), sParam0, true);

	if (IS_BIT_SET(iParam1, 1))
		STATS::STAT_SET_GXT_LABEL(joaat("SP1_LAST_MISSION_NAME"), sParam0, true);

	if (IS_BIT_SET(iParam1, 2))
		STATS::STAT_SET_GXT_LABEL(joaat("SP2_LAST_MISSION_NAME"), sParam0, true);

	return;
}

int func_217() // Position - 0x228A3
{
	func_30();

	switch (Global_113969.f_2366.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

struct<2> func_218(int iParam0) // Position - 0x228E9
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_219(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_219(int iParam0) // Position - 0x22921
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

void func_220(int iParam0, BOOL bParam1) // Position - 0x22D6E
{
	Global_79658 = bParam1;

	if (Global_64160)
		return;

	if (Global_64187)
	{
		Global_64187 = false;
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_64160)
		{
		}
	
		Global_64186 = iParam0;
		Global_64160 = true;
		Global_64171 = true;
	}

	return;
}

void func_221(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x22DB8
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
	}

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	MISC::SET_TIME_SCALE(1f);
	func_234();
	func_233(1, 1);
	func_230();
	func_228();
	func_227(30000);

	if (iParam1 == 1)
		func_222(iParam0, bParam2, bParam3);

	HUD::SET_MISSION_NAME(false, 0);
	return;
}

void func_222(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x22E55
{
	var unk;
	var unk2;

	if (iParam0 != -1)
	{
		func_224(iParam0, &unk);
		TEXT_LABEL_COPY(&unk33, { func_219(iParam0) }, 4);
		STATS::PLAYSTATS_MISSION_CHECKPOINT(&unk33, 0, Global_101570, 0);
		func_223(&unk33, unk.f_3, Global_101570, bParam1, bParam2);
	}

	return;
}

void func_223(const char* sParam0, Any anParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22E94
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98583))
		return;

	if (MISC::COMPARE_STRINGS(sParam0, &Global_98583, false, -1) != 0)
		return;

	STATS::PLAYSTATS_MISSION_OVER(sParam0, anParam1, iParam2, bParam3, bParam4, Global_95690);
	TEXT_LABEL_ASSIGN_STRING(&Global_98583, "", 64);
	return;
}

void func_224(int iParam0, var uParam1) // Position - 0x22ED9
{
	switch (iParam0)
	{
		case 0:
			func_225(uParam1, "Abigail1", func_218(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 1:
			func_225(uParam1, "Abigail2", func_218(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 2:
			func_225(uParam1, "Barry1", func_218(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 3:
			func_225(uParam1, "Barry2", func_218(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_226(iParam0), 1, 1);
			break;
	
		case 4:
			func_225(uParam1, "Barry3", func_218(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 5:
			func_225(uParam1, "Barry3A", func_218(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 6:
			func_225(uParam1, "Barry3C", func_218(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 7:
			func_225(uParam1, "Barry4", func_218(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_226(iParam0), 0, 0);
			break;
	
		case 8:
			func_225(uParam1, "Dreyfuss1", func_218(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 9:
			func_225(uParam1, "Epsilon1", func_218(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 10:
			func_225(uParam1, "Epsilon2", func_218(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 11:
			func_225(uParam1, "Epsilon3", func_218(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 12:
			func_225(uParam1, "Epsilon4", func_218(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 13:
			func_225(uParam1, "Epsilon5", func_218(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 14:
			func_225(uParam1, "Epsilon6", func_218(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 15:
			func_225(uParam1, "Epsilon7", func_218(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 16:
			func_225(uParam1, "Epsilon8", func_218(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 17:
			func_225(uParam1, "Extreme1", func_218(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 18:
			func_225(uParam1, "Extreme2", func_218(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 19:
			func_225(uParam1, "Extreme3", func_218(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 20:
			func_225(uParam1, "Extreme4", func_218(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 21:
			func_225(uParam1, "Fanatic1", func_218(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_226(iParam0), 1, 0);
			break;
	
		case 22:
			func_225(uParam1, "Fanatic2", func_218(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_226(iParam0), 1, 0);
			break;
	
		case 23:
			func_225(uParam1, "Fanatic3", func_218(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_226(iParam0), 0, 1);
			break;
	
		case 24:
			func_225(uParam1, "Hao1", func_218(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_226(iParam0), 0, 1);
			break;
	
		case 25:
			func_225(uParam1, "Hunting1", func_218(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 26:
			func_225(uParam1, "Hunting2", func_218(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 27:
			func_225(uParam1, "Josh1", func_218(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 28:
			func_225(uParam1, "Josh2", func_218(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_226(iParam0), 1, 1);
			break;
	
		case 29:
			func_225(uParam1, "Josh3", func_218(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_226(iParam0), 1, 1);
			break;
	
		case 30:
			func_225(uParam1, "Josh4", func_218(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 31:
			func_225(uParam1, "Maude1", func_218(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 32:
			func_225(uParam1, "Minute1", func_218(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 33:
			func_225(uParam1, "Minute2", func_218(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 34:
			func_225(uParam1, "Minute3", func_218(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 35:
			func_225(uParam1, "MrsPhilips1", func_218(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 36:
			func_225(uParam1, "MrsPhilips2", func_218(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 37:
			func_225(uParam1, "Nigel1", func_218(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 38:
			func_225(uParam1, "Nigel1A", func_218(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_226(iParam0), 1, 1);
			break;
	
		case 39:
			func_225(uParam1, "Nigel1B", func_218(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_226(iParam0), 1, 1);
			break;
	
		case 40:
			func_225(uParam1, "Nigel1C", func_218(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_226(iParam0), 1, 1);
			break;
	
		case 41:
			func_225(uParam1, "Nigel1D", func_218(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_226(iParam0), 1, 1);
			break;
	
		case 42:
			func_225(uParam1, "Nigel2", func_218(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_226(iParam0), 1, 1);
			break;
	
		case 43:
			func_225(uParam1, "Nigel3", func_218(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_226(iParam0), 1, 1);
			break;
	
		case 44:
			func_225(uParam1, "Omega1", func_218(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 45:
			func_225(uParam1, "Omega2", func_218(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 46:
			func_225(uParam1, "Paparazzo1", func_218(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 47:
			func_225(uParam1, "Paparazzo2", func_218(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 48:
			func_225(uParam1, "Paparazzo3", func_218(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 49:
			func_225(uParam1, "Paparazzo3A", func_218(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 50:
			func_225(uParam1, "Paparazzo3B", func_218(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 51:
			func_225(uParam1, "Paparazzo4", func_218(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 52:
			func_225(uParam1, "Rampage1", func_218(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 54:
			func_225(uParam1, "Rampage3", func_218(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 55:
			func_225(uParam1, "Rampage4", func_218(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 56:
			func_225(uParam1, "Rampage5", func_218(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_226(iParam0), 0, 0);
			break;
	
		case 53:
			func_225(uParam1, "Rampage2", func_218(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_226(iParam0), 1, 0);
			break;
	
		case 57:
			func_225(uParam1, "TheLastOne", func_218(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 58:
			func_225(uParam1, "Tonya1", func_218(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 59:
			func_225(uParam1, "Tonya2", func_218(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 60:
			func_225(uParam1, "Tonya3", func_218(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 61:
			func_225(uParam1, "Tonya4", func_218(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		case 62:
			func_225(uParam1, "Tonya5", func_218(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_226(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_225(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x24121
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_226(int iParam0) // Position - 0x241B2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

void func_227(int iParam0) // Position - 0x244F8
{
	Global_44593 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_228() // Position - 0x2450A
{
	if (Global_98825)
	{
		func_30();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_229(Global_113969.f_2366.f_539.f_4321));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}

	return;
}

char* func_229(eCharacter echParam0) // Position - 0x2453D
{
	echParam0 = echParam0;
	return "";
}

void func_230() // Position - 0x2454D
{
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
	}

	return;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x24590
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x245A6
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_233(int iParam0, int iParam1) // Position - 0x245BC
{
	Global_98820 = iParam0;
	Global_98821 = iParam1;
	return;
}

void func_234() // Position - 0x245D0
{
	Global_79644 != 6;

	if (Global_79649)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_79649 = false;
		Global_23831.f_9116 = 0;
	}

	Global_79644 = 6;
	Global_79646 = -1;
	Global_79645 = -1;
	return;
}

void func_235(int iParam0) // Position - 0x24608
{
	if (*iParam0 == -1)
		return;

	if (!(*iParam0 == Global_44004))
	{
		*iParam0 = -1;
		return;
	}

	*iParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = false;
	Global_64164 = 0;
	return;
}

void func_236(int iParam0, BOOL bParam1) // Position - 0x24645
{
	var unk;
	int unk2;
	BOOL unk3;
	int unk4;
	var unk5;
	int unk6;
	int unk7;
	var unk8;
	int unk9;
	int unk10;

	func_224(iParam0, &unk);

	if (!MISC::ARE_STRINGS_EQUAL(&(unk.f_16), ""))
	{
		while (!func_264(&(unk.f_16)))
		{
			SYSTEM::WAIT(0);
		}
	}

	if (unk.f_22 != 0)
		func_263(unk.f_22, 0);

	func_254(iParam0, Global_79660);

	if (!bParam1)
	{
		newsStory = func_253(iParam0);
	
		if (newsStory != 0)
			if (!AUDIO::IS_MISSION_NEWS_STORY_UNLOCKED(newsStory))
				AUDIO::UNLOCK_MISSION_NEWS_STORY(newsStory);
	}

	if (unk.f_24 != -1)
	{
		flag = true;
	
		if (unk.f_5 != 4)
		{
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (num != iParam0)
				{
					func_224(num, &unk33);
				
					if (unk33.f_5 == unk.f_5)
					{
						if (!IS_BIT_SET(Global_113969.f_18577[num /*6*/], 3))
							flag = false;
					
						if (!IS_BIT_SET(Global_113969.f_18577[num /*6*/], 0))
							func_241(num);
					}
				}
			}
		}
	
		if (flag)
			func_241(unk.f_24);
	}
	else if (unk.f_25 != 4)
	{
		for (j = 0; j < 63; j = j + 1)
		{
			num2 = j;
		
			if (num2 != iParam0)
			{
				func_224(num2, &unk65);
			
				if (unk65.f_5 == unk.f_25)
					func_241(num2);
			}
		}
	}

	if (!IS_BIT_SET(Global_113969.f_18577[iParam0 /*6*/], 3))
	{
		MISC::SET_BIT(&Global_113969.f_18577[iParam0 /*6*/], 3);
		Global_113056[iParam0 /*10*/].f_5 = 1;
		func_238(iParam0);
		num3 = func_237(iParam0);
	
		if (num3 != 322)
			func_72(num3, 0, 0);
	}

	return;
}

int func_237(int iParam0) // Position - 0x247C3
{
	switch (iParam0)
	{
		case 0:
			return 109;
	
		case 1:
			return 322;
	
		case 2:
			return 69;
	
		case 3:
			return 70;
	
		case 4:
			return 322;
	
		case 5:
			return 71;
	
		case 6:
			return 71;
	
		case 7:
			return 72;
	
		case 8:
			return 68;
	
		case 9:
			return 73;
	
		case 10:
			return 74;
	
		case 11:
			return 75;
	
		case 12:
			return 76;
	
		case 13:
			return 77;
	
		case 14:
			return 78;
	
		case 15:
			return 79;
	
		case 16:
			return 80;
	
		case 17:
			return 81;
	
		case 18:
			return 82;
	
		case 19:
			return 83;
	
		case 20:
			return 84;
	
		case 21:
			return 85;
	
		case 22:
			return 86;
	
		case 23:
			return 87;
	
		case 24:
			return 106;
	
		case 25:
			return 178;
	
		case 26:
			return 179;
	
		case 27:
			return 88;
	
		case 28:
			return 89;
	
		case 29:
			return 90;
	
		case 30:
			return 91;
	
		case 31:
			return 107;
	
		case 32:
			return 92;
	
		case 33:
			return 93;
	
		case 34:
			return 94;
	
		case 35:
			return 110;
	
		case 36:
			return 111;
	
		case 37:
			return 95;
	
		case 38:
			return 96;
	
		case 39:
			return 97;
	
		case 40:
			return 98;
	
		case 41:
			return 99;
	
		case 42:
			return 100;
	
		case 43:
			return 101;
	
		case 44:
			return 66;
	
		case 45:
			return 67;
	
		case 46:
			return 102;
	
		case 47:
			return 103;
	
		case 48:
			return 322;
	
		case 49:
			return 104;
	
		case 50:
			return 104;
	
		case 51:
			return 105;
	
		case 52:
			return 194;
	
		case 53:
			return 195;
	
		case 54:
			return 196;
	
		case 55:
			return 197;
	
		case 56:
			return 198;
	
		case 57:
			return 108;
	
		case 58:
			return 208;
	
		case 59:
			return 209;
	
		case 60:
			return 210;
	
		case 61:
			return 211;
	
		case 62:
			return 212;
	}

	return 322;
}

void func_238(int iParam0) // Position - 0x24B4A
{
	func_240(iParam0, true);
	Global_113969.f_18577[iParam0 /*6*/].f_3 = func_239();
	Global_113969.f_18577.f_380 = Global_113969.f_18577.f_380 + 1;
	return;
}

int func_239() // Position - 0x24B80
{
	return Global_113969.f_10019.f_21 + Global_113969.f_18577.f_380;
}

void func_240(int iParam0, BOOL bParam1) // Position - 0x24B9C
{
	int num;
	int num2;
	int num3;

	num = 55;

	if (bParam1)
	{
		num2 = iParam0;
	
		if (num2 == 46)
			num = 35;
		else if (num2 == 49)
			num = 36;
		else if (num2 == 50)
			num = 37;
		else if (num2 == 8)
			num = 38;
		else if (num2 == 16)
			num = 39;
		else if (num2 == 38)
			num = 40;
		else if (num2 == 39)
			num = 41;
		else if (num2 == 40)
			num = 42;
		else if (num2 == 41)
			num = 43;
		else if (num2 == 42)
			num = 44;
		else if (num2 == 43)
			num = 45;
		else if (num2 == 20)
			num = 46;
	}
	else
	{
		num3 = iParam0;
	
		if (num3 == 53)
			num = 0;
		else if (num3 == 1)
			num = 1;
		else if (num3 == 2)
			num = 2;
		else if (num3 == 17)
			num = 3;
		else if (num3 == 19)
			num = 4;
		else if (num3 == 43)
			num = 5;
		else if (num3 == 44)
			num = 6;
		else if (num3 == 63)
			num = 8;
		else if (num3 == 12)
			num = 9;
		else if (num3 == 13)
			num = 10;
		else if (num3 == 64)
			num = 11;
		else if (num3 == 20)
			num = 12;
		else if (num3 == 30)
			num = 13;
		else if (num3 == 31)
			num = 14;
		else if (num3 == 41)
			num = 15;
		else if (num3 == 38)
			num = 16;
		else if (num3 == 9)
			num = 18;
		else if (num3 == 59)
			num = 19;
		else if (num3 == 45)
			num = 20;
		else if (num3 == 10)
			num = 21;
		else if (num3 == 14)
			num = 22;
		else if (num3 == 16)
			num = 24;
		else if (num3 == 39)
			num = 25;
		else if (num3 == 46)
			num = 26;
		else if (num3 == 60)
			num = 27;
		else if (num3 == 22)
			num = 28;
		else if (num3 == 48)
			num = 30;
		else if (num3 == 61)
			num = 31;
		else if (num3 == 49)
			num = 32;
		else if (num3 == 27)
			num = 34;
		else if (num3 == 3)
			num = 47;
		else if (num3 == 4)
			num = 48;
		else if (num3 == 5)
			num = 49;
		else if (num3 == 6)
			num = 50;
		else if (num3 == 7)
			num = 51;
		else if (num3 == 58)
			num = 53;
		else if (num3 == 90)
			num = 7;
		else if (num3 == 74 || num3 == 75)
			num = 17;
		else if (num3 == 93)
			num = 23;
		else if (num3 == 69 || num3 == 70)
			num = 29;
		else if (num3 == 84 || num3 == 85)
			num = 33;
	}

	if (num != 55)
		Global_113969.f_20567.f_472 = num;

	return;
}

void func_241(int iParam0) // Position - 0x24EC0
{
	if (iParam0 == 63 || iParam0 == -1)
		return;

	func_242(iParam0);
	MISC::SET_BIT(&Global_113969.f_18577[iParam0 /*6*/], 0);
	return;
}

void func_242(int iParam0) // Position - 0x24EF3
{
	switch (iParam0)
	{
		case 30:
			func_246(22, 1, 0, true, 0);
			break;
	
		case 15:
			func_243(37, false);
			break;
	
		default:
			break;
	}

	return;
}

void func_243(int iParam0, BOOL bParam1) // Position - 0x24F28
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_245(iParam0, 0))
		{
			func_244(iParam0, 1, false);
			func_244(iParam0, 2, false);
			func_244(iParam0, 3, false);
			func_244(iParam0, 4, false);
			func_244(iParam0, 0, true);
			Global_78179[iParam0] = 1;
		}
	}
	else
	{
		func_244(iParam0, 0, false);
	}

	return;
}

void func_244(int iParam0, int iParam1, BOOL bParam2) // Position - 0x24F85
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_113969.f_32753[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_113969.f_32753[iParam0], iParam1);

	return;
}

BOOL func_245(int iParam0, int iParam1) // Position - 0x24FC0
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113969.f_32753[iParam0], iParam1);
}

void func_246(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x24FE0
{
	if (iParam0 != 198)
	{
		if (Global_79389)
			Global_43576.f_227[iParam0] = iParam1;
		else
			Global_113969.f_7264.f_227[iParam0] = iParam1;
	
		Global_40582[iParam0] = bParam2;
		Global_40781[iParam0] = true;
		func_249(iParam0, bParam3, iParam4, false);
		func_247(iParam0, iParam1);
	}

	return;
}

void func_247(int iParam0, int iParam1) // Position - 0x25038
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
			else
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
			break;
	
		case 71:
			if (iParam1 != 1)
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", false, false);
			else
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", true, false);
			break;
	
		case 65:
			if (iParam1 == 1)
				func_248(0, false);
			else
				func_248(0, true);
			break;
	
		case 6:
			if (iParam1 == 1)
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
			else
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
			break;
	
		case 174:
			if (iParam1 == 2)
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			break;
	
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
			}
			break;
	}

	return;
}

void func_248(int iParam0, BOOL bParam1) // Position - 0x25121
{
	if (bParam1)
		MISC::SET_BIT(&Global_112604, iParam0);
	else
		MISC::CLEAR_BIT(&Global_112604, iParam0);

	Global_112603 = 1;
	return;
}

BOOL func_249(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x2514A
{
	BOOL flag;
	int num;
	int num2;
	Vector3 vector;
	Object unk;
	BOOL unk2;
	Interior unk3;

	Global_1919037 = 1;
	flag = false;
	vector.f_4 = 3;
	vector.f_8 = 3;
	vector.f_64 = 3;
	vector.f_75 = 3;
	vector.f_91 = 3;
	func_252(&vector, iParam0);

	if (func_250())
		num = Global_113969.f_7264.f_227[iParam0];
	else
		num = Global_43576.f_227[iParam0];

	num2 = Global_40980[iParam0];

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1919037 = 1;
	}
	else
	{
		flag2 = true;
	
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_40582[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector, true) < 200f)
				{
					flag2 = false;
					Global_1919037 = 1;
				}
			
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						flag2 = false;
						Global_1919037 = 1;
					}
				}
			}
		}
	
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5)
		{
			flag2 = false;
			Global_1919037 = 1;
		}
	
		if (flag2)
		{
			switch (vector.f_3)
			{
				case 0:
					if (num == 2)
					{
					}
					else
					{
						if (vector.f_4[num] != 0)
							ENTITY::REMOVE_MODEL_HIDE(vector, 10f, vector.f_4[num], false);
					
						if (vector.f_4[num2] != 0)
							ENTITY::CREATE_MODEL_HIDE(vector, 10f, vector.f_4[num2], true);
					
						Global_42176[iParam0] = true;
					}
				
					flag = true;
					break;
			
				case 1:
					if (num == 0)
					{
						if (MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))
						{
							if (STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/]))
							{
								STREAMING::REMOVE_IPL(&vector.f_8[1 /*8*/]);
								Global_1919037 = 1;
							}
						}
					
						if (MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))
						{
							if (STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/]))
							{
								STREAMING::REMOVE_IPL(&vector.f_8[2 /*8*/]);
								Global_1919037 = 1;
							}
						}
					
						if (MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/]))
							{
								STREAMING::REQUEST_IPL(&vector.f_8[0 /*8*/]);
								Global_1919037 = 1;
							}
						}
					
						if (MISC::GET_HASH_KEY(&(vector.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(vector.f_34)))
							{
								STREAMING::REQUEST_IPL(&(vector.f_34));
								Global_1919037 = 1;
							}
						}
					}
					else if (num == 1)
					{
						if (MISC::GET_HASH_KEY(&(vector.f_34)) != MISC::GET_HASH_KEY(""))
							if (STREAMING::IS_IPL_ACTIVE(&(vector.f_34)))
								STREAMING::REMOVE_IPL(&(vector.f_34));
					
						if (MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))
							if (STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/]))
								STREAMING::REMOVE_IPL(&vector.f_8[0 /*8*/]);
					
						if (MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))
							if (STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/]))
								STREAMING::REMOVE_IPL(&vector.f_8[2 /*8*/]);
					
						if (MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(""))
							if (!STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/]))
								STREAMING::REQUEST_IPL(&vector.f_8[1 /*8*/]);
					}
					else if (num == 2)
					{
						if (MISC::GET_HASH_KEY(&(vector.f_34)) != MISC::GET_HASH_KEY(""))
							if (STREAMING::IS_IPL_ACTIVE(&(vector.f_34)))
								STREAMING::REMOVE_IPL(&(vector.f_34));
					
						if (MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))
							if (STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/]))
								STREAMING::REMOVE_IPL(&vector.f_8[0 /*8*/]);
					
						if (MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))
							if (STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/]))
								STREAMING::REMOVE_IPL(&vector.f_8[1 /*8*/]);
					
						if (MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							if (!STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/]))
								STREAMING::REQUEST_IPL(&vector.f_8[2 /*8*/]);
					}
				
					Global_41977[iParam0] = true;
					Global_42176[iParam0] = true;
					flag = true;
					break;
			
				case 2:
					interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vector, &(vector.f_42));
				
					if (interiorAtCoordsWithType != 0)
					{
						if (MISC::GET_HASH_KEY(&(vector.f_50)) != MISC::GET_HASH_KEY(""))
							if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &(vector.f_50)))
								INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &(vector.f_50));
					
						if (num == 0)
						{
							if (MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]))
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
						}
						else if (num == 1)
						{
							if (MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]))
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
						}
						else if (num == 2)
						{
							if (MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) != MISC::GET_HASH_KEY(""))
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]))
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
						
							if (MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]))
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
						}
					
						if (bParam1)
							INTERIOR::REFRESH_INTERIOR(interiorAtCoordsWithType);
					}
				
					Global_42176[iParam0] = true;
					Global_41977[iParam0] = true;
					flag = true;
					break;
			
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f)
					{
						rayfireMapObject = OBJECT::GET_RAYFIRE_MAP_OBJECT(vector, 25f, &vector.f_8[0 /*8*/]);
					
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(rayfireMapObject))
						{
							if (num == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject, 3);
								Global_42176[iParam0] = true;
								flag = true;
							}
							else if (num == 1)
							{
								if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) != 6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) != 7 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) != 8)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject, 10);
									Global_42176[iParam0] = true;
									flag = true;
								}
							}
							else if (num == 2)
							{
								flag = true;
							}
						}
					}
					break;
			
				case 4:
					if (num == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(vector, 50f, vector.f_4[1], vector.f_4[0], false);
						MISC::CLEAR_BIT(&Global_40328[iParam0 / 32], iParam0 % 32);
					}
					else if (num == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(vector, 50f, vector.f_4[0], vector.f_4[1], true);
						MISC::SET_BIT(&Global_40328[iParam0 / 32], iParam0 % 32);
					}
				
					flag = true;
					break;
			}
		
			if (flag)
			{
				Global_40781[iParam0] = false;
				Global_40980[iParam0] = num;
			
				if (!func_250())
				{
					if (!Global_41577[iParam0])
					{
						Global_41577[iParam0] = true;
						Global_41776 = Global_41776 + 1;
					}
				}
			}
		}
	}

	return flag;
}

BOOL func_250() // Position - 0x25AAF
{
	if (func_74() == -1 || func_74() == 999 && !(func_251() == 0))
		return true;

	return false;
}

int func_251() // Position - 0x25ADF
{
	return Global_32949;
}

int func_252(var uParam0, int iParam1) // Position - 0x25AEA
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		uParam0->f_4[i] = 0;
		TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[i /*8*/], "", 32);
		uParam0->f_64[i] = 0;
		uParam0->f_75[i] = 0;
		uParam0->f_91[i] = 0;
	}

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
	
		case 4:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
	
		case 0:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
	
		case 1:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
	
		case 2:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.91345f, 603.2904f, 105.66109f };
			uParam0->f_61 = { -1038.9135f, 639.2904f, 135.66109f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
	
		case 5:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
			break;
	
		case 196:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
	
		case 6:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
			break;
	
		case 7:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
	
		case 8:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
	
		case 9:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
	
		case 10:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
	
		case 11:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
			break;
	
		case 12:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "cargoship", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
			uParam0->f_68 = { -162.89182f, -2365.7693f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
	
		case 13:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
			break;
	
		case 14:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "smboat", 32);
			break;
	
		case 15:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
	
		case 16:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
	
		case 17:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
	
		case 18:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
	
		case 19:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
	
		case 20:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
	
		case 21:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.8584f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
	
		case 22:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
			break;
	
		case 23:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
			break;
	
		case 24:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
			break;
	
		case 25:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
			break;
	
		case 26:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
	
		case 27:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
	
		case 28:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
	
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
	
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_lod");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
	
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
	
		case 32:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
	
		case 33:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
	
		case 34:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
	
		case 35:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
	
		case 36:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
	
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
	
		case 38:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
	
		case 39:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
	
		case 40:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
	
		case 41:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
	
		case 42:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
	
		case 43:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
	
		case 44:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
	
		case 45:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
	
		case 46:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
	
		case 47:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
	
		case 48:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), "des_methtrailer", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
	
		case 49:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
	
		case 50:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.7556f, 4929.9883f, 39.52461f };
			uParam0->f_82 = { 2505.7556f, 5023.9883f, 67.52461f };
			break;
	
		case 55:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			break;
	
		case 51:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farm", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "farm", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
	
		case 52:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farm_props", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
	
		case 53:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
	
		case 54:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "farmint", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
	
		case 56:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
	
		case 57:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
	
		case 58:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
	
		case 59:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
	
		case 60:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
	
		case 61:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
			*uParam0 = { -1600.6194f, 4443.4565f, 0.725f };
			break;
	
		case 62:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
	
		case 63:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
			*uParam0 = { -3086.4285f, 339.2523f, 6.3717f };
			break;
	
		case 64:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { -1675.1783f, -1143.6046f, 12.0175f };
			break;
	
		case 65:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "railing_start", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
	
		case 66:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
	
		case 67:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
	
		case 68:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
	
		case 69:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
	
		case 70:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 71:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 72:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 73:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 74:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
	
		case 75:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
	
		case 76:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
	
		case 105:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
	
		case 106:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
	
		case 107:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
	
		case 108:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
	
		case 109:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
	
		case 110:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
	
		case 111:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
	
		case 112:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
	
		case 77:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.2096f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
	
		case 78:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
	
		case 79:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
	
		case 80:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
	
		case 113:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.6292f, -2030.913f, 1.2823f };
			break;
	
		case 114:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.9692f, 4277.5825f, 30.379f };
			break;
	
		case 115:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.8813f, 3836.1074f, 30.7717f };
			break;
	
		case 87:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { -180.5771f, -1016.9276f, 28.2893f };
			break;
	
		case 88:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { -623.6868f - 11f, -231.93504f - 11f, 40.307034f - 3.25f };
			uParam0->f_82 = { -623.6868f + 11f, -231.93504f + 11f, 40.307034f + 3.25f };
			break;
	
		case 89:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
	
		case 90:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
	
		case 91:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 2773.6099f, 2835.3274f, 35.1903f };
			break;
	
		case 94:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "airfield", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 1743.6821f, 3286.2512f, 40.0875f };
			break;
	
		case 95:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
	
		case 104:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
	
		case 103:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
	
		case 102:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
	
		case 92:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
	
		case 93:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
	
		case 118:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
	
		case 116:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
	
		case 117:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
	
		case 119:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
	
		case 120:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
	
		case 122:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
	
		case 121:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
	
		case 123:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
	
		case 124:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
	
		case 170:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
	
		case 171:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
	
		case 125:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
	
		case 164:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 165:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 166:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 167:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 168:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 169:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
	
		case 126:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 127:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 128:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 129:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 130:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 131:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 132:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 133:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 134:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
	
		case 179:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.3356f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
	
		case 174:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
	
		case 175:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
	
		case 176:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
	
		case 177:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
	
		case 178:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
	
		case 173:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "shr_int", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
	
		case 180:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
	
		case 181:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
	
		case 135:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 136:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 137:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 138:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 139:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 140:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 141:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 142:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 143:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 144:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 145:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 146:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
	
		case 147:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
	
		case 148:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
	
		case 149:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.0288f, 3682.9983f, 33.2675f };
			break;
	
		case 150:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
	
		case 151:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
	
		case 152:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
	
		case 153:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
	
		case 154:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
	
		case 155:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
	
		case 172:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.2944f, 28.2688f };
			break;
	
		case 182:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.57953f, -3092.9624f, 8.64631f };
			uParam0->f_79 = { { 8.64631f, -3092.9624f, 139.57953f } - { 4.1875f, 24f, 33.3125f } };
			uParam0->f_82 = { { 8.64631f, -3092.9624f, 139.57953f } + { 4.1875f, 24f, 33.3125f } };
			uParam0->f_85 = { { 8.64631f, -3092.9624f, 139.57953f } - { 4.1875f, 24f, 33.3125f } };
			uParam0->f_88 = { { 8.64631f, -3092.9624f, 139.57953f } + { 4.1875f, 24f, 33.3125f } };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
	
		case 183:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.77838f, -3131.767f, 7.041344f };
			uParam0->f_79 = { { 7.041344f, -3131.767f, 203.77838f } - { 2.5625f, 2.75f, 4.875f } };
			uParam0->f_82 = { { 7.041344f, -3131.767f, 203.77838f } + { 2.5625f, 2.75f, 4.875f } };
			break;
	
		case 184:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.77055f, -2982.6594f, 7.952507f };
			uParam0->f_79 = { { 7.952507f, -2982.6594f, 144.77055f } - { 3.125f, 3.4375f, 5.3125f } };
			uParam0->f_82 = { { 7.952507f, -2982.6594f, 144.77055f } + { 3.125f, 3.4375f, 5.3125f } };
			break;
	
		case 185:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_79 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_82 = { -1158.9647f, -1524.9827f, 11.632731f };
			break;
	
		case 187:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.0645f, 368.0221f, 70.9128f };
			break;
	
		case 186:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
	
		case 188:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.2333f, 92.1041f, 60.0617f };
			break;
	
		case 81:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.1377f, 223.4648f, 181.1118f };
			break;
	
		case 82:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.7847f, 263.4779f, 173.6154f };
			break;
	
		case 83:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
	
		case 84:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
	
		case 85:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "golfflags", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { -1096.5055f, 4.5754f, 49.8103f };
			break;
	
		case 86:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "yogagame", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
	
		case 189:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
	
		case 190:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
	
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.3812f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - { 25f, 25f, 15f } };
			uParam0->f_88 = { *uParam0 + { 25f, 25f, 15f } };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
	
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - { 25f, 25f, 15f } };
			uParam0->f_88 = { *uParam0 + { 25f, 25f, 15f } };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
	
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.0793f, 35.9502f };
			uParam0->f_85 = { *uParam0 - { 25f, 25f, 15f } };
			uParam0->f_88 = { *uParam0 + { 25f, 25f, 15f } };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
	
		case 194:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
			*uParam0 = { -1601.4241f, 2808.2126f, 16.2598f };
			break;
	
		case 97:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
	
		case 98:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
	
		case 99:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
			*uParam0 = { -1459.1273f, 486.1281f, 115.2016f };
			break;
	
		case 100:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
	
		case 101:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "facelobby", 32);
			*uParam0 = { -1081.3467f, -263.1502f, 38.7152f };
			break;
	
		case 195:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
	
		case 197:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}

	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 157:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 158:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 163:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 159:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 161:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 162:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 160:
			uParam0->f_3 = 2;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "locked", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "unlocked", 32);
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
	
		case 96:
			uParam0->f_3 = 1;
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
			TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}

	return 1;
}

int func_253(int iParam0) // Position - 0x2932A
{
	switch (iParam0)
	{
		case 46:
			return 42;
	
		case 47:
			return 43;
	
		case 49:
			return 44;
	
		case 50:
			return 45;
	
		case 8:
			if (IS_BIT_SET(Global_113969.f_18577.f_382, 0))
				return 46;
			break;
	
		case 16:
			return 47;
	
		case 38:
			return 48;
	
		case 39:
			return 49;
	
		case 40:
			return 50;
	
		case 41:
			return 51;
	
		case 42:
			return 52;
	
		case 43:
			if (Global_113969.f_9088.f_99.f_58[101])
				return 53;
			else
				return 54;
			break;
	
		case 20:
			return 55;
	}

	return 0;
}

void func_254(int iParam0, BOOL bParam1) // Position - 0x29419
{
	switch (iParam0)
	{
		case 46:
			func_255(4, bParam1);
			break;
	
		case 16:
			func_255(6, bParam1);
			break;
	
		case 37:
			func_255(17, bParam1);
			break;
	
		case 31:
			func_255(16, bParam1);
			break;
	}

	return;
}

void func_255(int iParam0, BOOL bParam1) // Position - 0x2946A
{
	int offset;

	offset = iParam0;

	if (offset >= 0 && offset <= 31)
	{
		if (!func_262(iParam0))
		{
			MISC::SET_BIT(&(Global_113969.f_26437), offset);
		
			if (!bParam1)
			{
				func_260(func_261(iParam0));
			
				if (!func_259(68))
					func_256("DI_HLP_STRY" /*Story characters become available in Rockstar Editor's 'Director Mode' as the GTAV story progresses.*/, 2, 0, 20000, 10000, 7, 0, 208, 0);
			}
		}
	}

	return;
}

void func_256(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x294D0
{
	func_257(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_257(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x294F2
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113969.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_113969.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_113969.f_20413.f_145 = Global_113969.f_20413.f_145 + 1;
		func_258();
	}

	return;
}

void func_258() // Position - 0x296C6
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113969.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 0))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[0])
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 1))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[1])
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 2))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[2])
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[i /*16*/].f_12;
	}

	return;
}

BOOL func_259(int iParam0) // Position - 0x297DD
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113969.f_20413.f_150[i], num);

	return false;
}

void func_260(char* sParam0) // Position - 0x2981D
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, "DI_FEED_CHAR" /*Director Mode Actor Unlock*/, sParam0);
	return;
}

char* func_261(int iParam0) // Position - 0x29842
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC" /*Michael*/;
	
		case 1:
			return "CM_STOFRA" /*Franklin*/;
	
		case 2:
			return "CM_STOTRE" /*Trevor*/;
	
		case 3:
			return "CM_STOAMA" /*Amanda*/;
	
		case 4:
			return "CM_STOBEV" /*Beverly*/;
	
		case 5:
			return "CM_STOBRA" /*Brad*/;
	
		case 6:
			return "CM_STOCHR" /*Cris Formage*/;
	
		case 7:
			return "CM_STODAV" /*Dave Norton*/;
	
		case 8:
			return "CM_STODEV" /*Devin*/;
	
		case 9:
			return "CM_STODRF" /*Dr Friedlander*/;
	
		case 10:
			return "CM_STOFAB" /*Fabien*/;
	
		case 11:
			return "CM_STOFLO" /*Floyd*/;
	
		case 12:
			return "CM_STOJIM" /*Jimmy*/;
	
		case 13:
			return "CM_STOLAM" /*Lamar*/;
	
		case 14:
			return "CM_STOLAZ" /*Lazlow*/;
	
		case 15:
			return "CM_STOLES" /*Lester*/;
	
		case 16:
			return "CM_STOMAU" /*Maude*/;
	
		case 17:
			return "CM_STOTHO" /*Mrs Thornhill*/;
	
		case 18:
			return "CM_STONER" /*Nervous Ron*/;
	
		case 19:
			return "CM_STOPAT" /*Patricia*/;
	
		case 20:
			return "CM_STOSIM" /*Simeon*/;
	
		case 21:
			return "CM_STOSOL" /*Solomon*/;
	
		case 22:
			return "CM_STOSTE" /*Steve Haines*/;
	
		case 23:
			return "CM_STOSTR" /*Stretch*/;
	
		case 24:
			return "CM_STOTAN" /*Tanisha*/;
	
		case 25:
			return "CM_STOTAO" /*Cheng Jr.*/;
	
		case 26:
			return "CM_STOTRA" /*Tracey*/;
	
		case 27:
			return "CM_STOWAD" /*Wade*/;
	}

	return "ERROR!";
}

BOOL func_262(int iParam0) // Position - 0x29A15
{
	if (iParam0 != -1 && iParam0 != 28)
		return IS_BIT_SET(Global_113969.f_26437, iParam0);

	return false;
}

void func_263(int iParam0, int iParam1) // Position - 0x29A3F
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_113969.f_8616[iParam0] = true;
	Global_113969.f_8616.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_264(const char* sParam0) // Position - 0x29A7C
{
	eStackSize stackSize;

	stackSize = DEFAULT;

	if (!SCRIPT::DOES_SCRIPT_EXIST(sParam0))
		return true;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races"))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 0)
			return true;
	
		stackSize = MICRO;
	}

	SCRIPT::REQUEST_SCRIPT(sParam0);

	if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::START_NEW_SCRIPT(sParam0, stackSize);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return true;
	}

	return false;
}

int func_265() // Position - 0x29ADC
{
	return func_266(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_266(const char* sParam0, int iParam1) // Position - 0x29AED
{
	int num;
	const char* str;
	Hash unk;
	int unk2;

	hashKey = MISC::GET_HASH_KEY(sParam0);
	i = 0;

	for (i = 0; i < 63; i = i + 1)
	{
		num = i;
		func_224(num, &str);
	
		if (MISC::GET_HASH_KEY(str) == hashKey)
			return num;
	}

	iParam1 == 0;
	return -1;
}

void func_267(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x29B36
{
	int num;

	Global_9486 = echParam0;

	if (Global_118[echParam0 /*10*/].f_8 != 181)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_273(echParam0, 0, 1);
			func_273(echParam0, 1, 1);
			func_273(echParam0, 2, 1);
			func_272(echParam0, 0, 1);
			func_272(echParam0, 1, 1);
			func_272(echParam0, 2, 1);
		}
		else
		{
			if (func_271(echParam0, echParam1) == 1 && func_270(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_273(echParam0, num, 1);
			func_272(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !IS_BIT_SET(Global_2738934.f_6969, 4))
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !IS_BIT_SET(Global_2738934.f_6969, 3))
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !IS_BIT_SET(Global_2738934.f_6969, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (echParam1 != 4)
				{
					if (Global_20930 != echParam1)
					{
						Global_9459[echParam1 /*4*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9476[echParam1] = true;
						Global_9481[echParam1] = echParam0;
					}
					else if (echParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9410[1 /*6*/].f_5 = echParam1;
						func_268();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_9410[1 /*6*/].f_5 = echParam1;
					func_268();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_9410[1 /*6*/].f_5 = echParam1;
				func_268();
			}
		}
	}

	return;
}

void func_268() // Position - 0x29CB4
{
	var txdName;
	var unk;
	const char* unk2;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);

	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_9410[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_9410[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_8800, 0);
	return;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x29D31
{
	return Global_2169[character /*29*/].f_3;
}

int func_270(eCharacter echParam0, int iParam1) // Position - 0x29D44
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2169[echParam0 /*29*/].f_24[iParam1];
}

int func_271(eCharacter echParam0, int iParam1) // Position - 0x29D6E
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2169[echParam0 /*29*/].f_12[iParam1];
}

void func_272(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x29D98
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2169[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113969.f_28054[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_273(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x29DDD
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2169[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113969.f_28054[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

void func_274(int iParam0) // Position - 0x29E22
{
	BOOL flag;
	int i;

	Global_64167 = 0;

	if (!(Global_64391[iParam0 /*13*/] == 3))
		return;

	flag = false;
	i = 0;

	for (i = 0; i < Global_76261; i = i + 1)
	{
		if (Global_76262[i /*9*/] == iParam0)
		{
			flag = true;
			Global_76262[i /*9*/].f_1 = 1;
			Global_76262[i /*9*/].f_2 = 0f;
			Global_76262[i /*9*/].f_3 == 2;
		}
	}

	!flag;
	return;
}

void func_275(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x29E93
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerIndex, false);
	PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam3, 0);
	func_276(false, true, false, false, false, false, false);

	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}

	HUD::CLEAR_HELP(true);

	if (iParam0 == 1)
		CAM::SET_WIDESCREEN_BORDERS(false, 0);

	if (iParam1 == 1)
		if (hLocal_37 != 0 && hLocal_37 != joaat("OBJECT") && hLocal_37 != joaat("GADGET_PARACHUTE"))
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), hLocal_37, false))
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), hLocal_37, false);

	if (func_318(PLAYER::PLAYER_PED_ID()))
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);

	return;
}

void func_276(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x29F3D
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_284(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_26())
				Global_20930.f_1 = 3;
		
			Global_22286 = 5;
		}
	
		func_283(true, bParam3, bParam2, false);
		Global_64172 = 1;
		Global_76501 = true;
		Global_79387 = true;
	}
	else
	{
		func_284(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_283(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_281(PLAYER::PLAYER_ID()) && !func_278(PLAYER::PLAYER_ID(), 0) && !func_277() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_281(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_79387 = false;
	}

	return;
}

BOOL func_277() // Position - 0x2A08A
{
	return IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

BOOL func_278(Player plParam0, int iParam1) // Position - 0x2A0A4
{
	BOOL flag;

	if (!func_280(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_279(-1, false) == 8;
	else
		flag = Global_1845281[plParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_279(int iParam0, BOOL bParam1) // Position - 0x2A0FD
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_77();

	if (Global_1575063[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

BOOL func_280(Player plParam0) // Position - 0x2A13E
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_281(Player plParam0) // Position - 0x2A160
{
	if (func_278(plParam0, 0))
		return true;

	if (func_282())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657971[plParam0 /*465*/].f_200, 2))
		return true;

	return false;
}

BOOL func_282() // Position - 0x2A19F
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_283(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2A1AD
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

void func_284(int iParam0) // Position - 0x2A1E0
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 13);
	else
		MISC::CLEAR_BIT(&Global_8800, 13);

	return;
}

void func_285() // Position - 0x2A203
{
	var unk;
	var unk2;
	var unk3;
	float unk4;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_347, "rcmfanatic1", "jogging_on_spot", 3))
		{
			unk4 = { func_53(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(pedLocal_347, true)) };
			entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedLocal_347) };
			num = 0.25f;
			unk = { entityForwardVector + ((unk4 - entityForwardVector) * { num, num, num }) };
			ENTITY::SET_ENTITY_HEADING(pedLocal_347, func_286(0f, 0f, 0f, unk, 1));
		}
	}

	return;
}

float func_286(float fParam0, float fParam1, float fParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x2A27D
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - fParam0;
	num3 = fParam3.f_1 - fParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

void func_287() // Position - 0x2A2E2
{
	var priorityMidData;

	priorityMidData.f_4 = 1065353216;
	priorityMidData.f_5 = 1065353216;
	priorityMidData.f_9 = 1065353216;
	priorityMidData.f_10 = 1065353216;
	priorityMidData.f_14 = 1065353216;
	priorityMidData.f_15 = 1065353216;
	priorityMidData.f_17 = 1040187392;
	priorityMidData.f_18 = 1040187392;
	priorityMidData.f_19 = -1;

	if (iLocal_163 == 0)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PERFORM_SEQUENCE) != 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_722);
			TASK::TASK_SCRIPTED_ANIMATION(0, &iLocal_459, &priorityMidData, &priorityMidData, 1040187392, 1040187392);
			TASK::TASK_SCRIPTED_ANIMATION(0, &iLocal_481, &priorityMidData, &priorityMidData, 1040187392, 1040187392);
			TASK::TASK_SCRIPTED_ANIMATION(0, &iLocal_503, &priorityMidData, &priorityMidData, 1040187392, 1040187392);
			TASK::TASK_SCRIPTED_ANIMATION(0, &iLocal_525, &priorityMidData, &priorityMidData, 1040187392, 1040187392);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_722);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_722);
			_DEBUG_PRINT("Starting out of breath anim loop");
			iLocal_163 = 1;
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_722);
		}
	}
	else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), pedLocal_447, true))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic1out_of_breath", "p_zero_tired_02", 3))
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}

	return;
}

BOOL func_288(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12) // Position - 0x2A44E
{
	var unk;
	var unk2;

	func_14(uParam0, _CHAR_NULL, sParam1, iParam11, iParam12, 0);

	if (iParam10 > 7)
		if (iParam10 < 12)
			iParam10 = 7;

	unk = 10;
	unk12 = 10;
	func_290(4, &unk, &unk12, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, sParam9, 0, 0, 0, 0, 0, 0);
	return func_289(&unk, &unk12, iParam10, false);
}

BOOL func_289(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x2A4AB
{
	int i;

	Global_22287 = 0;

	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam2 > Global_22288)
			{
				if (bParam3 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = false;
					Global_22282 = 0;
					Global_22283 = 0;
				}
				else
				{
					func_16();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_36(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_35();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23282 = Global_23283;
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_21905.f_370 = Global_23275;
		Global_22282 = Global_22283;
		Global_22284 = Global_22285;
	
		if (Global_22544 == false)
		{
			Global_22440[0 /*6*/] = { Global_22466[0 /*6*/] };
			Global_22440[1 /*6*/] = { Global_22466[1 /*6*/] };
			Global_22492[0 /*6*/] = { Global_22518[0 /*6*/] };
			Global_22492[1 /*6*/] = { Global_22518[1 /*6*/] };
			Global_22453[0 /*6*/] = { Global_22479[0 /*6*/] };
			Global_22453[1 /*6*/] = { Global_22479[1 /*6*/] };
			Global_22505[0 /*6*/] = { Global_22531[0 /*6*/] };
			Global_22505[1 /*6*/] = { Global_22531[1 /*6*/] };
		}
	
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
		
			if (bParam3)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20930.f_1 > 3)
					return 0;
			}
		
			if (Global_20896 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_27())
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_79389)
				{
					if (Global_22544 == false)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
							return 0;
					
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
							return 0;
					
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
							return 0;
					
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
							return 0;
					}
				}
			}
		
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			}
		
			func_25();
			Global_22296 = bParam3;
		}
	
		Global_22288 = iParam2;
	
		if (Global_22282 > 0)
		{
			for (i = 0; i < Global_22282; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&Global_21905.f_6[i /*6*/], uParam0->[i], 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_21905.f_187[i /*6*/], uParam1->[i], 24);
			}
		}
	
		Global_21152 = 0;
		func_24();
		return 1;
	}

	if (Global_22286 == 5)
		return 0;

	if (iParam2 < Global_22288 || iParam2 == Global_22288)
		return 0;

	if (iParam2 == 2)
	{
	}
	else
	{
		func_16();
	}

	return 0;
}

void func_290(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) // Position - 0x2A816
{
	Global_22283 = iParam0;
	Global_22293 = false;
	Global_22300 = false;
	Global_22295 = false;
	Global_23277 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	uParam1->[0] = sParam3;
	uParam2->[0] = sParam4;
	uParam1->[1] = sParam5;
	uParam2->[1] = sParam6;
	uParam1->[2] = sParam7;
	uParam2->[2] = sParam8;
	uParam1->[3] = sParam9;
	uParam2->[3] = sParam10;
	uParam1->[4] = iParam11;
	uParam2->[4] = iParam12;
	uParam1->[5] = iParam13;
	uParam2->[5] = iParam14;
	uParam1->[6] = iParam15;
	uParam2->[6] = iParam16;
	return;
}

void func_291(int iParam0) // Position - 0x2A89E
{
	if (func_296())
		return;

	if (!(Global_20930.f_1 == 1))
	{
		if (func_295(0))
			func_292(iParam0);
	
		MISC::SET_BIT(&Global_8801, 2);
	}

	return;
}

void func_292(int iParam0) // Position - 0x2A8D1
{
	if (func_296())
		return;

	if (Global_21145)
		if (func_294())
			func_293(true, true);
		else
			func_293(false, false);

	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		MISC::SET_BIT(&Global_8801, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22286 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 30);
	else
		MISC::CLEAR_BIT(&Global_8800, 30);

	if (!func_26())
		Global_20930.f_1 = 3;

	return;
}

void func_293(BOOL bParam0, BOOL bParam1) // Position - 0x2A95B
{
	if (bParam0)
	{
		if (func_295(0))
		{
			Global_21145 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
		
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == true)
	{
		Global_21145 = false;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
	}

	return;
}

BOOL func_294() // Position - 0x2A9CF
{
	return IS_BIT_SET(Global_1956920, 5);
}

BOOL func_295(int iParam0) // Position - 0x2A9DD
{
	if (iParam0 == 1)
		if (Global_20930.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20930.f_1 > 3)
		return true;

	return false;
}

BOOL func_296() // Position - 0x2AA34
{
	return IS_BIT_SET(Global_1956920, 19);
}

void func_297() // Position - 0x2AA43
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPRINT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
	return;
}

void func_298() // Position - 0x2AA94
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (func_318(uLocal_574[i /*12*/]) && PED::IS_PED_RAGDOLL(uLocal_574[i /*12*/]))
		{
			TASK::CLEAR_PED_TASKS(uLocal_574[i /*12*/]);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
		
			if (func_44(uLocal_574[i /*12*/], PLAYER::PLAYER_PED_ID(), true) < func_44(uLocal_574[i /*12*/], pedLocal_347, true))
			{
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			}
			else
			{
				TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_347, -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_347, 0);
			}
		
			TASK::TASK_PAUSE(0, 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_574[i /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_574[i /*12*/], iLocal_180);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
		}
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_574[i /*12*/]))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_574[i /*12*/]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_574[i /*12*/]);
				TASK::TASK_SMART_FLEE_PED(uLocal_574[i /*12*/], PLAYER::PLAYER_PED_ID(), 200f, -1, true, false);
				func_299(&uLocal_574[i /*12*/], true, 0, 1);
			}
		}
	}

	if (iLocal_624 == 0)
	{
		if (iLocal_656 > 114)
		{
			if (func_318(uLocal_574[2 /*12*/]) && func_318(uLocal_574[3 /*12*/]))
			{
				for (j = 2; j <= 3; j = j + 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_574[j /*12*/].f_5, 0.7f, 20000, 1f, 1, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_574[j /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_574[j /*12*/], iLocal_180);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
				}
			
				TASK::TASK_LOOK_AT_ENTITY(uLocal_574[2 /*12*/], uLocal_574[3 /*12*/], -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_574[3 /*12*/], uLocal_574[2 /*12*/], -1, 0, 2);
			}
		
			if (func_318(pedLocal_647))
				TASK::CLEAR_PED_TASKS(pedLocal_647);
		
			iLocal_624 = 1;
		}
	}
	else
	{
		for (k = 2; k <= 3; k = k + 1)
		{
			if (func_318(uLocal_574[k /*12*/]) && PED::IS_PED_RAGDOLL(uLocal_574[k /*12*/]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_574[k /*12*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
			
				if (func_44(uLocal_574[k /*12*/], PLAYER::PLAYER_PED_ID(), true) < func_44(uLocal_574[k /*12*/], pedLocal_347, true))
				{
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_347, -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_347, 0);
				}
			
				TASK::TASK_PAUSE(0, 3000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_574[k /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_574[k /*12*/], iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			}
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_574[k /*12*/]))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_574[k /*12*/]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_574[k /*12*/]);
					TASK::TASK_SMART_FLEE_PED(uLocal_574[k /*12*/], PLAYER::PLAYER_PED_ID(), 200f, -1, true, false);
					func_299(&uLocal_574[k /*12*/], true, 0, 1);
				}
			}
		}
	}

	return;
}

void func_299(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x2ADB6
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

int func_300() // Position - 0x2AE06
{
	int point;

	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_653, func_301(), &point);
	return point;
}

Vector3 func_301() // Position - 0x2AE1E
{
	var coord;

	func_302();

	if (iLocal_657 < iLocal_655 - 1)
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_653, iLocal_657 + 1, &coord);
	else
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_653, iLocal_655 - 1, &coord);

	return coord;
}

void func_302() // Position - 0x2AE5A
{
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_653))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_653, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iLocal_656);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_653, ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), &iLocal_657);
	
		if (iLocal_707 < iLocal_675)
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_653, iLocal_656, &uLocal_658);
	}

	return;
}

float func_303(Ped pedParam0, Ped pedParam1) // Position - 0x2AEAA
{
	return func_44(pedParam0, pedParam1, true);
}

void func_304() // Position - 0x2AEBB
{
	caLocal_457 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	CAM::SET_CAM_PARAMS(caLocal_457, -2006.404f, -505.1258f, 12.1679f, -8.411f, 0f, -152.3152f, 50f, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_ACTIVE(caLocal_457, true);
	return;
}

void func_305(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12) // Position - 0x2AF0D
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_PLAYING(playerIndex))
	{
		func_308(false);
	
		if (bParam9)
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
	
		if (bParam8)
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					if (func_215(PLAYER::PLAYER_PED_ID(), 8, 15))
						func_101(PLAYER::PLAYER_PED_ID(), 8, PV_COMP_HEAD, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				
					if (func_215(PLAYER::PLAYER_PED_ID(), PV_COMP_TASK, PV_COMP_FEET))
						func_101(PLAYER::PLAYER_PED_ID(), 9, PV_COMP_HEAD, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			
				case CHAR_FRANKLIN:
					if (func_215(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_BERD) || func_215(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_DECL))
						func_101(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			
				case CHAR_TREVOR:
					if (func_215(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_LOWR))
						func_101(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			}
		}
	
		if (iParam6 == 1)
			MISC::CLEAR_AREA_OF_PEDS(_GET_PLAYER_COORDS(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
	
		if (iParam7 == 1)
			MISC::CLEAR_AREA_OF_OBJECTS(fParam0, 30f, 0);
	
		if (bParam10)
			FIRE::STOP_FIRE_IN_RANGE(fParam0, 30f);
	
		MISC::CLEAR_AREA_OF_PROJECTILES(fParam0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(playerIndex, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(playerIndex, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerIndex, true);
	
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
	
		HUD::CLEAR_PRINTS();
	
		if (iParam11 == 1)
			HUD::CLEAR_HELP(true);
	
		if (iParam3 == 1)
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
	
		if (iParam4 == 1)
		{
			hLocal_37 = 0;
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				hLocal_37 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
	
		if (iParam5 == 1)
			func_306(500, false);
	}

	return;
}

void func_306(int iParam0, BOOL bParam1) // Position - 0x2B0CB
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		if (!CAM::IS_SCREEN_FADING_IN())
			CAM::DO_SCREEN_FADE_IN(iParam0);

	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}

	return;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x2B107
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_308(BOOL bParam0) // Position - 0x2B11A
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!PLAYER::IS_PLAYER_DEAD(playerIndex))
	{
		if (bParam0)
		{
		}
	
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_EXPLOSIONS);
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_PROJECTILES);
	}

	func_276(true, true, false, false, false, false, false);
	return;
}

void func_309(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, var uParam11, var uParam12, var uParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x2B159
{
	func_310(fParam0, fParam3, fParam6, fParam7, fParam10, uParam11, bParam14, bParam15, bParam16, bParam17, bParam18);
	return;
}

void func_310(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, Vector3 vParam7, var uParam8, var uParam9, float fParam10, float fParam11, var uParam12, var uParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x2B183
{
	Vehicle playersLastVehicle;
	BOOL flag;
	BOOL flag2;
	int num;
	var out1;
	float unk;
	var unk2;
	Hash out2;
	Ped unk3;
	int unk4;

	if (bParam15)
		bParam15 = false;

	flag2 = true;
	num = 0;
	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
			num = 1;
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
		{
			if (bParam18)
				func_316(playersLastVehicle);
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(playersLastVehicle, vParam0, vParam3, fParam6, false, true, 0))
			{
				flag = true;
			}
			else
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true) };
			
				if (entityCoords.f_2 > vParam0.f_2 && entityCoords.f_2 < vParam3.f_2 || entityCoords.f_2 > vParam3.f_2 && entityCoords.f_2 < vParam0.f_2)
					if (func_314(playersLastVehicle, vParam0, vParam3, fParam6))
						flag = true;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(playersLastVehicle, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS((vParam0 + vParam3) / { 2f, 2f, 2f }, ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true) < 20f)
						{
							flag = true;
							flag2 = false;
						}
					}
				}
			}
		
			if (bParam16)
				if (func_312(playersLastVehicle, _GET_CURRENT_PLAYER_CHARACTER(), true))
					flag = false;
		
			if (flag)
			{
				if (!_IS_NULL_VECTOR(fParam11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);
						VEHICLE::GET_VEHICLE_SIZE(playersLastVehicle, &out1, &out2);
					
						if (VEHICLE::IS_THIS_MODEL_A_HELI(entityModel))
						{
							fParam11 = fParam11 + 3f;
							fParam11.f_1 = fParam11.f_1 + 3f;
						}
					
						if (entityModel == joaat("zentorno") || entityModel == joaat("btype") || entityModel == joaat("dubsta3") || entityModel == joaat("monster"))
							fParam11 = { fParam11 * { 1.1f, 1.1f, 1.1f } };
						else if (entityModel == joaat("t20") || entityModel == joaat("virgo"))
							fParam11 = { fParam11 * { 1.2f, 1.2f, 1.2f } };
					
						if (out2 - out1 > fParam11)
							flag2 = false;
						else if (out2.f_1 - out1.f_1 > fParam11.f_1)
							flag2 = false;
						else if (out2.f_2 - out1.f_2 > fParam11.f_2)
							flag2 = false;
					}
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
				{
					if (flag2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(vParam7, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fParam10);
						ENTITY::SET_ENTITY_COORDS(playersLastVehicle, vParam7, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
					
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(playersLastVehicle, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(playersLastVehicle, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(playersLastVehicle, true))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
					
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true, false, false, true);
					
						VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
					}
				}
			}
		
			if (bParam14)
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam3, fParam6, false, false, false, false, false, 0, 0);
		
			if (num == 1)
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&playersLastVehicle);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
		
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
				ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
		
			vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle));
		
			if (vehicleModelNumberOfSeats <= 2)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 0, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			}
		
			if (vehicleModelNumberOfSeats <= 4)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 1, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 2, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			}
		
			VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
		}
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2B579
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_312(Vehicle veParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x2B5A3
{
	int i;
	var garageName;
	int unk;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_313(echParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113969.f_7232[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_313(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x2B611
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

BOOL func_314(Vehicle veParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x2B6EA
{
	float num;
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;
	var unk6;
	float unk7;
	float unk8;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1.f_2 = uParam4.f_2;
		num = { func_53(uParam1 - uParam4) };
		unk3 = { num };
		unk18 = 4;
		num = -unk3.f_1;
		num.f_1 = unk3;
		num.f_2 = 0f;
		unk6 = { uParam1 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk9 = { uParam1 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk12 = { uParam4 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk15 = { uParam4 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veParam0), &minimum, &maximum);
		unk18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, minimum.f_1, 0f) };
		unk18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, maximum.f_1, 0f) };
		unk18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, minimum.f_1, 0f) };
		unk18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, maximum.f_1, 0f) };
	
		if (func_315(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk9) || func_315(unk18[0 /*3*/], unk18[1 /*3*/], unk9, unk15) || func_315(unk18[0 /*3*/], unk18[1 /*3*/], unk12, unk15) || func_315(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk12) || func_315(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk9) || func_315(unk18[1 /*3*/], unk18[3 /*3*/], unk9, unk15) || func_315(unk18[1 /*3*/], unk18[3 /*3*/], unk12, unk15) || func_315(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk12) || func_315(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk9) || func_315(unk18[3 /*3*/], unk18[2 /*3*/], unk9, unk15) || func_315(unk18[3 /*3*/], unk18[2 /*3*/], unk12, unk15) || func_315(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk12) || func_315(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk9) || func_315(unk18[2 /*3*/], unk18[0 /*3*/], unk9, unk15) || func_315(unk18[2 /*3*/], unk18[0 /*3*/], unk12, unk15) || func_315(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk12))
			return true;
	}

	return false;
}

BOOL func_315(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0x2B9E0
{
	float num;
	float num2;
	float num3;
	float num4;
	var unk;
	var unk2;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;

	num = fParam0;
	num2 = fParam0.f_1;
	num3 = fParam3;
	num4 = fParam3.f_1;
	unk = uParam6;
	unk2 = uParam6.f_1;
	num5 = fParam9;
	num6 = fParam9.f_1;
	num7 = num3 - num;
	num8 = num4 - num2;
	num9 = num5 - unk;
	num10 = num6 - unk2;
	num11 = ((-num8 * (num - unk)) + (num7 * (num2 - unk2))) / ((-num9 * num8) + (num7 * num10));
	num12 = ((num9 * (num2 - unk2)) - (num10 * (num - unk))) / ((-num9 * num8) + (num7 * num10));

	if (num11 >= 0f && num11 <= 1f && num12 >= 0f && num12 <= 1f)
		return true;

	return false;
}

void func_316(Vehicle veParam0) // Position - 0x2BA94
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veParam0) <= 200f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
		
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veParam0) <= 700f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 900f);
		
			if (ENTITY::GET_ENTITY_HEALTH(veParam0) < 200)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
		}
	}

	return;
}

Vector3 func_317() // Position - 0x2BAF9
{
	return 2.55f, 5.665f, 2.55f;
}

BOOL func_318(Ped pedParam0) // Position - 0x2BB10
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

void STAGE_PLAYER_IN_VEHICLE() // Position - 0x2BB30
{
	switch (iLocal_155)
	{
		case 0:
			_DEBUG_PRINT("SETUP PLAYER IN VEHICLE STATE");
		
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(false);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_670))
				HUD::SET_BLIP_ALPHA(blLocal_670, 0);
		
			HUD::CLEAR_PRINTS();
		
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(pedLocal_347))
				TASK::WAYPOINT_PLAYBACK_PAUSE(pedLocal_347, true, false);
		
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(pedLocal_347, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 3f, -1, 3f, true);
			iLocal_713 = MISC::GET_GAME_TIMER();
		
			if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				_DEBUG_PRINT("stop scripted conversation at STAGE_PLAYER_IN_VEHICLE");
				func_37();
			}
		
			bLocal_360 = true;
			_DEBUG_PRINT("STARTING PLAYER IN VEHICLE LOOP");
			iLocal_155 = 1;
			break;
	
		case 1:
			if (bLocal_360)
			{
				if (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) < 4f)
				{
					TASK::CLEAR_PED_TASKS(pedLocal_347);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_347, PLAYER::PLAYER_PED_ID(), -1);
					bLocal_360 = false;
				}
			}
			else if (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) > 5f)
			{
				TASK::CLEAR_PED_TASKS(pedLocal_347);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(pedLocal_347, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 3f, -1, 3f, true);
				bLocal_360 = true;
			}
		
			if (MISC::GET_GAME_TIMER() - iLocal_713 > 4000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
				iLocal_158 = 3;
				iLocal_155 = 0;
				iLocal_156 = 10;
			}
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				HUD::CLEAR_PRINTS();
			
				if (!MISC::IS_STRING_NULL(sLocal_653))
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_653))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_301(), 3f, 20000, 1048576000, 0, 1193033728);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_653, func_300(), 1040, -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
					}
				}
			
				iLocal_155 = 1;
				iLocal_156 = iLocal_157;
			
				if (HUD::DOES_BLIP_EXIST(blLocal_670))
					HUD::SET_BLIP_ALPHA(blLocal_670, 255);
			
				AUDIO::RESTART_SCRIPTED_CONVERSATION();
			}
			break;
	}

	return;
}

void func_320() // Position - 0x2BCFE
{
	switch (iLocal_155)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(blLocal_348))
			{
				blLocal_348 = func_322(pedLocal_347, true, true, 5);
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_348, true);
			}
		
			iLocal_155 = 1;
			break;
	
		case 1:
			func_321();
			func_298();
			break;
	}

	return;
}

void func_321() // Position - 0x2BD4A
{
	if (!func_7(pedLocal_447))
	{
		STREAMING::REQUEST_MODEL(hLocal_452);
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_452))
		{
			pedLocal_447 = VEHICLE::CREATE_VEHICLE(hLocal_452, uLocal_448, fLocal_451, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_452);
		}
	}

	return;
}

Blip func_322(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x2BD8A
{
	Blip blip;
	BOOL flag;

	blip = 0;
	flag = true;

	if (flag)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		{
			blip = HUD::ADD_BLIP_FOR_ENTITY(pedParam0);
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam2);
			HUD::SET_BLIP_PRIORITY(blip, iParam3);
			HUD::SET_BLIP_SCALE(blip, 0.7f);
		
			if (!bParam1)
				HUD::SET_BLIP_SCALE(blip, 0.5f);
		}
	}

	return blip;
}

void SPRINT_TO_FINISH() // Position - 0x2BDDC
{
	var unk;

	switch (iLocal_155)
	{
		case 0:
			_DEBUG_PRINT("SETUP SPRINT_TO_FINISH");
		
			if (!HUD::DOES_BLIP_EXIST(blLocal_348))
			{
				blLocal_348 = func_322(pedLocal_347, true, true, 5);
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_348, true);
			}
		
			iLocal_652 = 0;
			iLocal_155 = 1;
			_DEBUG_PRINT("GOING INTO SPRINT_TO_FINISH MAIN LOOP");
			break;
	
		case 1:
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
		
			if (sLocal_427.f_2 == 0 && iLocal_657 < 105)
			{
				if (func_336() && func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) < 25f)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", sLocal_427, 7, 0, 0, 0))
					{
						sLocal_427.f_2 = 1;
						TASK::TASK_PLAY_ANIM(pedLocal_347, "rcmfanatic1yell", "yell_c", 8f, -8f, -1, 48, 0, false, false, false);
					}
				}
			}
		
			if (func_334(sLocal_427))
				if (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) > 30f)
					func_15();
		
			func_332();
			func_321();
			func_330();
			func_326();
			func_298();
		
			if (iLocal_370 < 3 && iLocal_657 < 117 && iLocal_656 < 117)
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					if (MISC::GET_GAME_TIMER() - iLocal_711 > 3000)
						if (CAN_MARY_ANN_SAY_SINGLE_LINE("FAN1_FAST", uLocal_371[iLocal_370], false, &unk))
							iLocal_370 = iLocal_370 + 1;
				else
					iLocal_711 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

BOOL CAN_MARY_ANN_SAY_SINGLE_LINE(char* sParam0, char* sParam1, BOOL bParam2, var uParam3) // Position - 0x2BF3A
{
	if (iLocal_346 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (bParam2)
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				*uParam3 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				_DEBUG_PRINT("Stopping scripted convo at can Mary Ann say single line");
				func_37();
				HUD::CLEAR_PRINTS();
			}
		
			if (func_325(&uLocal_181, "FAN1AU", sParam0, sParam1, 7, 0, 0))
				return true;
		}
		else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			if (func_325(&uLocal_181, "FAN1AU", sParam0, sParam1, 7, 0, 0))
				return true;
		}
	}

	return false;
}

BOOL func_325(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2BFB1
{
	func_14(uParam0, _CHAR_NULL, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_22293 = false;
	Global_22300 = false;
	Global_22295 = false;
	Global_23277 = 1;
	Global_23279 = false;
	Global_23283 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_18(sParam2, iParam4, false);
}

void func_326() // Position - 0x2C007
{
	switch (iLocal_721)
	{
		case 0:
			if (func_329())
			{
				_DEBUG_PRINT("CPR scene resources loaded - progressing");
				func_328(true);
				iLocal_721 = 1;
			}
			break;
	
		case 1:
			if (iLocal_707 >= 7)
			{
				if (func_7(pedLocal_629))
				{
					if (func_318(pedLocal_625) && func_318(pedLocal_626))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, pedLocal_629, "Fanatic1Quad", 16, 14, 0, -1, -1082130432, false, 1073741824);
						TASK::TASK_LEAVE_VEHICLE(0, pedLocal_629, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_626, -1, 0, 2);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_626, true), 1.8f, 20000, 1193033728, 1056964608);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_625, iLocal_180);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(pedLocal_629, 5f);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&pedLocal_629);
						iLocal_721 = 2;
					}
				}
			}
			break;
	
		case 2:
			if (func_318(pedLocal_625) && func_318(pedLocal_626))
			{
				if (PED::IS_PED_RAGDOLL(pedLocal_626))
					iLocal_721 = 6;
			
				if (func_44(pedLocal_626, pedLocal_625, true) < 2f)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_625, true);
					iLocal_639 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_633, uLocal_636, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_625, iLocal_639, "mini@cpr@char_a@cpr_def", "cpr_intro", 4f, -8f, 1, 0, 4f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_626, iLocal_639, "mini@cpr@char_b@cpr_def", "cpr_intro", 8f, -8f, 4, 0, 1148846080, 0);
					iLocal_721 = 3;
				}
			}
			break;
	
		case 3:
			if (func_318(pedLocal_625) && func_318(pedLocal_626))
			{
				if (PED::IS_PED_RAGDOLL(pedLocal_625) || PED::IS_PED_RAGDOLL(pedLocal_626))
				{
					iLocal_721 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_639) > 0.99f)
				{
					iLocal_639 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_633, uLocal_636, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_625, iLocal_639, "mini@cpr@char_a@cpr_str", "cpr_pumpchest", 8f, -8f, 1, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_626, iLocal_639, "mini@cpr@char_b@cpr_str", "cpr_pumpchest", 8f, -8f, 4, 0, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_639, true);
					iLocal_721 = 4;
				}
			
				if (func_327())
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_639) > 0.23f)
					{
						iLocal_721 = 5;
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_625, iLocal_180);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
					
						if (func_318(pedLocal_627))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
							TASK::TASK_PAUSE(0, 200);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_627, iLocal_180);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
						}
					
						if (func_318(pedLocal_628))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
							TASK::TASK_PAUSE(0, 500);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_628, iLocal_180);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
						}
					
						iLocal_721 = 8;
					}
				}
			}
			break;
	
		case 4:
			if (func_318(pedLocal_625) && func_318(pedLocal_626))
				if (PED::IS_PED_RAGDOLL(pedLocal_625) || PED::IS_PED_RAGDOLL(pedLocal_626))
					iLocal_721 = 6;
				else if (func_327())
					iLocal_721 = 5;
			break;
	
		case 5:
			if (func_318(pedLocal_625) && !PED::IS_PED_FLEEING(pedLocal_625))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "KNEEL_EXIT", 4f, -8f, -1, 8192, 0, false, false, false);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_625, iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			}
		
			if (func_318(pedLocal_627) && !PED::IS_PED_FLEEING(pedLocal_627))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
				TASK::TASK_PAUSE(0, 200);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_627, iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			}
		
			if (func_318(pedLocal_628) && !PED::IS_PED_FLEEING(pedLocal_628))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
				TASK::TASK_PAUSE(0, 500);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_628, iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			}
		
			if (func_318(pedLocal_626))
				ENTITY::SET_ENTITY_HEALTH(pedLocal_626, 0, 0, 0);
		
			iLocal_721 = 8;
			break;
	
		case 6:
			if (func_318(pedLocal_625))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_625, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
			
				if (!PED::IS_PED_RAGDOLL(pedLocal_625))
					TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "KNEEL_EXIT", 4f, -8f, -1, 8192, 0, false, false, false);
			
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_626, -1, 0, 2);
			
				if (func_44(pedLocal_625, pedLocal_626, true) > 2f)
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_626, true), 1f, 20000, 1.5f, 0, 1193033728);
			
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_626, 0);
				TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 10000);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_625, iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			}
		
			if (func_318(pedLocal_627))
			{
				TASK::STOP_ANIM_PLAYBACK(pedLocal_627, 0, false);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_627, pedLocal_626, 2000, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_627, pedLocal_626, 0);
				func_299(&pedLocal_627, true, 0, 1);
			}
		
			if (func_318(pedLocal_628))
			{
				TASK::STOP_ANIM_PLAYBACK(pedLocal_628, 0, false);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_628, pedLocal_626, 2000, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_628, pedLocal_626, 0);
				func_299(&pedLocal_628, true, 0, 1);
			}
		
			if (func_318(pedLocal_626))
				ENTITY::SET_ENTITY_HEALTH(pedLocal_626, 0, 0, 0);
		
			iLocal_721 = 7;
			break;
	
		case 7:
			if (func_318(pedLocal_625))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_625, SCRIPT_TASK_DUCK) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_625, SCRIPT_TASK_DUCK) != 0 && PED::IS_PED_RAGDOLL(pedLocal_625))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_626, -1, 0, 2);
				
					if (func_44(pedLocal_625, pedLocal_626, true) > 2f)
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_626, true), 1f, 20000, 1.5f, 0, 1193033728);
				
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_626, 0);
					TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 10000);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_625, iLocal_180);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
				}
			}
		
			if (func_327())
			{
				if (func_318(pedLocal_625) && !PED::IS_PED_FLEEING(pedLocal_625))
					TASK::TASK_SMART_FLEE_PED(pedLocal_625, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
			
				if (func_318(pedLocal_627) && !PED::IS_PED_FLEEING(pedLocal_627))
					TASK::TASK_SMART_FLEE_PED(pedLocal_627, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
			
				if (func_318(pedLocal_628) && !PED::IS_PED_FLEEING(pedLocal_628))
					TASK::TASK_SMART_FLEE_PED(pedLocal_628, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
			
				iLocal_721 = 8;
			}
			break;
	
		case 8:
			break;
	}

	if (func_318(pedLocal_627) && !PED::IS_PED_FLEEING(pedLocal_627))
	{
		if (PED::IS_PED_RAGDOLL(pedLocal_627))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_627);
			func_299(&pedLocal_627, true, 0, 1);
		}
	}

	if (func_318(pedLocal_628) && !PED::IS_PED_FLEEING(pedLocal_628))
	{
		if (PED::IS_PED_RAGDOLL(pedLocal_628))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_628);
			func_299(&pedLocal_628, true, 0, 1);
		}
	}

	if (func_318(pedLocal_626))
		EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(EVENT_SHOCKING_DEAD_BODY, pedLocal_626, 1f);

	return;
}

BOOL func_327() // Position - 0x2C7A6
{
	if (func_58(pedLocal_625, true, 1116471296, 1126825984, false, false, false, false) || func_58(pedLocal_626, true, 1116471296, 1126825984, false, false, false, false) || func_58(pedLocal_627, true, 1116471296, 1126825984, false, false, false, false) || func_58(pedLocal_628, true, 1116471296, 1126825984, false, false, false, false))
		return true;

	return false;
}

void func_328(BOOL bParam0) // Position - 0x2C820
{
	if (!func_7(pedLocal_629))
	{
		PATHFIND::SET_PED_PATHS_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, false, 0);
		PATHFIND::DISABLE_NAVMESH_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, true);
	
		if (iLocal_641 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_641);
			iLocal_641 = -1;
		}
	
		iLocal_641 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1870.54f, -628.1f, 10.09f, 4f, 4f, 4f, 0f, false, 7);
		iLocal_641 == -1;
		pedLocal_626 = PED::CREATE_PED(PED_TYPE_CIVMALE, joaat("A_M_M_Beach_01"), -1870.54f, -628.1f, 10.09f, 80f, true, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_626, true, 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_626);
		PED::SET_PED_MONEY(pedLocal_626, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_626, true);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_626, false);
		uLocal_633 = { ENTITY::GET_ENTITY_COORDS(pedLocal_626, true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(pedLocal_626, true), &(uLocal_633.f_2), false, false);
		uLocal_636 = { ENTITY::GET_ENTITY_ROTATION(pedLocal_626, 2) };
		iLocal_640 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_633, uLocal_636, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_626, iLocal_640, "mini@cpr@char_b@cpr_def", "cpr_intro", 8f, -8f, 0, 16, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_640, 0f);
		pedLocal_627 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, joaat("A_F_Y_Beach_01"), -1869.76f, -627.7f, 10.1f, 0, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_627, BF_AlwaysFlee, true);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_626, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 4f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_C", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_180, true);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_627, iLocal_180);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
		pedLocal_628 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, joaat("A_F_Y_Beach_01"), -1873.61f, -628.88f, 11.16f, 0, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_628, BF_AlwaysFlee, true);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_626, 0);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 4f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_a", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_180, true);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_628, iLocal_180);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
	
		if (bParam0)
		{
			pedLocal_629 = VEHICLE::CREATE_VEHICLE(joaat("blazer2"), uLocal_630, 36.64f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(pedLocal_629, 1084227584);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_629, true, 1);
			pedLocal_625 = PED::CREATE_PED_INSIDE_VEHICLE(pedLocal_629, PED_TYPE_MEDIC, joaat("S_M_Y_BayWatch_01"), -1, true, true);
			iLocal_721 = 1;
		}
		else
		{
			pedLocal_629 = VEHICLE::CREATE_VEHICLE(joaat("blazer2"), -1871.55f, -640.01f, 10.65f, 297.76f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(pedLocal_629, 1084227584);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_629, true, 1);
			pedLocal_625 = PED::CREATE_PED_INSIDE_VEHICLE(pedLocal_629, PED_TYPE_CIVMALE, joaat("S_M_Y_BayWatch_01"), -1, true, true);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
			TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_626, -1, 0, 2);
			TASK::TASK_LEAVE_VEHICLE(0, pedLocal_629, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_626, true), 1.8f, 20000, 1048576000, 0, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_625, iLocal_180);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			iLocal_721 = 2;
		}
	
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_625, BF_AlwaysFlee, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_625, true, 1);
		PED::SET_PED_KEEP_TASK(pedLocal_626, true);
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BayWatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Beach_01"));
	return;
}

BOOL func_329() // Position - 0x2CD5B
{
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_a@cpr_def");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_b@cpr_def");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_a@cpr_str");
	STREAMING::REQUEST_ANIM_DICT("mini@cpr@char_b@cpr_str");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
	TASK::REQUEST_WAYPOINT_RECORDING("Fanatic1Quad");
	STREAMING::REQUEST_MODEL(joaat("blazer2"));
	STREAMING::REQUEST_MODEL(joaat("A_F_Y_Beach_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_BayWatch_01"));
	STREAMING::REQUEST_MODEL(joaat("A_M_M_Beach_01"));

	if (STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_a@cpr_def") && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_b@cpr_def") && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_a@cpr_str") && STREAMING::HAS_ANIM_DICT_LOADED("mini@cpr@char_b@cpr_str") && STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1Quad") && STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Beach_01")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BayWatch_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Beach_01")) && STREAMING::HAS_MODEL_LOADED(joaat("blazer2")))
		return true;

	return false;
}

void func_330() // Position - 0x2CE40
{
	if (func_318(pedLocal_647))
	{
		switch (iLocal_652)
		{
			case 0:
				if (func_331())
				{
					if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_647))
					{
						pedLocal_647 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("A_C_Rottweiler"), uLocal_648, fLocal_651, true, true);
						PED::SET_PED_CAN_RAGDOLL(pedLocal_647, true);
					}
				
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rottweiler"));
					_DEBUG_PRINT("Loaded and created dog - progressing");
					iLocal_652 = 1;
				}
				break;
		
			case 1:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (iLocal_656 == 109)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(pedLocal_647, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 2.5f, -1, 0.2f, true);
						iLocal_652 = 2;
					}
				}
				break;
		}
	}

	return;
}

BOOL func_331() // Position - 0x2CEEA
{
	STREAMING::REQUEST_MODEL(joaat("A_C_Rottweiler"));

	if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_Rottweiler")))
		return true;

	return false;
}

void func_332() // Position - 0x2CF0C
{
	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(uLocal_574[0 /*12*/]))
	{
		STREAMING::REQUEST_MODEL(hLocal_623);
		STREAMING::REQUEST_MODEL(joaat("A_M_Y_Beach_01"));
		STREAMING::REQUEST_MODEL(joaat("A_F_Y_Beach_01"));
	
		if (STREAMING::HAS_MODEL_LOADED(hLocal_623) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Beach_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Beach_01")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_574[0 /*12*/]))
			{
				uLocal_574[0 /*12*/].f_2 = { -1951.48f, -556.16f, 11.71f };
				uLocal_574[0 /*12*/].f_11 = -121.42f;
				uLocal_574[0 /*12*/].f_5 = { -1910.1f, -591.56f, 10.67f };
				uLocal_574[0 /*12*/].f_8 = { -1843.73f, -649.16f, 9.53f };
				uLocal_574[0 /*12*/].f_1 = hLocal_623;
				uLocal_574[0 /*12*/] = PED::CREATE_PED(PED_TYPE_CIVFEMALE, uLocal_574[0 /*12*/].f_1, uLocal_574[0 /*12*/].f_2, uLocal_574[0 /*12*/].f_11, true, true);
				PED::SET_PED_COMBAT_MOVEMENT(uLocal_574[0 /*12*/], CM_WillRetreat);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_574[0 /*12*/], BF_AlwaysFlee, true);
				func_333(uLocal_574[0 /*12*/]);
			
				if (func_318(uLocal_574[0 /*12*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_574[0 /*12*/].f_5, 2f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_574[0 /*12*/].f_8, 2f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_574[0 /*12*/], iLocal_180);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
				}
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_574[1 /*12*/]))
			{
				uLocal_574[1 /*12*/].f_2 = { -1953.85f, -555.66f, 11f };
				uLocal_574[1 /*12*/].f_11 = -121.42f;
				uLocal_574[1 /*12*/].f_5 = { -1911.54f, -591.7f, 10.61f };
				uLocal_574[1 /*12*/].f_8 = { -1839.87f, -651.49f, 9.53f };
				uLocal_574[1 /*12*/].f_1 = hLocal_623;
				uLocal_574[1 /*12*/] = PED::CREATE_PED(PED_TYPE_CIVFEMALE, uLocal_574[1 /*12*/].f_1, uLocal_574[1 /*12*/].f_2, uLocal_574[1 /*12*/].f_11, true, true);
				PED::SET_PED_COMBAT_MOVEMENT(uLocal_574[1 /*12*/], CM_WillRetreat);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_574[1 /*12*/], BF_AlwaysFlee, true);
			
				if (func_318(uLocal_574[1 /*12*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_574[1 /*12*/].f_5, 2.05f, 20000, 1048576000, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_574[1 /*12*/].f_8, 2.05f, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_574[1 /*12*/], iLocal_180);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
				}
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_574[2 /*12*/]))
			{
				uLocal_574[2 /*12*/].f_2 = { -1999.4f, -508.02f, 11f };
				uLocal_574[2 /*12*/].f_11 = 167.3f;
				uLocal_574[2 /*12*/].f_5 = { -1997.21f, -517.17f, 10.73f };
				uLocal_574[2 /*12*/].f_8 = { -1961.31f, -547.96f, 10.7f };
				uLocal_574[2 /*12*/].f_1 = joaat("A_F_Y_Beach_01");
				uLocal_574[2 /*12*/] = PED::CREATE_PED(PED_TYPE_CIVFEMALE, uLocal_574[2 /*12*/].f_1, uLocal_574[2 /*12*/].f_2, uLocal_574[2 /*12*/].f_11, true, true);
				PED::SET_PED_COMBAT_MOVEMENT(uLocal_574[2 /*12*/], CM_WillRetreat);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_574[2 /*12*/], BF_AlwaysFlee, true);
				func_333(uLocal_574[2 /*12*/]);
			}
			else if (func_318(uLocal_574[2 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_574[2 /*12*/]);
				ENTITY::SET_ENTITY_COORDS(uLocal_574[2 /*12*/], uLocal_574[2 /*12*/].f_2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uLocal_574[2 /*12*/], uLocal_574[2 /*12*/].f_11);
				func_333(uLocal_574[2 /*12*/]);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_574[3 /*12*/]))
			{
				uLocal_574[3 /*12*/].f_2 = { -2000.19f, -507.37f, 11f };
				uLocal_574[3 /*12*/].f_11 = 83.65f;
				uLocal_574[3 /*12*/].f_5 = { -1998.27f, -517.46f, 10.67f };
				uLocal_574[3 /*12*/].f_8 = { -1962.75f, -549.56f, 10.62f };
				uLocal_574[3 /*12*/].f_1 = joaat("A_M_Y_Beach_01");
				uLocal_574[3 /*12*/] = PED::CREATE_PED(PED_TYPE_CIVMALE, uLocal_574[3 /*12*/].f_1, uLocal_574[3 /*12*/].f_2, uLocal_574[3 /*12*/].f_11, true, true);
				PED::SET_PED_COMBAT_MOVEMENT(uLocal_574[3 /*12*/], CM_WillRetreat);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_574[3 /*12*/], BF_AlwaysFlee, true);
				func_333(uLocal_574[3 /*12*/]);
			}
			else if (func_318(uLocal_574[3 /*12*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_574[3 /*12*/]);
				ENTITY::SET_ENTITY_COORDS(uLocal_574[3 /*12*/], uLocal_574[3 /*12*/].f_2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uLocal_574[3 /*12*/], uLocal_574[3 /*12*/].f_11);
				func_333(uLocal_574[3 /*12*/]);
			}
		
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Beach_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_623);
		}
	}

	return;
}

void func_333(Ped pedParam0) // Position - 0x2D3CE
{
	float entityCoords;
	float unk;

	if (func_318(pedParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false);
		ENTITY::SET_ENTITY_COORDS(pedParam0, entityCoords, entityCoords.f_1, groundZ, true, false, false, true);
	}

	return;
}

BOOL func_334(char* sParam0) // Position - 0x2D409
{
	var string1;

	string1 = { func_335() };

	if (MISC::ARE_STRINGS_EQUAL(&string1, sParam0))
		return true;

	return false;
}

struct<6> func_335() // Position - 0x2D429
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_22286 == 4)
		return Global_21905;

	return unk;
}

BOOL func_336() // Position - 0x2D44D
{
	if (iLocal_346 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED() && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		return true;

	return false;
}

void STEPS_DOWN() // Position - 0x2D479
{
	switch (iLocal_155)
	{
		case 0:
			_DEBUG_PRINT("STEPS DOWN SETUP");
		
			if (!HUD::DOES_BLIP_EXIST(blLocal_348))
			{
				blLocal_348 = func_322(pedLocal_347, true, true, 5);
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_348, true);
			}
		
			PED::SET_PED_NON_CREATION_AREA(-1865.76f, -617.48f, 10.58f, -1820.57f, -552.41f, 17.4f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1865.76f, -617.48f, 10.58f, -1820.57f, -552.41f, 17.4f, false, 0);
		
			if (func_318(pedLocal_547))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_547);
				func_299(&pedLocal_547, true, 0, 1);
			}
		
			if (func_7(pedLocal_547.f_2))
				func_343(&(pedLocal_547.f_2));
		
			_DEBUG_PRINT("GOING INTO STEPS_DOWN MAIN LOOP");
			iLocal_155 = 1;
			break;
	
		case 1:
			func_326();
			func_340();
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
		
			if (iLocal_166 == 0)
				func_339();
		
			if (func_338(uLocal_664))
			{
				fLocal_354 = 1.15f;
				iLocal_155 = 0;
				iLocal_156 = 5;
			}
			break;
	}

	return;
}

BOOL func_338(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2D578
{
	if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_347, vParam0, 3f, 3f, 2f, false, true, 0))
		return true;

	return false;
}

void func_339() // Position - 0x2D599
{
	if (iLocal_166 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1827.5304f, -538.1213f, 21.83124f, -1805.926f, -555.6239f, 31.773228f, 2f, false, true, 0))
		{
			if (iLocal_346 == 0)
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					_DEBUG_PRINT("Stopping scripted convo at check if player jumps off cliff");
					func_15();
					HUD::CLEAR_PRINTS();
				}
			
				if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_5", 7, 0, 0, 0))
				{
					iLocal_159 = 1;
					iLocal_166 = 1;
				}
			}
		
			Global_113969.f_18577.f_386 = 1;
		}
	}

	return;
}

void func_340() // Position - 0x2D617
{
	if (MISC::GET_GAME_TIMER() - iLocal_393 > 10000)
	{
		switch (iLocal_392)
		{
			case 0:
				func_342();
				break;
		
			case 1:
				func_341();
				break;
		
			case 2:
				func_342();
				break;
		
			case 3:
				func_341();
				break;
		
			case 4:
				func_342();
				break;
		
			case 5:
				func_341();
				break;
		
			case 6:
				func_342();
				break;
		
			case 7:
				func_341();
				break;
		
			case 8:
				func_342();
				break;
		
			case 9:
				func_341();
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_341() // Position - 0x2D6BA
{
	if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && iLocal_346 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_ONELIN", 7, 0, 0, 0))
		{
			iLocal_392 = iLocal_392 + 1;
			iLocal_393 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

void func_342() // Position - 0x2D701
{
	if (iLocal_654 == 2)
	{
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS() && iLocal_346 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_TAUNT", 7, 0, 0, 0))
			{
				iLocal_392 = iLocal_392 + 1;
				iLocal_393 = MISC::GET_GAME_TIMER();
			}
		}
	}

	return;
}

void func_343(Vehicle* pveParam0) // Position - 0x2D74F
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void ROAD_RUNNING_SECTION() // Position - 0x2D787
{
	int point;
	Vector3 offsetFromEntityInWorldCoords;
	Vehicle unk;

	switch (iLocal_155)
	{
		case 0:
			_DEBUG_PRINT("SETUP ROAD_RUNNING_SECTION");
		
			if (!HUD::DOES_BLIP_EXIST(blLocal_348))
			{
				blLocal_348 = func_322(pedLocal_347, true, true, 5);
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_348, true);
			}
		
			if (bLocal_165 == true)
				func_4(false);
		
			iLocal_166 = 0;
			iLocal_395 = MISC::GET_GAME_TIMER();
		
			if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			{
				_DEBUG_PRINT("stop scripted conversation at ROAD_RUNNING_SECTION");
				func_15();
			}
		
			if (func_7(pedLocal_561.f_2) && func_318(pedLocal_561))
			{
				ENTITY::SET_ENTITY_COORDS(pedLocal_561.f_2, -1934.15f, -438.19f, 19.6f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(pedLocal_561.f_2, 237.78f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(pedLocal_561.f_2, 1084227584);
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_561, pedLocal_561.f_2, pedLocal_561.f_8, 4, pedLocal_561.f_12, 786599, 3f, 3f, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_561, true, 1);
			}
		
			_DEBUG_PRINT("GOING INTO ROAD_RUNNING_SECTION LOOP");
			iLocal_560 = 1;
			iLocal_155 = 1;
			break;
	
		case 1:
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
		
			if (func_336())
			{
				if (sLocal_417.f_2 == 0)
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_653, ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), &point);
				
					if (point <= 52)
					{
						if (sLocal_437.f_2 == 0 && sLocal_432.f_2 == 0 && iLocal_654 == 2)
							_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", sLocal_417, 7, 0, 0, 0);
						else
							func_349(&uLocal_181, "FAN1AU", sLocal_417, "FAN1_RD1_3", 7, 0, 0);
					
						sLocal_417.f_2 = 1;
					}
				}
			}
		
			if (iLocal_560 == 1)
				if (iLocal_657 > 41)
					iLocal_560 = 2;
		
			if (sLocal_417.f_2 == 1 && sLocal_422.f_2 == 1)
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
				{
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_347, 0f, 6f, 0f) };
					closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(offsetFromEntityInWorldCoords, 8f, 0, 2);
				
					if (closestVehicle != 0)
					{
						if (iLocal_346 == 0 && iLocal_395 > 2000 && iLocal_394 < 5)
						{
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_RD3", 7, 0, 0, 0))
								{
									iLocal_394 = iLocal_394 + 1;
									iLocal_395 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else
					{
						closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(offsetFromEntityInWorldCoords, 8f, 0, 4);
					
						if (closestVehicle != 0)
						{
							if (iLocal_346 == 0 && iLocal_395 > 2000 && iLocal_394 < 5)
							{
								if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								{
									if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_RD3", 7, 0, 0, 0))
									{
										iLocal_394 = iLocal_394 + 1;
										iLocal_395 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			
				func_340();
			}
		
			func_339();
			func_345();
		
			if (iLocal_657 > 61)
			{
				iLocal_155 = 0;
				iLocal_156 = 4;
			}
			break;
	}

	return;
}

void func_345() // Position - 0x2DA29
{
	if (func_318(pedLocal_547.f_1) && func_7(pedLocal_547.f_2) && func_318(pedLocal_547))
	{
		switch (iLocal_560)
		{
			case 0:
				if (func_348())
				{
					_DEBUG_PRINT("Driveby scene resources loaded - progressing");
					iLocal_560 = 1;
				}
				break;
		
			case 1:
				break;
		
			case 2:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
				TASK::TASK_PAUSE(0, 1500);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, pedLocal_547.f_2, pedLocal_547.f_8, pedLocal_547.f_12, 0, pedLocal_547.f_4, 16, 10f, 10f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_547, iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
				iLocal_171 = 0;
				iLocal_560 = 3;
				break;
		
			case 3:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_547.f_2, true), ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), true) <= 45f)
				{
					if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						func_346();
				
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_547.f_2, true), ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), true) <= 20f)
					{
						if (iLocal_171 == 0)
						{
							VEHICLE::START_VEHICLE_HORN(pedLocal_547.f_2, 4500, 0, false);
						
							if (func_318(pedLocal_347))
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_347, pedLocal_547.f_2, 3000, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 2);
						
							iLocal_171 = 1;
						}
					
						if (iLocal_346 == 0)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", sLocal_422, 9, 0, 0, 0))
								{
									sLocal_422.f_2 = 1;
									_DEBUG_PRINT("Doing Mary Ann's anim...");
									TASK::TASK_PLAY_ANIM(pedLocal_347, "rcmfanatic1yell", "yell_d", 8f, -8f, -1, 48, 0, false, false, false);
									iLocal_560 = 4;
									iLocal_346 = 0;
								
									if (iLocal_349 == 1)
										iLocal_349 = 2;
								}
							}
						}
						else if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", sLocal_422, 9, 1, 0, 0))
						{
							sLocal_422.f_2 = 1;
							_DEBUG_PRINT("Doing Mary Ann's anim...");
							TASK::TASK_PLAY_ANIM(pedLocal_347, "rcmfanatic1yell", "yell_d", 8f, -8f, -1, 48, 0, false, false, false);
							iLocal_560 = 4;
							iLocal_346 = 1;
						
							if (iLocal_349 == 1)
								iLocal_349 = 2;
						}
					}
				}
				break;
		
			case 4:
				TASK::CLEAR_PED_TASKS(pedLocal_547);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, pedLocal_547.f_2, 6f, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_547, iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
				TASK::TASK_DRIVE_BY(pedLocal_547.f_1, pedLocal_347, 0, 0f, 0f, 0f, 25f, 100, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				iLocal_393 = MISC::GET_GAME_TIMER() - 3000;
				iLocal_560 = 5;
				break;
		
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_347, "rcmfanatic1yell", "yell_d", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_347, "rcmfanatic1yell", "yell_d") > 0.44f)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_347);
						iLocal_712 = MISC::GET_GAME_TIMER();
						iLocal_560 = 6;
						func_4(true);
					}
				}
				else
				{
					iLocal_712 = MISC::GET_GAME_TIMER();
					iLocal_560 = 6;
					func_4(true);
				}
				break;
		
			case 6:
				if (MISC::GET_GAME_TIMER() - iLocal_712 > 3000)
				{
					if (func_318(pedLocal_547))
					{
						if (func_7(pedLocal_547.f_2))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_547);
							TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_547);
							TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_547, pedLocal_547.f_2, 15f, 786613);
							PED::SET_PED_KEEP_TASK(pedLocal_547, true);
							func_299(&pedLocal_547, true, 0, 1);
							func_343(&(pedLocal_547.f_2));
						}
					}
				
					func_299(&(pedLocal_547.f_1), true, 0, 1);
					func_299(&pedLocal_561, true, 0, 1);
				
					if (func_318(pedLocal_561.f_1))
					{
						_DEBUG_PRINT("*** Clearing driveby task and releasing");
						TASK::CLEAR_PED_TASKS(pedLocal_561.f_1);
						func_299(&(pedLocal_561.f_1), true, 0, 1);
					}
				
					func_343(&(pedLocal_561.f_2));
				}
				break;
		}
	}

	return;
}

void func_346() // Position - 0x2DDA0
{
	Global_21152 = 0;
	func_347();
	return;
}

void func_347() // Position - 0x2DDB0
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23297 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}

	return;
}

BOOL func_348() // Position - 0x2DDD4
{
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::REQUEST_MODEL(joaat("banshee"));

	if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_SalvaGoon_01")) && STREAMING::HAS_MODEL_LOADED(joaat("banshee")))
		return true;

	return false;
}

BOOL func_349(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2DE0D
{
	func_14(uParam0, _CHAR_NULL, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_22293 = false;
	Global_22300 = false;
	Global_22295 = false;
	Global_23277 = 0;
	Global_23279 = false;
	Global_23283 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_18(sParam2, iParam4, false);
}

void START_RUNNING() // Position - 0x2DE61
{
	var unk;

	switch (iLocal_155)
	{
		case 0:
			_DEBUG_PRINT("Setup START_RUNNING");
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1835.5298f, -518.7238f, 25.116776f, -1822.431f, -513.8933f, 30.386765f, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1835.5298f, -518.7238f, 25.116776f, -1822.431f, -513.8933f, 30.386765f, false, true);
		
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_347, "FANATIC_MIX_MARY_ANNE", 0);
			}
		
			if (!bLocal_162)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
				{
					_DEBUG_PRINT("Starting music - start_running() init");
					bLocal_162 = true;
				}
			}
		
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_181, 3, pedLocal_347, "MARYANN", 0, 1);
			func_275(1, 0, 1, true);
			func_447(&uLocal_94, false, true);
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
				ENTITY::SET_ENTITY_PROOFS(pedLocal_347, false, false, false, false, false, false, false, false);
		
			iLocal_709 = MISC::GET_GAME_TIMER();
		
			if (!HUD::DOES_BLIP_EXIST(blLocal_348))
			{
				blLocal_348 = func_322(pedLocal_347, true, true, 5);
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_348, true);
			}
		
			if (func_318(pedLocal_347))
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_347, false);
		
			iLocal_349 = 3;
			iLocal_350 = MISC::GET_GAME_TIMER();
		
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1RollingStart"))
			{
				_DEBUG_PRINT("*** Using assisted movement...");
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Fanatic1RollingStart", true, 2f, 0.7f);
			}
		
			iLocal_167 = 1;
			iLocal_710 = MISC::GET_GAME_TIMER();
			iLocal_711 = MISC::GET_GAME_TIMER();
			_DEBUG_PRINT("GOING INTO START_RUNNING LOOP");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 1);
			iLocal_155 = 1;
			break;
	
		case 1:
			if (!Global_113969.f_18577.f_384)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					_DISPLAY_HELP_TEXT("FAN_HELP" /*Running and cycling will improve your general stamina.~n~Increasing your general stamina will allow you to sprint and cycle for longer.~n~Sprinting or cycling for longer than your stamina allows will drop your health.*/, -1);
					Global_113969.f_18577.f_384 = 1;
				}
			}
		
			if (iLocal_167 == 1)
			{
				if (MISC::GET_GAME_TIMER() - iLocal_710 < 5000)
				{
					if (MISC::GET_GAME_TIMER() - iLocal_710 > 1000)
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							_DEBUG_PRINT("FADING IN NOW");
							func_306(500, false);
							func_275(1, 0, 1, true);
						}
					}
				}
				else
				{
					iLocal_167 = 0;
					_DEBUG_PRINT("TURNING OFF ASSISTED ROUTE");
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Fanatic1RollingStart", false, 1065353216, 1056964608);
					TASK::REMOVE_WAYPOINT_RECORDING("Fanatic1RollingStart");
				}
			}
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_347, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
				{
					_DEBUG_PRINT("Re-set Mary Ann's task post-cutscene");
					TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_653, 1, 1052, -1);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
				}
			}
		
			if (sLocal_437.f_2 == 0)
			{
				if (iLocal_657 < 17)
				{
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1799.0708f, -468.65915f, 40.074013f, -1820.1185f, -492.41388f, 41.74369f, 18.25f, false, true, 0))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1798.0756f, -468.2297f, 39.02536f, -1816.6643f, -484.31702f, 43.642105f, 12.5f, false, true, 0))
							{
								if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
									func_15();
							
								if (CAN_MARY_ANN_SAY_SINGLE_LINE(sLocal_437, sLocal_437.f_1, false, &(sLocal_412.f_4)))
								{
									if (sLocal_412.f_4 != -1)
									{
										sLocal_412.f_3 = 1;
										_DEBUG_PRINT("*** startRunConversation interrupted!");
										func_352("*** startRunConversation will restart on line: ", sLocal_412.f_4);
									}
								
									iLocal_159 = 1;
									iLocal_164 = 1;
									sLocal_437.f_2 = 1;
									Global_113969.f_18577.f_386 = 1;
								}
								else
								{
									_DEBUG_PRINT("*** Waiting for prior conversation to end before can play cheated line!");
								}
							}
						}
					}
				}
			}
		
			if (sLocal_432.f_2 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1772.7617f, -532.99713f, 35.589294f, -1797.2458f, -492.1292f, 39.270397f, 26f, false, true, 0) || func_351(PLAYER::PLAYER_PED_ID(), -1812.9103f, -468.52533f, 41.32029f, true) < 10f)
				{
					if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						func_15();
				
					if (CAN_MARY_ANN_SAY_SINGLE_LINE(sLocal_432, sLocal_432.f_1, false, &(sLocal_412.f_4)))
					{
						if (sLocal_412.f_4 != -1)
						{
							sLocal_412.f_3 = 1;
							_DEBUG_PRINT("*** startRunConversation interrupted!");
							func_352("*** startRunConversation will restart on line: ", sLocal_412.f_4);
						}
					
						iLocal_159 = 1;
						iLocal_164 = 1;
						sLocal_432.f_2 = 1;
						Global_113969.f_18577.f_386 = 1;
					}
					else
					{
						_DEBUG_PRINT("*** Waiting for prior conversation to end before can play cheated line!");
					}
				}
			}
		
			if (iLocal_164 == 1)
			{
				if (sLocal_442.f_2 == 0)
				{
					if (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) < 10f)
					{
						if (CAN_MARY_ANN_SAY_SINGLE_LINE(sLocal_442, sLocal_442.f_1, false, &unk))
						{
							sLocal_442.f_2 = 1;
							iLocal_164 = 0;
							iLocal_393 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		
			if (func_336())
			{
				if (sLocal_412.f_2 == 0 && MISC::GET_GAME_TIMER() - iLocal_711 > 3500)
				{
					_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", sLocal_412, 7, 0, 0, 0);
					_DEBUG_PRINT("SETTING UP THE CONVERSATION");
					sLocal_412.f_2 = 1;
					iLocal_393 = MISC::GET_GAME_TIMER();
				}
				else if (sLocal_412.f_3 == 1)
				{
					if (sLocal_442.f_2 == 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&uLocal_375, sLocal_412, 16);
						TEXT_LABEL_APPEND_STRING(&uLocal_375, "_", 16);
						TEXT_LABEL_APPEND_INT(&uLocal_375, sLocal_412.f_4, 16);
					
						if (func_349(&uLocal_181, "FAN1AU", sLocal_412, &uLocal_375, 7, 0, 0))
							sLocal_412.f_3 = 0;
					}
				}
			}
		
			if (sLocal_412.f_2)
				func_340();
		
			if (func_338(uLocal_661))
			{
				fLocal_354 = 1.15f;
				iLocal_155 = 0;
				iLocal_156 = 3;
			}
			break;
	}

	return;
}

float func_351(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x2E3B1
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, fParam1, bParam4);
}

void func_352(char* sParam0, int iParam1) // Position - 0x2E3EB
{
	sParam0 = sParam0;
	iParam1 = iParam1;
	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x2E3FB
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79389)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

void func_354() // Position - 0x2E496
{
	switch (iLocal_155)
	{
		case 0:
			_DEBUG_PRINT("Intro Cutscene");
			func_365("ef_1_rcm", true);
		
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				_DEBUG_PRINT("Trying to set Mary Ann component variation");
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", pedLocal_347, joaat("CS_MaryAnn"));
			}
		
			iLocal_458 = 0;
			bLocal_162 = false;
		
			if (iLocal_642 == -1)
				iLocal_642 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1877.3f, -439.7f, 45.05f, 4f, 6f, 2f, 45f, false, 7);
		
			if (func_359(1, 1093140480, 0))
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_347, "Mary_Ann", 0, joaat("IG_MaryAnn"), 0);
					_DEBUG_PRINT("Registered Mary Ann");
				}
			
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
					_DEBUG_PRINT("Registered Michael");
				}
			
				iLocal_643 = PED::ADD_SCENARIO_BLOCKING_AREA(-1926.6536f, -387.8897f, 46.7354f, -1897.3219f, -374.5802f, 51.0241f, false, true, true, true, 1);
				func_358();
				PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
				CAM::STOP_GAMEPLAY_HINT(false);
				RECORDING::REPLAY_START_EVENT(1);
				CUTSCENE::START_CUTSCENE(0);
				SYSTEM::WAIT(0);
				func_306(500, false);
				func_309(-1873.5255f, -441.62106f, 44.693626f, -1882.03f, -436.99173f, 47.48379f, 7f, -1875.09f, -431.08f, 45.21f, 236.42f, func_317(), true, true, true, false, false);
				func_309(-1875.8148f, -443.1191f, 49.13515f, -1808.5607f, -491.7887f, 36.58029f, 11f, -1875.09f, -431.08f, 45.21f, 236.42f, func_317(), true, true, true, false, false);
				func_305(-1877.23f, -440.46f, 45.07f, 1, 1, 1, 1, 1, true, true, true, 1, true);
				func_443();
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1799.5134f, -467.64594f, 43.13879f, -1789.6028f, -476.66156f, 36.837288f, 7.5f, false, false, false, false, false, 0, 0);
				bLocal_161 = false;
				_DEBUG_PRINT("Going into cutscene main loop now");
				iLocal_155 = 1;
			}
			else
			{
				_DEBUG_PRINT("Waiting for cutscene to be OK to start...");
			}
			break;
	
		case 1:
			if (iLocal_458 == 0)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 31000)
				{
					if (!bLocal_162)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							_DEBUG_PRINT("Starting music");
							bLocal_162 = true;
						}
					}
				}
			
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					_DEBUG_PRINT("*** Cutscene skip detected");
					_DEBUG_PRINT("*** Cam exit state pitch/heading on skip");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
					{
						ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1869.24f, -444.99f, 45.17f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(pedLocal_347, -143.87f);
					}
				
					bLocal_161 = true;
					iLocal_458 = 1;
				}
			
				if (func_357())
					iLocal_458 = 1;
			
				func_355();
			}
			else if (iLocal_458 == 1)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 31000)
				{
					if (!bLocal_162)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							_DEBUG_PRINT("Starting music");
							bLocal_162 = true;
						}
					}
				}
			
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					_DEBUG_PRINT("*** Cutscene skip detected");
					_DEBUG_PRINT("*** Cam exit state pitch/heading on skip");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
					{
						ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1869.24f, -444.99f, 45.17f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(pedLocal_347, -143.87f);
					}
				
					if (!bLocal_162)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("RC6A_START"))
						{
							_DEBUG_PRINT("Starting music from skip");
							bLocal_162 = true;
						}
					}
				}
			
				func_355();
				func_357();
			
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					RECORDING::REPLAY_STOP_EVENT();
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_642);
					iLocal_642 = -1;
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_643, false);
					iLocal_388 = MISC::GET_GAME_TIMER();
					iLocal_155 = 0;
					iLocal_156 = 2;
				}
			}
			break;
	}

	return;
}

void func_355() // Position - 0x2E83A
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mary_Ann", joaat("IG_MaryAnn")))
		{
			_DEBUG_PRINT("*** Forcing Mary Ann's move state");
			_DEBUG_PRINT("SET MARY ANNS TASK");
		
			if (bLocal_161)
				func_356(pedLocal_347, -1867.64f, -446.01f, 45.16f, 229.3557f, false, true);
		
			TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_653, 1, 1052, -1);
			TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			PED::FORCE_PED_MOTION_STATE(pedLocal_347, joaat("MotionState_Run"), false, 1, false);
		}
	}

	return;
}

BOOL func_356(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2E8F5
{
	BOOL groundZFor3dCoord;
	float groundZ;

	groundZFor3dCoord = false;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		if (bParam5 == true)
		{
			groundZ = 0f;
			groundZFor3dCoord = MISC::GET_GROUND_Z_FOR_3D_COORD(fParam1, &groundZ, false, false);
		
			if (groundZFor3dCoord)
				fParam1.f_2 = groundZ;
		}
	
		ENTITY::SET_ENTITY_COORDS(pedParam0, fParam1, true, false, false, bParam6);
		ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	
		if (bParam5)
			return groundZFor3dCoord;
	
		return true;
	}

	return false;
}

BOOL func_357() // Position - 0x2E951
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			_DEBUG_PRINT("*** Forcing Michael's move state");
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0, true, false, 0);
			return true;
		}
	}

	return false;
}

void func_358() // Position - 0x2E9A0
{
	int num;

	num = func_265();

	if (num == -1)
		return;

	Global_113056[num /*10*/] = 1;
	return;
}

BOOL func_359(int iParam0, int iParam1, int iParam2) // Position - 0x2E9C0
{
	int num;

	num = 1;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_362(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam1, 1, 1056964608, false, true, false))
			{
				num = 0;
			}
			else if (iParam2 == 1)
			{
				num = 0;
			
				if (!func_361(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE))
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				num = 0;
		}
	}

	func_297();

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		func_15();
		num = 0;
	}

	if (num == 0)
		return false;

	if (iParam0 == 1)
		if (!func_360())
			return false;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	return true;
}

BOOL func_360() // Position - 0x2EA94
{
	BOOL hasCutsceneLoaded;

	hasCutsceneLoaded = CUTSCENE::HAS_CUTSCENE_LOADED();

	if (!Global_79388)
		if (!hasCutsceneLoaded)
			Global_79388 = true;

	return hasCutsceneLoaded;
}

BOOL func_361(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2EAB7
{
	if (func_318(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_362(Vehicle veParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2EAEA
{
	func_364(bParam5, bParam6);
	func_363(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, iParam1, iParam2, bParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_363(Vehicle veParam0) // Position - 0x2EB41
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_364(BOOL bParam0, BOOL bParam1) // Position - 0x2EB6D
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam0)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	return;
}

void func_365(char* sParam0, BOOL bParam1) // Position - 0x2ECBE
{
	func_308(bParam1);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
	return;
}

void func_366() // Position - 0x2ECD4
{
	func_367();

	switch (iLocal_155)
	{
		case 0:
			if (!_IS_MISSION_REPLAY_IN_PROGRESS())
			{
				if (func_44(PLAYER::PLAYER_PED_ID(), pedLocal_347, true) <= 1.2f)
				{
					if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						func_37();
				
					_DEBUG_PRINT("Player too close to Mary Ann, starting cutscene early");
					iLocal_155 = 0;
					iLocal_156 = 1;
				}
			
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(pedLocal_347, 0f, 0f, 0f, true, 30000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_716);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_717);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_718);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_719);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_720);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
				}
			
				STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
			
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1") && iLocal_156 == 0)
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_347, "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_347, "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base") < 0.1f)
							{
								ENTITY::FREEZE_ENTITY_POSITION(pedLocal_347, false);
								_CONVERSATION_INITIALIZE_ACTOR(&uLocal_181, 3, pedLocal_347, "MARYANN", 0, 1);
								_CONVERSATION_INITIALIZE_ACTOR(&uLocal_181, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
								TASK::TASK_PLAY_ANIM_ADVANCED(pedLocal_347, "rcmfanatic1", "ef_1_rcm_mary_ann_leadin", -1878.223f, -440.51813f, 46.03983f, 0f, 0f, 159.97f, 8f, -8f, -1, 262154, 0, 2, 0);
								_DEBUG_PRINT("Done Mary Ann leadin anim");
								iLocal_155 = 1;
							}
							else
							{
								_DEBUG_PRINT("Waiting to blend the lead-in...");
							}
						}
					}
				}
			}
			else
			{
				_DEBUG_PRINT("Replay in progress or in wrong area - skipping to intro");
				iLocal_156 = 1;
			}
			break;
	
		case 1:
			if (func_318(pedLocal_347))
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(pedLocal_347, 0f, 0f, 0f, true, 30000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_716);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_717);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_718);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_719);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_720);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
				}
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_347, "rcmfanatic1", "ef_1_rcm_mary_ann_leadin", 3))
				{
					if (iLocal_160 == 0)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_LDI", 8, 0, 0, 0))
						{
							_DEBUG_PRINT("Done Mary Ann leadin conv");
							iLocal_160 = 1;
						}
					}
					else if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						_DEBUG_PRINT("Mary Ann leadin conv over");
						SYSTEM::WAIT(250);
						iLocal_155 = 0;
						iLocal_156 = 1;
					}
				}
				else
				{
					_DEBUG_PRINT("Mary Ann not playing leadin anim anymore - skip to cutscene for safety");
					iLocal_155 = 0;
					iLocal_156 = 1;
				}
			
				if (func_44(PLAYER::PLAYER_PED_ID(), pedLocal_347, true) <= 4f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				
					if (!func_361(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_347, 0);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_347, -1, 0, 2);
					}
				}
			}
			break;
	}

	return;
}

void func_367() // Position - 0x2EF65
{
	func_291(0);
	func_297();
	func_368();
	return;
}

void func_368() // Position - 0x2EF7A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (func_362(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10.5f, 1, 1056964608, false, true, false))
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);

	return;
}

void func_369() // Position - 0x2EFD2
{
	if (iLocal_389 == 1 && MISC::GET_GAME_TIMER() - iLocal_388 < 1500)
	{
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			if (sLocal_385.f_1 <= 3)
			{
				if (iLocal_390 == 0)
				{
					if (func_370(sLocal_385))
					{
						func_352("Said OvertakeLines #", sLocal_385.f_1);
						sLocal_385.f_1 = sLocal_385.f_1 + 1;
						iLocal_389 = 0;
						iLocal_390 = 1;
						iLocal_388 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_390 = 0;
					iLocal_389 = 0;
					iLocal_388 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_389 = 0;
				iLocal_388 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_389 = 0;
			iLocal_388 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iLocal_389 == 1)
	{
		iLocal_389 = 0;
		iLocal_388 = MISC::GET_GAME_TIMER();
	}

	return;
}

BOOL func_370(char* sParam0) // Position - 0x2F081
{
	if (iLocal_346 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", sParam0, 7, 0, 0, 0))
			return true;

	return false;
}

void func_371() // Position - 0x2F0B2
{
	if (func_318(pedLocal_347))
	{
		if (iLocal_156 != 8)
		{
			func_383();
		}
		else if (iLocal_453 >= 3)
		{
			if (!func_361(pedLocal_347, SCRIPT_TASK_PERFORM_SEQUENCE) && !bLocal_169)
			{
				if (func_7(pedLocal_447))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
					TASK::TASK_ENTER_VEHICLE(0, pedLocal_447, 20000, -1, 2f, 1, 0, 0);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0, 2);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, pedLocal_447, -2018.17f, -461f, 10.56f, 10f, 0, hLocal_452, 8, 3f, 50f);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, pedLocal_447, -2014.96f, -455.47f, 10.48f, 10f, 0, hLocal_452, 8, 3f, 50f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, pedLocal_447, 10f, 786599);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
					PED::SET_PED_KEEP_TASK(pedLocal_347, true);
					_DEBUG_PRINT("Emergency retasked Mary Ann!");
				}
			}
		}
	
		func_382();
	
		if (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) > 80f)
		{
			if (iLocal_359 == 0)
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_347, true, 1);
				iLocal_359 = 1;
			}
		}
		else if (iLocal_359 == 1)
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_347, false, 1);
			iLocal_359 = 0;
		}
	
		if (iLocal_156 != 8 && iLocal_156 != 7 && iLocal_156 != 9)
			if (iLocal_346 != 1)
				if (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) > 25f)
					func_381(1);
	
		if (iLocal_346 != 0)
			if (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) < 24f)
				func_381(0);
	
		func_375();
	
		if (iLocal_156 != 8 && iLocal_156 != 1 && iLocal_156 != 9)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_347, -1809.1729f, -549.01056f, 14.031675f, -1841.7286f, -529.4575f, 33.641205f, 21.75f, false, true, 0))
			{
				if (iLocal_358 == 0)
				{
					PED::SET_PED_STEERS_AROUND_PEDS(pedLocal_347, true);
					iLocal_358 = 1;
					_DEBUG_PRINT("Set Mary Ann to steer round peds");
				}
			}
			else if (iLocal_358 == 1)
			{
				PED::SET_PED_STEERS_AROUND_PEDS(pedLocal_347, false);
				iLocal_358 = 0;
				_DEBUG_PRINT("Unset Mary Ann to steer round peds");
			}
		
			func_372();
		}
	}

	return;
}

void func_372() // Position - 0x2F2D8
{
	int points;

	switch (iLocal_362)
	{
		case 0:
			iLocal_364 = iLocal_657;
			iLocal_363 = MISC::GET_GAME_TIMER();
			iLocal_362 = 1;
			break;
	
		case 1:
			if (iLocal_364 == iLocal_657)
			{
				if (MISC::GET_GAME_TIMER() - iLocal_363 > 20000)
				{
					_DEBUG_PRINT("Mary Ann got stuck!");
					iLocal_362 = 2;
				}
			}
			else
			{
				iLocal_362 = 0;
			}
			break;
	
		case 2:
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_653, &points);
		
			if (iLocal_364 + 4 > points)
				func_374(points - 1);
			else
				func_374(iLocal_364 + 4);
		
			func_373(iLocal_156, 0);
			iLocal_362 = 0;
			break;
	}

	return;
}

void func_373(int iParam0, int iParam1) // Position - 0x2F372
{
	if (func_318(pedLocal_347))
	{
		if (!MISC::IS_STRING_NULL(sLocal_653))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_653))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_180);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_653, func_300(), 1052, -1);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_180);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_347, iLocal_180);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_180);
			}
		}
	
		_DEBUG_PRINT("Keep Running used");
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_347, false);
	
		if (iParam1 == 1)
		{
			iLocal_155 = 0;
			iLocal_156 = iParam0;
		}
	}

	return;
}

void func_374(int iParam0) // Position - 0x2F40D
{
	var coord;
	float unk;
	var unk2;

	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_653, iParam0, &coord);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_653, iParam0 + 1, &coord2);
	num = func_286(coord, coord2, 1);
	func_356(pedLocal_347, coord, num, true, true);

	if (iParam0 < 6)
		iLocal_708 = 1;
	else if (iParam0 < 30)
		iLocal_708 = 1;
	else if (iParam0 < 36)
		iLocal_708 = 2;
	else if (iParam0 < 48)
		iLocal_708 = 3;
	else if (iParam0 < 62)
		iLocal_708 = 4;
	else if (iParam0 < 81)
		iLocal_708 = 5;
	else if (iParam0 < 95)
		iLocal_708 = 6;
	else if (iParam0 < 106)
		iLocal_708 = 7;
	else
		iLocal_708 = 8;

	return;
}

void func_375() // Position - 0x2F4C2
{
	if (iLocal_156 != 8)
	{
		if (iLocal_156 == 5)
		{
			iLocal_349 = 3;
			func_380();
		}
		else
		{
			if (iLocal_349 != 2)
				func_377();
			else if (iLocal_654 == 1)
				func_377();
		
			func_376();
		}
	
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(pedLocal_347))
			if (iLocal_349 == 1)
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(pedLocal_347, fLocal_357, false);
			else
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(pedLocal_347, fLocal_356, false);
	
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(pedLocal_347, fLocal_356 - 0.5f);
		PED::SET_PED_MOVE_RATE_OVERRIDE(pedLocal_347, fLocal_354);
	}

	return;
}

void func_376() // Position - 0x2F543
{
	switch (iLocal_349)
	{
		case 0:
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_347, -1809.1729f, -549.01056f, 14.031675f, -1841.7286f, -529.4575f, 33.641205f, 21.75f, false, true, 0))
				{
					if (fLocal_356 >= 2.5f)
					{
						if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
							TASK::TASK_LOOK_AT_ENTITY(pedLocal_347, PLAYER::PLAYER_PED_ID(), 1500, SLF_WIDEST_YAW_LIMIT | 32 | 1024 | 2048, 4);
					
						fLocal_357 = fLocal_356;
						iLocal_349 = 1;
						iLocal_350 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - iLocal_350 < iLocal_351)
			{
				if (fLocal_357 < fLocal_356)
					fLocal_357 = fLocal_356;
			}
			else
			{
				fLocal_356 = fLocal_357;
				iLocal_349 = 2;
			}
			break;
	
		case 2:
			if (iLocal_654 == 2)
			{
				if (fLocal_356 > 2.49f)
				{
					fLocal_356 = fLocal_356 - 0.002f;
				}
				else
				{
					iLocal_349 = 3;
					iLocal_350 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_350 > iLocal_352)
			{
				_DEBUG_PRINT("*** SPRINT BOOST WAITING");
				iLocal_349 = 0;
			}
			break;
	}

	return;
}

void func_377() // Position - 0x2F65E
{
	var coord;

	if (iLocal_656 == iLocal_657)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_653, iLocal_657 + 1, &coord);
	
		if (func_351(PLAYER::PLAYER_PED_ID(), coord, true) < func_351(pedLocal_347, coord, true))
			func_379();
		else
			func_378();
	}
	else if (iLocal_656 > iLocal_657)
	{
		func_379();
	}
	else
	{
		func_378();
	}

	return;
}

void func_378() // Position - 0x2F6BD
{
	float num;

	if (fLocal_354 > 1f)
		fLocal_354 = fLocal_354 - 0.02f;
	else
		fLocal_354 = 1f;

	if (fLocal_354 > fLocal_353)
		fLocal_354 = fLocal_353;

	num = 4.5f - (func_303(PLAYER::PLAYER_PED_ID(), pedLocal_347) / 2f);

	if (num < 1.8f)
		num = 1.8f;
	else if (num > fLocal_355)
		num = fLocal_355;

	if (fLocal_356 > num)
		fLocal_356 = fLocal_356 - 0.01f;
	else
		fLocal_356 = num;

	return;
}

void func_379() // Position - 0x2F745
{
	fLocal_354 = fLocal_354 + (MISC::GET_FRAME_TIME() / 20f);

	if (fLocal_354 > fLocal_353)
		fLocal_354 = fLocal_353;

	fLocal_356 = fLocal_356 + 0.02f;

	if (fLocal_356 > fLocal_355)
		fLocal_356 = fLocal_355;

	return;
}

void func_380() // Position - 0x2F78A
{
	float num;
	float num2;
	float num3;
	float num4;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
	{
		if (iLocal_654 == 2)
		{
			num = func_44(PLAYER::PLAYER_PED_ID(), pedLocal_347, true);
		
			if (num < 15f)
			{
				num2 = num / 100f;
			
				if (fLocal_356 > 2.42f)
					fLocal_356 = fLocal_356 - num2;
			}
			else if (fLocal_356 < 2.52f)
			{
				fLocal_356 = fLocal_356 + 0.002f;
			}
		}
		else
		{
			num3 = func_44(PLAYER::PLAYER_PED_ID(), pedLocal_347, true);
			num4 = num3 / 300f;
		
			if (num3 < 10f)
			{
				if (fLocal_356 < 2.487f)
					fLocal_356 = fLocal_356 + 0.002f;
				else if (fLocal_356 > 2.492f)
					fLocal_356 = fLocal_356 - 0.002f;
			}
			else
			{
				if (fLocal_356 < 2.55f)
					fLocal_356 = fLocal_356 + num4;
				else if (fLocal_356 > 2.55f)
					fLocal_356 = fLocal_356 - num4;
			
				if (fLocal_356 > 3f)
					fLocal_356 = 3f;
			}
		}
	}

	return;
}

void func_381(int iParam0) // Position - 0x2F88B
{
	if (iLocal_346 != iParam0)
	{
		switch (iLocal_346)
		{
			case 0:
				if (iParam0 == 1)
				{
					if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						func_15();
				
					_DEBUG_PRINT("MA Dialogue: Kill convo, switch to MA_OUT_OF_TALKING_RANGE, trying keep up line if possible");
					iLocal_346 = 2;
				}
				break;
		
			case 1:
				if (iParam0 == 0)
				{
					if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						func_15();
				
					_DEBUG_PRINT("MA Dialogue: Kill convo, switch to MA_WITHIN_TALKING_RANGE, trying you caught up line if possible");
					iLocal_346 = 3;
				}
				break;
		}
	}

	return;
}

void func_382() // Position - 0x2F8F1
{
	if (iLocal_346 == 2)
	{
		if (iLocal_365 < 2)
		{
			if (sLocal_432.f_2 || sLocal_437.f_2 && iLocal_156 == 2)
			{
				iLocal_346 = 1;
				_DEBUG_PRINT("MA Dialogue: Now in MA_OUT_OF_TALKING_RANGE");
			}
			else if (iLocal_654 == 2)
			{
				if (func_325(&uLocal_181, "FAN1AU", "FAN1_FALLB", uLocal_366[iLocal_365], 8, 0, 0))
				{
					iLocal_365 = iLocal_365 + 1;
					iLocal_346 = 1;
					_DEBUG_PRINT("MA Dialogue: Played keep up line, now in MA_OUT_OF_TALKING_RANGE");
				}
			}
			else
			{
				iLocal_346 = 1;
				_DEBUG_PRINT("MA Dialogue: Player in 1st place so no need for keep up line, now in MA_OUT_OF_TALKING_RANGE");
			}
		}
		else
		{
			_DEBUG_PRINT("MA Dialogue: Said all keep up lines, now in MA_OUT_OF_TALKING_RANGE");
			iLocal_346 = 1;
		}
	}
	else if (iLocal_346 == 3)
	{
		if (iLocal_369 < 2)
		{
			if (sLocal_432.f_2 || sLocal_437.f_2 && iLocal_156 == 2)
			{
				if (iLocal_391 == 0)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_CATCHC", 8, 0, 0, 0))
					{
						iLocal_391 = 1;
						iLocal_164 = 0;
					}
				}
			
				iLocal_346 = 0;
				_DEBUG_PRINT("MA Dialogue: Now in MA_WITHIN_TALKING_RANGE");
			}
			else if (iLocal_654 == 2)
			{
				if (func_370("FAN1_CATCHU"))
				{
					iLocal_369 = iLocal_369 + 1;
					iLocal_346 = 0;
					_DEBUG_PRINT("MA Dialogue: Played catchup line, now in MA_WITHIN_TALKING_RANGE");
				}
			}
			else
			{
				iLocal_346 = 0;
				_DEBUG_PRINT("MA Dialogue: Player in 1st place so no need for catchup line, now in MA_WITHIN_TALKING_RANGE");
			}
		}
	}

	return;
}

void func_383() // Position - 0x2FA25
{
	Ped outPed;
	Vector3 vector;
	var unk;
	var unk2;
	var unk3;
	var unk4;

	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(pedLocal_347))
	{
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), 0.75f, true, true, &outPed, false, false, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(outPed) && !ENTITY::IS_ENTITY_DEAD(outPed, false))
		{
			if (!PED::IS_PED_RAGDOLL(outPed) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedLocal_347, outPed))
			{
				TASK::CLEAR_PED_TASKS(outPed);
				PED::SET_PED_TO_RAGDOLL(outPed, 800, 1500, 2, true, true, false);
				vector = { -ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(pedLocal_347, ENTITY::GET_ENTITY_COORDS(outPed, true)) };
				ENTITY::APPLY_FORCE_TO_ENTITY(outPed, 1, vector, 0f, 0f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(outPed, 7), false, false, true, false, true);
			
				if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					if (PED::PED_HAS_SEXINESS_FLAG_SET(outPed, 4))
						if (uLocal_396[2 /*5*/].f_2 == 0)
							if (CAN_MARY_ANN_SAY_SINGLE_LINE("FAN1_PUSH", uLocal_396[2 /*5*/].f_1, false, &unk3))
								uLocal_396[2 /*5*/].f_2 = 1;
						else if (uLocal_396[0 /*5*/].f_2 == 0)
							if (CAN_MARY_ANN_SAY_SINGLE_LINE("FAN1_PUSH", uLocal_396[0 /*5*/].f_1, false, &unk4))
								uLocal_396[0 /*5*/].f_2 = 1;
					else if (uLocal_396[1 /*5*/].f_2 == 0)
						if (CAN_MARY_ANN_SAY_SINGLE_LINE("FAN1_PUSH", uLocal_396[1 /*5*/].f_1, false, &unk5))
							uLocal_396[1 /*5*/].f_2 = 1;
					else if (uLocal_396[0 /*5*/].f_2 == 0)
						if (CAN_MARY_ANN_SAY_SINGLE_LINE("FAN1_PUSH", uLocal_396[0 /*5*/].f_1, false, &unk6))
							uLocal_396[0 /*5*/].f_2 = 1;
			}
		}
	}

	return;
}

void func_384() // Position - 0x2FB8D
{
	var sizeAndPeds;
	Vector3 unk;

	if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
	{
		sizeAndPeds = 32;
	
		if (PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1) > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[0]) && !ENTITY::IS_ENTITY_DEAD(sizeAndPeds[0], false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), sizeAndPeds[0]))
				{
					if (sizeAndPeds[0] == pedLocal_347)
					{
						_DEBUG_PRINT("Player touched Mary Ann!");
					
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						{
							if (sLocal_379.f_1 <= 3)
							{
								if (func_370(sLocal_379))
								{
									func_352("Saying MikePushMALine #", sLocal_379.f_1);
									sLocal_379.f_1 = sLocal_379.f_1 + 1;
								}
							}
						}
					}
					else
					{
						_DEBUG_PRINT("Player touched a civ!");
					
						if (!PED::IS_PED_IN_ANY_VEHICLE(sizeAndPeds[0], false))
						{
							if (!PED::IS_PED_RAGDOLL(sizeAndPeds[0]))
							{
								TASK::CLEAR_PED_TASKS(sizeAndPeds[0]);
								PED::SET_PED_TO_RAGDOLL(sizeAndPeds[0], 800, 1500, 2, true, true, false);
								vector = { -ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(sizeAndPeds[0], true)) };
								ENTITY::APPLY_FORCE_TO_ENTITY(sizeAndPeds[0], 1, vector, 0f, 0f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(sizeAndPeds[0], 7), false, false, true, false, true);
							}
						
							if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							{
								if (sLocal_382.f_1 <= 3)
								{
									if (func_370(sLocal_382))
									{
										func_352("Said MikePushPedLine #", sLocal_382.f_1);
										sLocal_382.f_1 = sLocal_382.f_1 + 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_385() // Position - 0x2FCDA
{
	if (!Global_113969.f_18577.f_385)
	{
		if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				_DISPLAY_HELP_TEXT("AM_H_NOSTAM" /*You have run out of stamina. Pushing your body any harder will cause you to lose health.*/, -1);
				Global_113969.f_18577.f_385 = 1;
			}
		}
	}

	return;
}

void func_386() // Position - 0x2FD1A
{
	if (func_318(pedLocal_347))
	{
		if (iLocal_156 < 8 && iLocal_156 > 1)
		{
			func_401();
			func_400(blLocal_348, pedLocal_347, 70f, 0.72f, false);
		
			if (iLocal_656 > iLocal_657)
			{
				if (iLocal_654 != 1)
				{
					iLocal_654 = 1;
				
					if (MISC::GET_GAME_TIMER() - iLocal_388 > 3000)
					{
						_DEBUG_PRINT("Trying an overtake line...");
						iLocal_389 = 1;
						iLocal_388 = MISC::GET_GAME_TIMER();
					}
					else
					{
						func_352("Can't do overtake line, overtake timer is = ", MISC::GET_GAME_TIMER() - iLocal_388);
					}
				}
			}
			else if (iLocal_656 < iLocal_657)
			{
				if (iLocal_654 != 2)
					iLocal_654 = 2;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), uLocal_676[func_399() /*3*/], true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_676[func_399() /*3*/], true))
			{
				if (iLocal_654 != 2)
					iLocal_654 = 2;
			}
			else if (iLocal_654 != 1)
			{
				iLocal_654 = 1;
			
				if (MISC::GET_GAME_TIMER() - iLocal_388 > 3000)
				{
					_DEBUG_PRINT("Trying an overtake line...");
					iLocal_389 = 1;
					iLocal_388 = MISC::GET_GAME_TIMER();
				}
				else
				{
					func_352("Can't do overtake line, overtake timer is = ", MISC::GET_GAME_TIMER() - iLocal_388);
				}
			}
		
			func_398();
			func_387(MISC::GET_GAME_TIMER() - iLocal_709, "", -1, -1, "", iLocal_654, 2, "", 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, true, -1, 0, -1082130432, 1, 1);
		}
	}

	return;
}

void func_387(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, const char* sParam12, int iParam13, int iParam14, int iParam15, const char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, BOOL bParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26) // Position - 0x2FE78
{
	const char* str;
	const char* str2;
	char* str3;
	char* str4;
	char* str5;
	char* str6;
	int num;

	if (iParam24 > -1f)
		func_395(0, "", iParam22, iParam25, 9, 0, sParam23, 1, iParam24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1, 0);

	if (iParam14 > -1)
	{
		str = sParam16;
	
		if (func_394(str))
			str = "TIM_DAMAGE" /*DAMAGE*/;
	
		func_393(iParam14, iParam15, str, iParam17, iParam22, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}

	if (iParam10 > -1)
	{
		str2 = sParam12;
	
		if (func_394(str2))
			str2 = "TIM_CHECKPOIN" /*CHECKPOINT*/;
	
		iParam13 = iParam13;
		iParam11 = iParam11;
	}

	if (iParam5 > -1)
	{
		str3 = sParam7;
	
		if (func_394(str3))
			str3 = "TIM_POSIT" /*POSITION*/;
	
		func_392(iParam5, iParam6, str3, iParam9, iParam22, 9, 0, 0, 0, 1, 0, 0, 0);
	}

	if (iParam2 > -1)
	{
		str4 = sParam4;
	
		if (func_394(str4))
			str4 = "TIM_LAP" /*LAP*/;
	
		iParam2 = iParam2;
		iParam3 = iParam3;
		func_391(iParam2, iParam3, str4, iParam22, 1, 8, 0, 0, 0, 0, 0, 1, true, 0, 255, 0);
	}

	if (iParam18 > -1)
	{
		str5 = sParam19;
	
		if (func_394(str5))
			str5 = "TIMER_BESLAP" /*BEST LAP*/;
	
		iParam26 = iParam26;
		iParam20 = iParam20;
	}

	str6 = sParam1;

	if (func_394(str6))
		str6 = "TIMER_TIME_RCE" /*TIME*/;

	if (bParam21)
		num = 1;
	else
		num = 0;

	func_388(iParam0, str6, iParam8, num, iParam22, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	return;
}

void func_388(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x2FFF6
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_390(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1670224.f_1 = 1;
		func_389(7, num);
		Global_1670224.f_4714[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1670224.f_4714.f_11[num /*16*/], sParam1, 64);
		Global_1670224.f_4714.f_172[num] = iParam2;
		Global_1670224.f_4714.f_216[num] = iParam3;
		Global_1670224.f_4714.f_183[num] = iParam4;
		Global_1670224.f_4714.f_194[num] = iParam5;
		Global_1670224.f_4714.f_249[num] = iParam6;
		Global_1670224.f_4714.f_260[num] = iParam7;
		Global_1670224.f_4714.f_205[num] = iParam8;
		Global_1670224.f_4714.f_314[num] = iParam9;
		Global_1670224.f_4714.f_325[num] = iParam10;
		Global_1670224.f_4714.f_357[num] = iParam11;
		Global_1670224.f_4714.f_238[num] = iParam12;
		Global_1670224.f_4714.f_271[num] = iParam13;
		Global_1670224.f_4714.f_368[num] = iParam14;
		Global_1670224.f_4714.f_379[num] = iParam15;
		Global_1670224.f_4714.f_390[num] = iParam16;
		Global_1670224.f_4714.f_227[num] = iParam17;
	}

	return;
}

void func_389(int iParam0, int iParam1) // Position - 0x30154
{
	MISC::SET_BIT(&Global_1670224.f_7064[iParam0], iParam1);
	return;
}

BOOL func_390(int iParam0, int iParam1) // Position - 0x3016D
{
	return IS_BIT_SET(Global_1670224.f_7064[iParam0], iParam1);
}

void func_391(ePedComponentType epctParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, BOOL bParam12, int iParam13, int iParam14, int iParam15) // Position - 0x30183
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_390(4, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1670224.f_1 = 1;
		func_389(4, num);
		Global_1670224.f_3391[num] = epctParam0;
		Global_1670224.f_3391.f_172[num] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1670224.f_3391.f_11[num /*16*/], sParam2, 64);
		Global_1670224.f_3391.f_183[num] = iParam3;
		Global_1670224.f_3391.f_216[num] = iParam5;
		Global_1670224.f_3391.f_194[num] = iParam4;
		Global_1670224.f_3391.f_227[num] = iParam6;
		Global_1670224.f_3391.f_270[num] = iParam7;
		Global_1670224.f_3391.f_281[num] = iParam8;
		Global_1670224.f_3391.f_292[num] = iParam9;
		Global_1670224.f_3391.f_303[num] = iParam10;
		Global_1670224.f_3391.f_314[num] = iParam11;
		Global_1670224.f_3391.f_325[num] = iParam13;
		Global_1670224.f_3391.f_336[num] = iParam14;
		Global_1670224.f_3391.f_347[num] = iParam15;
	
		if (epctParam0 > PV_COMP_TASK && iParam1 > 9 && MISC::IS_PC_VERSION() && bParam12)
			Global_1670224.f_1172 = 1;
	}

	return;
}

void func_392(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) // Position - 0x302DD
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_390(5, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1670224.f_1 = 1;
		func_389(5, num);
		Global_1670224.f_3749[num] = iParam0;
		Global_1670224.f_3749.f_172[num] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1670224.f_3749.f_11[num /*16*/], sParam2, 64);
		Global_1670224.f_3749.f_194[num] = iParam3;
		Global_1670224.f_3749.f_183[num] = iParam4;
		Global_1670224.f_3749.f_216[num] = iParam5;
		Global_1670224.f_3749.f_227[num] = iParam6;
		Global_1670224.f_3749.f_270[num] = iParam7;
		Global_1670224.f_3749.f_281[num] = iParam8;
		Global_1670224.f_3749.f_292[num] = iParam9;
		Global_1670224.f_3749.f_303[num] = iParam10;
		Global_1670224.f_3749.f_314[num] = iParam11;
		Global_1670224.f_3749.f_325[num] = iParam12;
	}

	return;
}

void func_393(Hash hParam0, int iParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39) // Position - 0x303ED
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_390(0, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1670224.f_1 = 1;
		func_389(0, num);
		Global_1670224.f_1177[num] = hParam0;
		Global_1670224.f_1177.f_11[num] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_1670224.f_1177.f_22[num /*16*/], sParam2, 64);
		Global_1670224.f_1177.f_194[num] = iParam3;
		Global_1670224.f_1177.f_183[num] = iParam4;
		Global_1670224.f_1177.f_227[num] = iParam5;
		Global_1670224.f_1177.f_238[num /*3*/] = fParam6;
		Global_1670224.f_1177.f_238[num /*3*/].f_1 = fParam7;
		Global_1670224.f_1177.f_269[num] = iParam8;
		Global_1670224.f_1177.f_280[num] = iParam9;
		Global_1670224.f_1177.f_323[num] = iParam10;
		Global_1670224.f_1177.f_334[num] = iParam11;
		Global_1670224.f_1177.f_345[num] = iParam12;
		Global_1670224.f_1177.f_356[num] = iParam13;
		Global_1670224.f_1172 = 1;
		Global_1670224.f_1177.f_367[num] = iParam14;
		Global_1670224.f_1177.f_378[num] = iParam15;
		Global_1670224.f_1177.f_389[num] = iParam16;
		Global_1670224.f_1177.f_400[num] = iParam17;
		Global_1670224.f_1177.f_411[num] = iParam18;
		Global_1670224.f_1177.f_422[num] = iParam19;
		Global_1670224.f_1177.f_433[num] = iParam20;
		Global_1670224.f_1177.f_444[num] = iParam21;
		Global_1670224.f_1177.f_455[num] = iParam22;
		Global_1670224.f_1177.f_466[num] = iParam23;
		Global_1670224.f_1177.f_477[num] = iParam24;
		Global_1670224.f_1177.f_205[num] = iParam25;
		Global_1670224.f_1177.f_216[num] = iParam39;
		Global_1670224.f_1177.f_488[num] = iParam26;
		Global_1670224.f_1177.f_499[num] = iParam27;
		Global_1670224.f_1177.f_510[num] = iParam28;
		Global_1670224.f_1177.f_521[num] = iParam29;
		Global_1670224.f_1177.f_532[num] = iParam30;
		Global_1670224.f_1177.f_543[num] = iParam31;
		Global_1670224.f_1177.f_554[num] = iParam32;
		Global_1670224.f_1177.f_565[num] = iParam33;
		Global_1670224.f_1177.f_576[num] = iParam34;
		Global_1670224.f_1177.f_587[num] = iParam35;
		Global_1670224.f_1177.f_598[num] = iParam36;
		Global_1670224.f_1177.f_609[num] = iParam37;
		Global_1670224.f_1177.f_620[num] = iParam38;
	}

	return;
}

BOOL func_394(char* sParam0) // Position - 0x306B4
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

void func_395(Hash hParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26) // Position - 0x306EF
{
	int num;
	int i;
	BOOL flag;
	int x;
	int y;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_390(6, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1670224.f_1 = 1;
		func_389(6, num);
		Global_1670224.f_4085[num] = hParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1670224.f_4085.f_11[num /*16*/], sParam1, 64);
		Global_1670224.f_4085.f_183[num] = iParam3;
		Global_1670224.f_4085.f_172[num] = iParam2;
		Global_1670224.f_4085.f_260[num] = iParam4;
		Global_1670224.f_4085.f_271[num] = iParam5;
		TEXT_LABEL_ASSIGN_STRING(&Global_1670224.f_4085.f_282[num /*16*/], sParam6, 64);
		Global_1670224.f_4085.f_443[num] = iParam7;
		Global_1670224.f_4085.f_454[num] = fParam8;
		Global_1670224.f_4085.f_497[num] = iParam9;
		Global_1670224.f_4085.f_508[num] = iParam10;
		Global_1670224.f_4085.f_205[num] = iParam11;
		Global_1670224.f_4085.f_216[num] = iParam12;
		Global_1670224.f_4085.f_227[num] = iParam13;
		Global_1670224.f_4085.f_238[num] = iParam14;
		Global_1670224.f_4085.f_249[num] = iParam15;
		Global_1670224.f_4085.f_519[num] = iParam16;
		Global_1670224.f_4085.f_530[num] = iParam17;
		Global_1670224.f_4085.f_541[num] = iParam18;
		Global_1670224.f_4085.f_552[num] = iParam19;
		Global_1670224.f_4085.f_563[num] = iParam20;
		Global_1670224.f_4085.f_574[num] = iParam21;
		Global_1670224.f_4085.f_585[num] = iParam22;
		Global_1670224.f_4085.f_596[num] = iParam23;
		Global_1670224.f_4085.f_607[num] = iParam24;
		Global_1670224.f_4085.f_194[num] = iParam25;
		Global_1670224.f_4085.f_618[num] = iParam26;
	
		if (iParam15 == 5 && func_397())
			Global_1670224.f_1172 = 1;
	
		if (MISC::IS_PC_VERSION())
		{
			flag = false;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&x, &y);
		
			if (x == 1280 && y >= 960)
				flag = true;
		
			if (hParam0 > 99999999)
				Global_1670224.f_1176 = 1;
			else if (hParam0 > 9999999 || flag)
				Global_1670224.f_1175 = 1;
			else if (hParam0 > 999)
				Global_1670224.f_1172 = 1;
		
			if (func_396())
				Global_1670224.f_1176 = 1;
		}
	}

	return;
}

BOOL func_396() // Position - 0x30970
{
	int x;
	var y;

	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&x, &y);
	
		if (x <= 1024)
			return true;
	}

	return false;
}

BOOL func_397() // Position - 0x30994
{
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
		return true;

	return false;
}

void func_398() // Position - 0x309D2
{
	Global_1670224.f_1172 = 1;
	return;
}

int func_399() // Position - 0x309E2
{
	if (iLocal_707 > iLocal_708)
		if (iLocal_707 >= 10)
			return 9;
		else
			return iLocal_707;

	if (iLocal_708 >= 10)
		return 9;

	return iLocal_708;
}

void func_400(Blip blParam0, Ped pedParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x30A1F
{
	int num;
	float distanceBetweenCoords;
	float num2;

	num2 = fParam2 * fParam3;

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam1), false))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND(255f * ((distanceBetweenCoords - num2) / (fParam2 - num2)));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(pedParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND((255f * (distanceBetweenCoords - num2)) / (fParam2 - num2));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
		}
	}

	return;
}

void func_401() // Position - 0x30B78
{
	eHudColour hudColorIndex;
	int red;
	int green;
	int blue;
	int alpha;
	int r;
	int g;
	int b;
	float distanceBetweenCoords;

	if (iLocal_707 < iLocal_675)
	{
		if (iLocal_707 < iLocal_675 - 1)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_676[iLocal_707 /*3*/], 4f, 4f, 3f, false, true, 0) || !HUD::DOES_BLIP_EXIST(blLocal_670))
			{
				func_12(&blLocal_670);
				func_12(&blLocal_671);
			
				if (iLocal_672 != 0)
				{
					_DEBUG_PRINT("Create prev CP");
					iLocal_674 = 180;
					hudColorIndex = HUD_COLOUR_WHITE;
					HUD::GET_HUD_COLOUR(hudColorIndex, &r, &g, &b, &iLocal_674);
					iLocal_673 = GRAPHICS::CREATE_CHECKPOINT(func_403(iLocal_707), uLocal_676[iLocal_707 /*3*/] + { 2f, 0f, 0f }, uLocal_676[iLocal_707 + 1 /*3*/], 3.2f, r, g, b, iLocal_674, 0);
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_673, r, g, b, iLocal_674);
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_673, r, g, b, iLocal_674);
				}
			
				GRAPHICS::DELETE_CHECKPOINT(iLocal_672);
			
				if (iLocal_707 != 0)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
			
				iLocal_707 = iLocal_707 + 1;
			
				if (iLocal_707 < iLocal_675 - 1)
				{
					iLocal_672 = GRAPHICS::CREATE_CHECKPOINT(func_403(iLocal_707), uLocal_676[iLocal_707 /*3*/] + { 2f, 0f, 0f }, uLocal_676[iLocal_707 + 1 /*3*/], 3.2f, red, green, blue, alpha, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_672, 1.6f, 1.6f, 100f);
					hudColorIndex = HUD_COLOUR_YELLOWLIGHT;
					HUD::GET_HUD_COLOUR(hudColorIndex, &red, &green, &blue, &alpha);
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_672, red, green, blue, alpha);
					hudColorIndex = HUD_COLOUR_NORTH_BLUE;
					HUD::GET_HUD_COLOUR(hudColorIndex, &red, &green, &blue, &alpha);
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_672, red, green, blue, alpha);
					blLocal_670 = HUD::ADD_BLIP_FOR_COORD(uLocal_676[iLocal_707 /*3*/]);
					HUD::SHOW_HEIGHT_ON_BLIP(blLocal_670, false);
					HUD::SET_BLIP_SCALE(blLocal_670, 1.2f);
					blLocal_671 = HUD::ADD_BLIP_FOR_COORD(uLocal_676[iLocal_707 + 1 /*3*/]);
				
					if (iLocal_707 + 1 == iLocal_675 - 1)
					{
						HUD::SET_BLIP_SCALE(blLocal_671, 1.2f);
						HUD::SET_BLIP_SPRITE(blLocal_671, BLIP_RACEFLAG);
						HUD::SHOW_HEIGHT_ON_BLIP(blLocal_671, false);
					}
					else
					{
						HUD::SET_BLIP_SCALE(blLocal_671, 0.7f);
						HUD::SHOW_HEIGHT_ON_BLIP(blLocal_671, false);
					}
				}
				else if (iLocal_707 == iLocal_675 - 1)
				{
					hudColorIndex = func_402(func_403(iLocal_707));
					HUD::GET_HUD_COLOUR(hudColorIndex, &red, &green, &blue, &alpha);
					iLocal_672 = GRAPHICS::CREATE_CHECKPOINT(func_403(iLocal_707), uLocal_676[iLocal_707 /*3*/] + { 2f, 0f, 0f }, uLocal_676[iLocal_707 /*3*/], 3.2f, red, green, blue, alpha, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_672, 1.6f, 1.6f, 100f);
					blLocal_670 = HUD::ADD_BLIP_FOR_COORD(uLocal_676[iLocal_707 /*3*/]);
					HUD::SET_BLIP_SCALE(blLocal_670, 1.2f);
					HUD::SET_BLIP_SPRITE(blLocal_670, BLIP_RACEFLAG);
					HUD::SHOW_HEIGHT_ON_BLIP(blLocal_670, false);
				}
			}
		}
		else if (iLocal_707 == iLocal_675 - 1)
		{
			if (func_351(PLAYER::PLAYER_PED_ID(), uLocal_667, true) < 4f)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (iLocal_672 != 0)
					{
						_DEBUG_PRINT("Create prev CP");
						iLocal_674 = 180;
						hudColorIndex = HUD_COLOUR_WHITE;
						HUD::GET_HUD_COLOUR(hudColorIndex, &r, &g, &b, &iLocal_674);
						iLocal_673 = GRAPHICS::CREATE_CHECKPOINT(10, uLocal_676[iLocal_707 /*3*/] + { 2f, 0f, 0f }, uLocal_676[iLocal_707 /*3*/], 3.2f, r, g, b, iLocal_674, 0);
						GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_673, r, g, b, iLocal_674);
						GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_673, r, g, b, iLocal_674);
					}
				
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
					iLocal_453 = 1;
					iLocal_155 = 0;
					iLocal_156 = 8;
					_DEBUG_PRINT("PLAYER_AT_FINISH_LINE");
				}
			}
		}
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_676[iLocal_707 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	
		if (iLocal_672 != 0)
		{
			if (distanceBetweenCoords > 100f)
			{
				alpha = 240;
				hudColorIndex = HUD_COLOUR_YELLOWLIGHT;
				HUD::GET_HUD_COLOUR(hudColorIndex, &red, &green, &blue, &alpha);
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_672, red, green, blue, alpha);
				hudColorIndex = HUD_COLOUR_NORTH_BLUE;
				HUD::GET_HUD_COLOUR(hudColorIndex, &red, &green, &blue, &alpha);
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_672, red, green, blue, alpha);
			}
			else
			{
				hudColorIndex = HUD_COLOUR_YELLOWLIGHT;
				HUD::GET_HUD_COLOUR(hudColorIndex, &red, &green, &blue, &alpha);
				alpha = SYSTEM::ROUND(distanceBetweenCoords * 2.4f);
			
				if (alpha < 60)
					alpha = 60;
			
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_672, red, green, blue, alpha);
				hudColorIndex = HUD_COLOUR_NORTH_BLUE;
				HUD::GET_HUD_COLOUR(hudColorIndex, &red, &green, &blue, &alpha);
				alpha = SYSTEM::ROUND(distanceBetweenCoords * 2.4f);
			
				if (alpha < 60)
					alpha = 60;
			
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_672, red, green, blue, alpha);
			}
		}
	}

	if (iLocal_673 != 0)
	{
		iLocal_674 = iLocal_674 - 25;
	
		if (iLocal_674 > 0)
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &alpha);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_673, r, g, b, iLocal_674);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_673, r, g, b, iLocal_674);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_673);
		}
	}

	if (iLocal_708 < iLocal_675)
		if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_347, uLocal_676[iLocal_708 /*3*/], 3f, 3f, 3f, false, true, 0))
			iLocal_708 = iLocal_708 + 1;

	return;
}

eHudColour func_402(int iParam0) // Position - 0x3105A
{
	iParam0 = iParam0;
	return 13;
}

int func_403(int iParam0) // Position - 0x31068
{
	var unk;
	var unk2;
	var unk3;
	float unk4;
	float unk5;
	float unk6;
	float unk7;
	float unk8;
	float unk9;

	num = 180f;
	num2 = 140f;
	num3 = 80f;
	unk = { uLocal_676[iParam0 /*3*/] };

	if (iParam0 == iLocal_675 - 1)
	{
		return 10;
	}
	else if (iParam0 == 0)
	{
		unk7 = { -1869.12f, -445.17f, 45.17f };
		unk4 = { uLocal_676[iParam0 + 1 /*3*/] };
	}
	else
	{
		unk7 = { uLocal_676[iParam0 - 1 /*3*/] };
		unk4 = { uLocal_676[iParam0 + 1 /*3*/] };
	}

	x1 = { unk7 - unk };
	x2 = { unk4 - unk };
	angleBetween2dVectors = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1);

	if (angleBetween2dVectors > 180f)
		angleBetween2dVectors = 360f - angleBetween2dVectors;

	if (angleBetween2dVectors < num3)
		return 8;
	else if (angleBetween2dVectors < num2)
		return 7;
	else if (angleBetween2dVectors < num)
		return 6;
	else
		return 6;

	return 6;
}

void func_404() // Position - 0x31161
{
	if (iLocal_156 != 8 && iLocal_156 != 10 && iLocal_156 > 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_347))
		{
			CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED();
			func_45();
			func_302();
			CHECK_IF_PLAYER_LEFT_THE_COURSE_OR_MARY_ANN();
			func_405();
		}
	}

	return;
}

void func_405() // Position - 0x311A2
{
	if (iLocal_156 != 9 && iLocal_156 != 10)
	{
		if (func_351(pedLocal_347, uLocal_667, true) < 3f)
		{
			_DEBUG_PRINT("Detected Mary Ann won race");
			iLocal_158 = 5;
			iLocal_155 = 0;
			iLocal_156 = 9;
		}
	}

	return;
}

void CHECK_IF_PLAYER_LEFT_THE_COURSE_OR_MARY_ANN() // Position - 0x311E1
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_658, true) > 60f || func_410(60f))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
		iLocal_158 = 6;
		iLocal_155 = 0;
		iLocal_156 = 10;
	}
	else if (sLocal_175.f_1 == 0)
	{
		if (!func_409(sLocal_173, 0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_658, true) > 40f || func_410(40f))
			{
				if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				{
					_DEBUG_PRINT("stop scripted conversation at CHECK_IF_PLAYER_LEFT_THE_COURSE_OR_MARY_ANN");
					func_15();
				}
			
				HUD::CLEAR_PRINTS();
				_SHOW_SUBTITLE(sLocal_175, 7500, 1);
				sLocal_175.f_1 = 1;
			}
		}
	}

	if (iLocal_656 < iLocal_657)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), true) > 70f)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
			iLocal_158 = 4;
			iLocal_155 = 0;
			iLocal_156 = 10;
		}
		else if (sLocal_173.f_1 == 0 && !func_409(sLocal_175, 0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_347, true), true) > 50f)
			{
				_SHOW_SUBTITLE_CLEAR_EXISTING(sLocal_173, 7500, 1);
				sLocal_173.f_1 = 1;
			}
		}
	}

	return;
}

void _SHOW_SUBTITLE_CLEAR_EXISTING(char* sParam0, int iParam1, int iParam2) // Position - 0x31311
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

void _SHOW_SUBTITLE(char* sParam0, int iParam1, int iParam2) // Position - 0x3132A
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
	return;
}

BOOL func_409(char* sParam0, int iParam1, const char* sParam2) // Position - 0x31343
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);

	if (iParam1 == 1)
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);

	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

BOOL func_410(float fParam0) // Position - 0x31361
{
	int point;

	if (iLocal_707 < iLocal_675 - 1)
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_653, uLocal_676[iLocal_707 /*3*/], &point);
	
		if (point < iLocal_656)
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_676[iLocal_707 /*3*/], true) > fParam0)
				return true;
	}

	return false;
}

void func_411(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x313B3
{
	float num;
	int value;
	int alpha;
	int value2;
	var text;
	float unk;
	float x;
	int y;
	int r;
	int g;
	var b;
	eCharacter a;

	if (Global_79644 != 6)
	{
		if (Global_79646 == -1)
		{
			if (func_422(1, uParam0))
			{
				if (Global_79647 == 3)
					num = 1.5f;
				else
					num = 2.5f;
			
				if (fLocal_19 > num)
				{
					Global_79646 = MISC::GET_GAME_TIMER();
					fLocal_20 = { HUD::GET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT) };
					fLocal_19 = 0f;
				}
				else
				{
					fLocal_19 = fLocal_19 + MISC::GET_FRAME_TIME();
				}
			}
			else
			{
				fLocal_19 = 0f;
			}
		}
		else
		{
			if (!func_422(0, uParam0))
				Global_79646 = MISC::GET_GAME_TIMER() - 9000;
		
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
			value = MISC::GET_GAME_TIMER() - Global_79646;
		
			if (value < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				alpha = 255;
			
				if (value < 1000)
				{
					alpha = SYSTEM::CEIL((SYSTEM::TO_FLOAT(value) / 1000f) * 255f);
				}
				else
				{
					value2 = 9000 - value;
				
					if (value2 < 1000)
						alpha = SYSTEM::CEIL((SYSTEM::TO_FLOAT(value2) / 1000f) * 255f);
				}
			
				switch (Global_79644)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							x = 0f;
							y = -0.07f;
						}
						else if (iParam7 == 1)
						{
							x = 0f;
							y = -0.077f;
						}
						else if (iParam8 == 1)
						{
							x = 0f;
							y = -0.05f;
						}
						else if (iParam9 == 1)
						{
							x = 0f;
							y = -0.035f;
						}
						else
						{
							x = 0f;
							y = -0.014f;
						}
						break;
				
					default:
						x = 0f;
						y = -0.014f;
						break;
				}
			
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (Global_79647 == 1 && Global_79645 == 62)
					character = Global_113969.f_2366.f_539.f_4322;
			
				switch (character)
				{
					case CHAR_MICHAEL:
						HUD::GET_HUD_COLOUR(HUD_COLOUR_MICHAEL, &r, &g, &b, &a);
						break;
				
					case CHAR_FRANKLIN:
						HUD::GET_HUD_COLOUR(HUD_COLOUR_FRANKLIN, &r, &g, &b, &a);
						break;
				
					case CHAR_TREVOR:
						HUD::GET_HUD_COLOUR(HUD_COLOUR_TREVOR, &r, &g, &b, &a);
						break;
				
					default:
						r = 240;
						g = 200;
						b = 80;
				}
			
				HUD::SET_TEXT_COLOUR(r, g, b, alpha);
				HUD::SET_TEXT_DROP_SHADOW();
				text = { func_413(Global_79645, Global_79647, iParam10) };
				y == -0.014f;
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(x, y, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
			
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
					fLocal_24 = 0.14f;
				else
					fLocal_24 = 0.17f;
			
				if (y == -0.014f)
				{
					if (func_412(&text) > fLocal_24)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(HUD_SUBTITLE_TEXT))
						{
							HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, fLocal_20, fLocal_20.f_1 + fLocal_23);
							Global_79649 = true;
						}
					}
				}
			
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, y, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			
				if (Global_79648 == 1)
				{
					func_234();
					fLocal_19 = 0f;
				}
			}
			else
			{
				func_234();
				fLocal_19 = 0f;
			}
		}
	}

	return;
}

float func_412(const char* sParam0) // Position - 0x31698
{
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

struct<2> func_413(int iParam0, int iParam1, int iParam2) // Position - 0x316AB
{
	var unk;
	int unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam1)
	{
		case 1:
			unk = { func_421(iParam0) };
			break;
	
		case 7:
			unk = { func_218(iParam0) };
			break;
	
		case 3:
			num = iParam0;
		
			switch (num)
			{
				case 0:
					unk = { func_420(iParam2) };
					break;
			
				case 8:
					unk = { func_419(iParam2) };
					break;
			
				case 7:
					unk = { func_418(iParam2) };
					break;
			
				case 10:
					unk = { func_417(iParam2) };
					break;
			
				case 5:
					unk = { func_416(iParam2) };
					break;
			
				case 4:
					unk = { func_415(iParam2) };
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&unk, func_414(num), 8);
					break;
			}
			break;
	
		default:
			break;
	}

	return unk;
}

char* func_414(int iParam0) // Position - 0x31782
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM" /*Base Jumping*/;
	
		case 1:
			return "MG_DART" /*Darts*/;
	
		case 2:
			return "MG_GOLF" /*Golf*/;
	
		case 3:
			return "MG_HUNT" /*Hunting*/;
	
		case 4:
			return "MG_OFFR" /*Offroad Races*/;
	
		case 5:
			return "MG_PILO" /*Flight School*/;
	
		case 6:
			return "MG_RMPG" /*Rampages*/;
	
		case 7:
			return "MG_SERA" /*Sea Races*/;
	
		case 8:
			return "MG_SRAC" /*Street Races*/;
	
		case 9:
			return "MG_STRP" /*Stripclub*/;
	
		case 10:
			return "MG_STNT" /*Stunt Planes*/;
	
		case 11:
			return "MG_SHTR" /*Shooting Range*/;
	
		case 12:
			return "MG_TAXI" /*Taxi Jobs*/;
	
		case 13:
			return "MG_TENN" /*Tennis*/;
	
		case 14:
			return "MG_TOWI" /*Towing*/;
	
		case 15:
			return "MG_TRFA" /*Trafficking - Air*/;
	
		case 16:
			return "MG_TRFG" /*Trafficking - Ground*/;
	
		case 17:
			return "MG_TRIA" /*Triathlon*/;
	
		case 18:
			return "MG_YOGA" /*Yoga*/;
	
		case 19:
			return "MG_CRCE" /*Stock Car Races*/;
	}

	return "INVALID!";
}

struct<2> func_415(int iParam0) // Position - 0x318EA
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MGOR_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_416(int iParam0) // Position - 0x3191F
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MGFS_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_417(int iParam0) // Position - 0x31954
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MGSP_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_418(int iParam0) // Position - 0x31989
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MGSR_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_419(int iParam0) // Position - 0x319BE
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3) || iParam0 == 3)
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MGCR_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_420(int iParam0) // Position - 0x319FD
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	TEXT_LABEL_ASSIGN_INT(&unk3, iParam0, 8);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MGBJ_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_421(int iParam0) // Position - 0x31A32
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "M_", 8);
	TEXT_LABEL_APPEND_STRING(&unk, &(Global_92301[iParam0 /*34*/].f_8), 8);

	if (iParam0 == 90)
	{
		switch (Global_113969.f_9088.f_99.f_205[7])
		{
			case 1:
				TEXT_LABEL_APPEND_STRING(&unk, "A", 8);
				break;
		
			case 2:
				TEXT_LABEL_APPEND_STRING(&unk, "B", 8);
				break;
		
			default:
				TEXT_LABEL_APPEND_STRING(&unk, "A", 8);
				break;
		}
	}

	return unk;
}

BOOL func_422(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x31A9F
{
	if (!func_424(0) || Global_79660 || Global_79648 == 1 || !CAM::IS_SCREEN_FADED_IN())
		return false;

	switch (Global_79644)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE" /*None*/) || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
				Global_79644 = 3;
			else
				Global_79644 = 1;
			break;
	
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
				Global_79644 = 2;
			break;
	
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Global_79644 = 4;
				return true;
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				Global_79644 = 3;
			}
			break;
	
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_79644 = 5;
				return true;
			}
			break;
	
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
				return true;
			else if (iParam0 == 1)
				Global_79644 = 5;
			break;
	
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() || func_295(0) || func_423(true))
			{
			}
			else
			{
				return true;
			}
			break;
	}

	return false;
}

BOOL func_423(BOOL bParam0) // Position - 0x31BB8
{
	if (bParam0)
		return Global_23692.f_4 && Global_23692.f_104 == 4;

	return Global_23692.f_4;
}

BOOL func_424(int iParam0) // Position - 0x31BE1
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x31C03
{
	return func_426(iParam0, Global_44042);
}

BOOL func_426(int iParam0, int iParam1) // Position - 0x31C14
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

void JUMP_TO_STAGE(int iParam0) // Position - 0x31DF5
{
	func_440(true, true);
	HUD::CLEAR_PRINTS();
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	func_439(false, true);
	HUD::DISPLAY_RADAR(true);
	AUDIO::STOP_SOUND(iLocal_714);
	iLocal_715 = 0;
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	iLocal_624 = 0;
	iLocal_171 = 0;
	func_12(&blLocal_670);
	func_12(&blLocal_671);
	GRAPHICS::DELETE_CHECKPOINT(iLocal_672);

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		_DEBUG_PRINT("Stopping scripted convo at jump_to_stage");
		func_37();
	}

	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_179);
	PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &hLocal_179);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_179, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), hLocal_179);
	STREAMING::REQUEST_MODEL(joaat("IG_MaryAnn"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_MaryAnn")))
	{
		SYSTEM::WAIT(0);
	}

	func_5();
	func_438();
	iLocal_388 = MISC::GET_GAME_TIMER();
	iLocal_393 = MISC::GET_GAME_TIMER();
	iLocal_389 = 0;
	pedLocal_347 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("IG_MaryAnn"), -1865.9f, -448.81f, 45.13f, -143.87f, true, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_347, hLocal_179);
	PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_347, "FEMALE_FAST_RUNNER", 1048576000);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_347, PV_COMP_LOWR, 1, 0, 0);
	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_181, 3, pedLocal_347, "MARYANN", 0, 1);

	if (iParam0 <= 3)
	{
		iLocal_351 = 1800;
		iLocal_352 = 4500;
	}

	if (iParam0 == 0)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_347, 0);
			AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
		}
	}
	else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_347, "FANATIC_MIX_MARY_ANNE", 0);
	}

	switch (iParam0)
	{
		case 0:
			func_365("ef_1_rcm", false);
		
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				_DEBUG_PRINT("Trying to set Mary Ann component variation");
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", pedLocal_347, joaat("CS_MaryAnn"));
			}
		
			iLocal_707 = 0;
			iLocal_708 = 1;
			PED::REMOVE_RELATIONSHIP_GROUP(hLocal_179);
			func_4(false);
			func_437();
			func_436();
			func_435();
			iLocal_155 = 0;
			iLocal_156 = 1;
			break;
	
		case 1:
			iLocal_707 = 0;
			iLocal_708 = 1;
		
			if (!func_434())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1878.2344f, -439.6985f, 45.0299f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 241.0468f);
			}
		
			MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 7f, 0);
			ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1869.24f, -444.99f, 45.17f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(pedLocal_347, -143.87f);
			func_4(false);
			func_437();
			func_436();
			func_435();
			func_373(2, 1);
		
			if (!func_434())
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), true, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0, true, false, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			break;
	
		case 2:
			iLocal_707 = 3;
			iLocal_708 = 4;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1731.05f, -549.78f, 36.4f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 104.26f);
			TASK::CLEAR_PED_TASKS(pedLocal_347);
			ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1732.8805f, -551.76324f, 36.5f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(pedLocal_347, 115.26f);
			func_4(false);
			MISC::CLEAR_AREA_OF_VEHICLES(-1806.4955f, -525.8696f, 29.92591f, 100f, false, false, false, false, false, false, 0);
			func_437();
			func_436();
			func_435();
			func_373(3, 1);
			break;
	
		case 3:
			iLocal_707 = 5;
			iLocal_708 = 6;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1832.52f, -519.37f, 27.89f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 162.59f);
			TASK::CLEAR_PED_TASKS(pedLocal_347);
			ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1833.81f, -523.7f, 28.14f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(pedLocal_347, 172.66f);
			func_437();
		
			while (!func_329() || !func_331())
			{
				SYSTEM::WAIT(0);
			}
		
			func_433();
			func_328(true);
			func_332();
			func_435();
			func_4(true);
			func_373(4, 1);
			break;
	
		case 4:
			iLocal_707 = 6;
			iLocal_708 = 7;
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1850.1f, -592.21f, 18.2f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 124.19f);
			TASK::CLEAR_PED_TASKS(pedLocal_347);
			ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1849.61f, -592.9f, 18.2f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(pedLocal_347, 135.16f);
			func_437();
		
			while (!func_329() || !func_331())
			{
				SYSTEM::WAIT(0);
			}
		
			func_433();
			func_328(false);
			func_332();
		
			if (func_318(pedLocal_626))
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(EVENT_SHOCKING_INJURED_PED, pedLocal_626, -1f);
		
			func_435();
			func_4(true);
		
			if (func_430(1))
				_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_BCHB", 7, 0, 0, 0);
			else
				_CONVERSATION_ADD_LINE(&uLocal_181, "FAN1AU", "FAN1_BCHA", 7, 0, 0, 0);
		
			func_373(5, 1);
			break;
	
		case 5:
			iLocal_707 = 8;
			iLocal_708 = 9;
			func_437();
		
			while (!func_329() || !func_331())
			{
				SYSTEM::WAIT(0);
			}
		
			func_433();
			func_328(true);
			func_332();
			func_435();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uLocal_667, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 19.95f);
		
			if (func_318(pedLocal_347))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_347);
				ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1986.93f, -526.39f, 11.7f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(pedLocal_347, 44.46f);
			}
		
			func_4(true);
			func_373(6, 1);
			break;
	
		case 6:
			iLocal_707 = 8;
			iLocal_708 = 9;
			func_437();
		
			while (!func_329() || !func_331())
			{
				SYSTEM::WAIT(0);
			}
		
			func_433();
			func_328(true);
			func_332();
			func_435();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2001.27f, -514.18f, 11f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 19.95f);
		
			if (func_318(pedLocal_347))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_347);
				ENTITY::SET_ENTITY_COORDS(pedLocal_347, -1986.93f, -526.39f, 11.7f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(pedLocal_347, 44.46f);
			}
		
			func_4(true);
			func_373(6, 1);
			break;
	}

	func_333(pedLocal_347);
	func_333(PLAYER::PLAYER_PED_ID());

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_347) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		func_302();
		func_386();
	}

	if (func_434())
	{
		_DEBUG_PRINT("JUMP_TO_STAGE: replay being set up");
		func_429(0, -1, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0, true, false, 0);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), true, 0, false);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		SYSTEM::WAIT(1000);
		func_428(1, 1, 1);
	}
	else
	{
		_DEBUG_PRINT("JUMP_TO_STAGE: replay not being set up");
	
		if (iLocal_156 == 1)
		{
			while (!func_359(1, 1093140480, 0))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
					{
						_DEBUG_PRINT("Trying to set Mary Ann component variation");
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", pedLocal_347, joaat("CS_MaryAnn"));
					}
				}
			
				func_365("ef_1_rcm", false);
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			SYSTEM::WAIT(1000);
			func_428(1, 1, 1);
		}
	}

	return;
}

void func_428(int iParam0, int iParam1, int iParam2) // Position - 0x32536
{
	func_275(0, 0, iParam2, true);

	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}

	if (iParam1 == 1)
		func_306(500, false);

	return;
}

void func_429(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x3256A
{
	if (_IS_MISSION_REPLAY_IN_PROGRESS() && func_434())
	{
		while (Global_101528 != 6)
		{
			SYSTEM::WAIT(0);
		}
	
		MISC::SET_GAME_PAUSED(false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	
		if (veParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(veParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
	
		if (iParam2 == 1)
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_79(0);
	}

	return;
}

BOOL func_430(int iParam0) // Position - 0x3262E
{
	int i;

	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_431(iParam0, 12))
				return true;
		
			for (i = 0; i <= 15; i = i + 1)
			{
				if (i != 12)
					if (!func_431(iParam0, i))
						return false;
			}
		
			return true;
	
		case 3:
			if (func_215(PLAYER::PLAYER_PED_ID(), 12, 6))
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_431(int iParam0, int iParam1) // Position - 0x326A8
{
	ePedComponentType type;

	if (iParam1 != 14)
		type = func_107(PLAYER::PLAYER_PED_ID(), iParam1, PV_COMP_INVALID);

	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					if (type == 69 || type >= 17 && type <= 32 || type == 69 || type >= 77 && type <= 84 || type >= 85 && type <= 90 || type >= 113 && type <= 128 || type >= 171 && type <= 173)
						return true;
					break;
			
				case 4:
					if (type == 40 || type >= 41 && type <= 45 || type >= 89 && type <= 91 || type >= 96 && type <= 111)
						return true;
					break;
			
				case 6:
					if (type == PV_COMP_FEET || type == 13 || type == PV_COMP_TEEF || type >= 20 && type <= 29)
						return true;
					break;
			
				case 8:
					if (type == PV_COMP_HEAD || type == PV_COMP_DECL || type == PV_COMP_JBIB || type == 16)
						return true;
					break;
			
				case 9:
					if (type == PV_COMP_HEAD)
						return true;
					break;
			
				case 12:
					if (type == 13 || type == PV_COMP_TASK)
						return true;
					break;
			
				case 14:
					type = func_107(PLAYER::PLAYER_PED_ID(), iParam1, PV_COMP_BERD);
				
					if (type == 58 || type >= 70 && type <= 79 || type == 61 || type >= 62 && type <= 69 || type >= 80 && type <= 89 || type >= 91 && type <= 102 || type >= 103 && type <= 110)
						return true;
				
					if (!func_432(PLAYER::PLAYER_PED_ID()))
						return true;
					break;
			
				default:
					return true;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 3:
					if (type >= PV_COMP_HEAD && type <= 15 || type >= 18 && type <= 26 || type == 53 || type >= 54 && type <= 69 || type >= 79 && type <= 94 || type == 95 || type >= 120 && type <= 135 || type >= 162 && type <= 177)
						return true;
					break;
			
				case 4:
					if (type == 17 || type == 33 || type >= 54 && type <= 61 || type == 91)
						return true;
					break;
			
				case 6:
					if (type == PV_COMP_ACCS || type == PV_COMP_JBIB || type == 34)
						return true;
					break;
			
				case 8:
					if (type == PV_COMP_HEAD || type == PV_COMP_BERD || type == PV_COMP_DECL || type == 15)
						return true;
					break;
			
				case 9:
					if (type == PV_COMP_HEAD || type == PV_COMP_TEEF)
						return true;
					break;
			
				case 12:
					if (type == PV_COMP_HAND || type == PV_COMP_TASK)
						return true;
					break;
			
				case 14:
					type = func_107(PLAYER::PLAYER_PED_ID(), iParam1, PV_COMP_BERD);
				
					if (type == 89 || type >= 100 && type <= 109 || type == 111 || type >= 113 && type <= 122 || type >= 123 && type <= 132 || type >= 133 && type <= 142 || type >= 90 && type <= 99 || type >= 143 && type <= 152)
						return true;
				
					if (!func_432(PLAYER::PLAYER_PED_ID()))
						return true;
					break;
			
				default:
					return true;
			}
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_432(Ped pedParam0) // Position - 0x32B5A
{
	ePedComponentType i;

	for (i = PV_COMP_HEAD; i <= PV_COMP_TASK; i = i + 1)
	{
		if (PED::GET_PED_PROP_INDEX(pedParam0, i, 1) != -1)
			return true;
	}

	return false;
}

void func_433() // Position - 0x32B87
{
	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_647))
	{
		pedLocal_647 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("A_C_Rottweiler"), uLocal_648, fLocal_651, true, true);
		PED::SET_PED_CAN_RAGDOLL(pedLocal_647, true);
	}

	return;
}

BOOL func_434() // Position - 0x32BBA
{
	return IS_BIT_SET(Global_101533.f_20, 13);
}

void func_435() // Position - 0x32BCB
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_623);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rottweiler"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BayWatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_MaryAnn"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_452);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("regina"));
	return;
}

void func_436() // Position - 0x32C32
{
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::REQUEST_MODEL(joaat("banshee"));
	STREAMING::REQUEST_MODEL(joaat("regina"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_SalvaGoon_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("banshee")) || !STREAMING::HAS_MODEL_LOADED(joaat("regina")))
	{
		SYSTEM::WAIT(0);
	}

	MISC::CLEAR_AREA_OF_VEHICLES(1829.3843f, -516.19f, 27.85739f, 7f, false, false, false, false, false, false, 0);

	if (!func_7(pedLocal_547.f_2))
	{
		pedLocal_547.f_5 = { -1833.33f, -513.3883f, 28.210709f };
		pedLocal_547.f_11 = 286.343f;
		pedLocal_547.f_8 = { -1721.02f, -559.7f, 37.46f };
		pedLocal_547.f_12 = 18f;
		pedLocal_547.f_4 = joaat("banshee");
		pedLocal_547.f_2 = VEHICLE::CREATE_VEHICLE(pedLocal_547.f_4, pedLocal_547.f_5, pedLocal_547.f_11, true, true, false);
		VEHICLE::SET_VEHICLE_COLOURS(pedLocal_547.f_2, 1, 1);
		pedLocal_547 = PED::CREATE_PED_INSIDE_VEHICLE(pedLocal_547.f_2, PED_TYPE_CIVMALE, joaat("G_M_Y_SalvaGoon_01"), -1, true, true);
		pedLocal_547.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(pedLocal_547.f_2, PED_TYPE_CIVMALE, joaat("G_M_Y_SalvaGoon_01"), 0, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_547.f_1, BF_CanLeaveVehicle, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_547.f_1, BF_CanTauntInVehicle, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_547, BF_AlwaysFlee, true);
	}

	if (!func_7(pedLocal_561.f_2))
	{
		pedLocal_561.f_5 = { -2000.79f, -494.35f, 11.09f };
		pedLocal_561.f_11 = 321.61f;
		pedLocal_561.f_8 = { -1719.08f, -559.41f, 36.33f };
		pedLocal_561.f_12 = 12f;
		pedLocal_561.f_4 = joaat("regina");
		pedLocal_561.f_2 = VEHICLE::CREATE_VEHICLE(pedLocal_561.f_4, pedLocal_561.f_5, pedLocal_561.f_11, true, true, false);
		pedLocal_561 = PED::CREATE_PED_INSIDE_VEHICLE(pedLocal_561.f_2, PED_TYPE_CIVMALE, joaat("G_M_Y_SalvaGoon_01"), -1, true, true);
		pedLocal_561.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(pedLocal_561.f_2, PED_TYPE_CIVMALE, joaat("G_M_Y_SalvaGoon_01"), 0, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_561, BF_AlwaysFlee, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_561.f_1, BF_AlwaysFlee, true);
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("regina"));
	return;
}

void func_437() // Position - 0x32E42
{
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1celebrate");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1yell");
	STREAMING::REQUEST_ANIM_DICT("move_f@runner");
	STREAMING::REQUEST_ANIM_SET("FEMALE_FAST_RUNNER");
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_653);
	TASK::REQUEST_WAYPOINT_RECORDING("Fanatic1RollingStart");
	HUD::REQUEST_ADDITIONAL_TEXT("FATIC1", 0);
	STREAMING::REQUEST_MODEL(joaat("IG_MaryAnn"));

	while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1") || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1celebrate") || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1yell") || !STREAMING::HAS_ANIM_DICT_LOADED("move_f@runner") || !STREAMING::HAS_ANIM_SET_LOADED("FEMALE_FAST_RUNNER") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_653) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fanatic1RollingStart") || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_MaryAnn")))
	{
		_DEBUG_PRINT("Loading other assets");
		SYSTEM::WAIT(0);
	}

	return;
}

void func_438() // Position - 0x32F2A
{
	iLocal_391 = 0;
	iLocal_389 = 0;
	iLocal_388 = MISC::GET_GAME_TIMER();
	iLocal_393 = MISC::GET_GAME_TIMER();
	iLocal_395 = MISC::GET_GAME_TIMER();
	iLocal_394 = 0;
	sLocal_385.f_1 = 0;
	sLocal_379.f_1 = 0;
	sLocal_382.f_1 = 0;
	uLocal_396[0 /*5*/].f_2 = 0;
	uLocal_396[1 /*5*/].f_2 = 0;
	uLocal_396[2 /*5*/].f_2 = 0;
	sLocal_437.f_2 = 0;
	sLocal_432.f_2 = 0;
	sLocal_442.f_2 = 0;
	sLocal_412.f_2 = 0;
	sLocal_417.f_2 = 0;
	sLocal_422.f_2 = 0;
	sLocal_427.f_2 = 0;
	sLocal_175.f_1 = 0;
	sLocal_173.f_1 = 0;
	sLocal_177.f_1 = 0;
	iLocal_365 = 0;
	iLocal_369 = 0;
	return;
}

void func_439(BOOL bParam0, BOOL bParam1) // Position - 0x32FC1
{
	HUD::CLEAR_HELP(true);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	CAM::RENDER_SCRIPT_CAMS(false, bParam0, 3000, true, false, 0);

	if (CAM::DOES_CAM_EXIST(caLocal_457))
	{
		CAM::SET_CAM_ACTIVE(caLocal_457, false);
		CAM::DESTROY_CAM(caLocal_457, false);
	}

	if (bParam1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1065353216);
	}

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	return;
}

void func_440(BOOL bParam0, BOOL bParam1) // Position - 0x33035
{
	if (bParam0)
		func_441(false, 1, 1);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	func_305(0f, 0f, 0f, 0, 0, 0, 1, 1, true, bParam1, true, 1, true);
	return;
}

void func_441(BOOL bParam0, int iParam1, int iParam2) // Position - 0x33068
{
	BOOL isCutsceneActive;

	isCutsceneActive = true;

	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (isCutsceneActive)
		{
			isCutsceneActive = CUTSCENE::IS_CUTSCENE_ACTIVE();
		
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
				CUTSCENE::STOP_CUTSCENE(false);
		
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
				CUTSCENE::REMOVE_CUTSCENE();
		
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
				isCutsceneActive = false;
		
			SYSTEM::WAIT(0);
		}
	
		if (bParam0)
			func_275(iParam1, iParam2, 1, true);
	}

	return;
}

int func_442() // Position - 0x330C7
{
	if (!(Global_101533 == 10) && !(Global_101533 == 9))
		return 0;

	return Global_101533.f_2;
}

void func_443() // Position - 0x330F1
{
	HUD::CLEAR_PRINTS();
	_DEBUG_PRINT("IN INIT");
	sLocal_653 = "Fanatic1MaryAnn";
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1877.0222f, -439.5663f, 47.061394f, -1809.6149f, -493.49396f, 39.58508f, 12.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1816.8652f, -492.40805f, 42.83916f, -1792.1584f, -470.2095f, 38.512688f, 12.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1792.1937f, -470.23193f, 42.51471f, -1726.9264f, -552.83746f, 35.24149f, 12.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1728.0237f, -561.8721f, 39.49737f, -1835.2845f, -514.9333f, 26.335573f, 19.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1822.2256f, -535.3092f, 31.955553f, -1890.2783f, -616.27637f, 9.657555f, 39.75f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1867.2428f, -622.763f, 13.383512f, -2013.267f, -497.97995f, 9.736394f, 23.75f, true, false, false, false, false, 0, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_179);
	PED::ADD_RELATIONSHIP_GROUP("FRIENDLIES", &hLocal_179);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_179, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), hLocal_179);
	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_181, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	func_437();

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_347, hLocal_179);
		PED::SET_PED_SEEING_RANGE(pedLocal_347, 25f);
		PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_347, "FEMALE_FAST_RUNNER", 1048576000);
	}

	func_444();
	func_436();
	func_4(false);
	iLocal_644 = PED::ADD_SCENARIO_BLOCKING_AREA(-1979.062f, -534.325f, 10.4558f, -1973.332f, -528.2116f, 13.7014f, false, true, true, true, 1);
	iLocal_645 = PED::ADD_SCENARIO_BLOCKING_AREA(-1914.7804f, -591.1177f, 9.8302f, -1910.3289f, -586.7218f, 12.0195f, false, true, true, true, 1);
	iLocal_646 = PED::ADD_SCENARIO_BLOCKING_AREA(-1991.0669f, -523.592f, 10.4269f, -1989.1447f, -521.6824f, 11.3735f, false, true, true, true, 1);
	iLocal_459 = 1;
	iLocal_459.f_1 = "rcmfanatic1out_of_breath";
	iLocal_459.f_2 = "p_zero_tired_enter";
	iLocal_459.f_17 = 2f;
	iLocal_459.f_18 = -8f;
	iLocal_459.f_20 = 48;
	iLocal_459.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	iLocal_481 = 1;
	iLocal_481.f_1 = "rcmfanatic1out_of_breath";
	iLocal_481.f_2 = "p_zero_tired_01";
	iLocal_481.f_17 = 8f;
	iLocal_481.f_18 = -8f;
	iLocal_481.f_20 = 48;
	iLocal_481.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	iLocal_503 = 1;
	iLocal_503.f_1 = "rcmfanatic1out_of_breath";
	iLocal_503.f_2 = "p_zero_tired_02";
	iLocal_503.f_17 = 8f;
	iLocal_503.f_18 = -8f;
	iLocal_503.f_20 = 48;
	iLocal_503.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	iLocal_525 = 1;
	iLocal_525.f_1 = "rcmfanatic1out_of_breath";
	iLocal_525.f_2 = "p_zero_tired_01";
	iLocal_525.f_17 = 8f;
	iLocal_525.f_18 = -1000f;
	iLocal_525.f_20 = 49;
	iLocal_525.f_16 = MISC::GET_HASH_KEY("UpperbodyFeathered_NoLefttArm_filter");
	uLocal_661 = { -1730.2838f, -551.7269f, 36.3939f };
	uLocal_664 = { -1870.6702f, -616.2423f, 10.8184f };
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_653, &iLocal_655);
	uLocal_676[0 /*3*/] = { -1868.36f, -447.84f, 45.2f };
	uLocal_676[1 /*3*/] = { -1835.81f, -468.73f, 43.45f };
	uLocal_676[2 /*3*/] = { -1753.45f, -523.3f, 37.35f };
	uLocal_676[3 /*3*/] = { uLocal_661 };
	uLocal_676[4 /*3*/] = { -1755.65f, -558.99f, 36.11f };
	uLocal_676[5 /*3*/] = { -1828.99f, -516.33f, 27.87f };
	uLocal_676[6 /*3*/] = { -1819.2f, -555.86f, 15.77f };
	uLocal_676[7 /*3*/] = { uLocal_664 };
	uLocal_676[8 /*3*/] = { -1918.04f, -583.45f, 10.76f };
	uLocal_676[9 /*3*/] = { uLocal_667 };
	iLocal_675 = uLocal_676;
	uLocal_366[0] = "FAN1_FALLB_1";
	uLocal_366[1] = "FAN1_FALLB_2";
	uLocal_371[0] = "FAN1_FAST_1";
	uLocal_371[1] = "FAN1_FAST_2";
	uLocal_371[2] = "FAN1_FAST_3";
	sLocal_379 = "FAN1_RUNIN";
	sLocal_382 = "FAN1_RUNIN2";
	sLocal_385 = "FAN1_OVERT";
	uLocal_396[0 /*5*/].f_1 = "FAN1_PUSH_1";
	uLocal_396[1 /*5*/].f_1 = "FAN1_PUSH_2";
	uLocal_396[2 /*5*/].f_1 = "FAN1_PUSH_3";
	sLocal_437.f_1 = "FAN1_CHEAT_1";
	sLocal_437 = "FAN1_CHEAT";
	sLocal_432.f_1 = "FAN1_CHEAT_2";
	sLocal_432 = "FAN1_CHEAT";
	sLocal_442.f_1 = "FAN1_CATCHC_1";
	sLocal_442 = "FAN1_CATCHC";

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		if (func_430(1))
		{
			sLocal_412 = "FAN1_STRTB";
			sLocal_427 = "FAN1_BCHB";
		}
		else
		{
			sLocal_412 = "FAN1_STRTA";
			sLocal_427 = "FAN1_BCHA";
		}
	}

	sLocal_417 = "FAN1_RD1";
	sLocal_422 = "FAN1_RD2";
	sLocal_175 = "FATIC1_7";
	sLocal_173 = "FATIC1_6";
	sLocal_177 = "FATIC1_H";
	_DEBUG_PRINT("end of init");
	return;
}

void func_444() // Position - 0x33625
{
	int points;
	int i;
	Vector3 coord;

	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_653))
	{
		points = 0;
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_653, &points);
		i = 0;
	
		for (i = 0; i <= points; i = i + 1)
		{
			coord = { 0f, 0f, 0f };
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_653, i, &coord);
			MISC::CLEAR_AREA_OF_VEHICLES(coord, 4f, false, false, false, false, false, false, 0);
			func_352("Clearing area around waypoint", i);
		}
	}

	return;
}

void func_445(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Position - 0x33688
{
	if (_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_101533.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		Global_101529 = { fParam0 };
		Global_101532 = fParam3;
		Global_101528 = 1;
	
		if (iParam4 == 1)
			MISC::SET_BIT(&(Global_101533.f_20), 14);
		else
			MISC::CLEAR_BIT(&(Global_101533.f_20), 14);
	
		if (iParam5 == 1)
			MISC::SET_BIT(&(Global_101533.f_20), 24);
		else
			MISC::CLEAR_BIT(&(Global_101533.f_20), 24);
	
		func_79(1);
	}

	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x3371D
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_447(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3373E
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[i]))
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_28[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	for (i = 0; i < 5; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_35[i]))
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_35[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	for (i = 0; i < 6; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_41[i]))
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_41[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1);
	
		if (bParam2)
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}

	return;
}

BOOL func_448(eCharacter echParam0) // Position - 0x33833
{
	if (!func_3(echParam0))
		return false;

	return Global_113969.f_2366.f_539.f_2332[echParam0];
}

void func_449(int iParam0, BOOL bParam1) // Position - 0x3385A
{
	if (bParam1)
		MISC::SET_BIT(&Global_33197, iParam0);
	else
		MISC::CLEAR_BIT(&Global_33197, iParam0);

	return;
}

BOOL func_450(var uParam0) // Position - 0x3387C
{
	int num;
	int unk;
	BOOL i;

	num = 1;
	num[0] = iLocal_93;

	switch (iLocal_92)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_9), "EF_1_RCM", 24);
		
			for (i = 0; i <= num - 1; i = i + 1)
			{
				STREAMING::REQUEST_MODEL(num[i]);
			}
		
			func_457(&(uParam0->f_48), "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 0);
			uParam0->f_48.f_5 = { -1878.223f, -440.51813f, 46.03983f };
			uParam0->f_48.f_8 = { 0f, 0f, 159.97f };
			iLocal_92 = 1;
			break;
	
		case 1:
			if (!func_456(&num) || !func_454(&(uParam0->f_48)))
				return false;
		
			iLocal_92 = 2;
			break;
	
		case 2:
			flag = true;
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (func_451(&uParam0->f_28[0], CHAR_MARY_ANN, -1878.27f, -440.55f, 46.23f, 165.94f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
				}
				else
				{
					flag = false;
				}
			}
		
			if (flag)
				iLocal_92 = 3;
			break;
	
		case 3:
			for (i = 0; i <= num - 1; i = i + 1)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(num[i]);
			}
		
			return true;
	}

	return false;
}

BOOL func_451(Ped* ppedParam0, eCharacter echParam1, float fParam2, float fParam3, float fParam4, float fParam5, char* sParam6, int iParam7) // Position - 0x339DA
{
	if (func_452(ppedParam0, echParam1, fParam2, fParam5, true))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, true);
				PED::SET_PED_MONEY(*ppedParam0, 0);
			
				if (iParam7 == 1)
					PED::SET_PED_CAN_BE_TARGETTED(*ppedParam0, false);
			}
		
			PED::SET_PED_NAME_DEBUG(*ppedParam0, sParam6);
		}
	
		return true;
	}

	return false;
}

BOOL func_452(Ped* ppedParam0, eCharacter echParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, BOOL bParam6) // Position - 0x33A36
{
	Hash model;

	if (!func_3(echParam1))
	{
		model = func_494(echParam1);
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
				PED::DELETE_PED(ppedParam0);
		
			*ppedParam0 = PED::CREATE_PED(PED_TYPE_MISSION, model, vParam2, fParam5, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*ppedParam0);
		
			if (model == joaat("IG_LamarDavis"))
				if (PED::GET_PED_DRAWABLE_VARIATION(*ppedParam0, PV_COMP_UPPR) == 0)
					PED::SET_PED_COMPONENT_VARIATION(*ppedParam0, PV_COMP_HAND, 2, 0, 0);
		
			func_453(*ppedParam0, echParam1);
		
			if (bParam6)
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
		
			return true;
		}
	}

	return false;
}

int func_453(Entity eParam0, eCharacter echParam1) // Position - 0x33AC4
{
	int num;

	num = 7;

	if (echParam1 == CHAR_LAMAR)
	{
		num = 3;
	}
	else if (echParam1 == CHAR_JIMMY)
	{
		num = 4;
	}
	else if (echParam1 == CHAR_AMANDA)
	{
		num = 5;
	}
	else
	{
		num = 7;
		return 0;
	}

	Global_97347[num - 3] = eParam0;
	return 1;
}

BOOL func_454(var uParam0) // Position - 0x33B0A
{
	if (func_455(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
	
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
			return true;
	}

	return false;
}

BOOL func_455(var uParam0) // Position - 0x33B34
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		return false;

	return true;
}

BOOL func_456(var uParam0) // Position - 0x33B59
{
	int i;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->[i]))
			return false;
	}

	return true;
}

void func_457(var uParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x33B8A
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = iParam3;
	STREAMING::REQUEST_ANIM_DICT(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
	return;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x33BC6
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

BOOL _IS_MISSION_REPLAY_IN_PROGRESS() // Position - 0x33BEE
{
	if (Global_101533 == 10 || Global_101533 == 9)
		return true;

	return false;
}

void func_460() // Position - 0x33C12
{
	int i;

	func_358();

	if (func_471())
		_DEBUG_PRINT("...Random Character Script was triggered so additional cleanup required");

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_347))
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(pedLocal_347, KNOCKOFFVEHICLE_DEFAULT);

	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_179);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_347))
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_347, 0);
	
		AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
	}

	AUDIO::TRIGGER_MUSIC_EVENT("RC6A_FAIL");
	func_343(&pedLocal_447);
	func_299(&pedLocal_347, true, 0, 1);
	func_12(&blLocal_670);
	func_12(&blLocal_348);

	for (i = 0; i <= 3; i = i + 1)
	{
		func_299(&uLocal_574[i /*12*/], true, 0, 1);
	}

	func_299(&pedLocal_547, true, 0, 1);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_547.f_1))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_547.f_1, BF_CanLeaveVehicle, true);
		func_299(&(pedLocal_547.f_1), true, 0, 1);
	}

	func_343(&(pedLocal_547.f_2));
	func_299(&pedLocal_647, true, 0, 1);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_653);
	TASK::REMOVE_WAYPOINT_RECORDING("Fanatic1RollingStart");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1out_of_breath");
	STREAMING::REMOVE_ANIM_DICT("move_f@runner");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1");
	STREAMING::REMOVE_ANIM_SET("FEMALE_FAST_RUNNER");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_623);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("banshee"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_452);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rottweiler"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BayWatch_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_TrampBeac_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_MaryAnn"));
	func_470();
	func_4(1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1842.3f, -517.7f, 26.68f, -1823.52f, -515.43f, 29.27f, true, true);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1864.08f, -632.07f, 10.09f, -1863.31f, -631.53f, 10.15f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1820.57f, -552.41f, 17.4f, -1865.76f, -617.48f, 10.58f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_644, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_645, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_646, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	AUDIO::STOP_SOUND(iLocal_714);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	func_449(2, false);
	func_461(&uLocal_94, 0, false, false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_461(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x33E35
{
	func_468(uParam0, iParam1);
	func_466(uParam0, bParam2);
	func_462(uParam0, bParam3);
	return;
}

void func_462(var uParam0, BOOL bParam1) // Position - 0x33E55
{
	func_463(&(uParam0->f_41), bParam1);
	return;
}

void func_463(var uParam0, BOOL bParam1) // Position - 0x33E67
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (bParam1)
			func_465(&uParam0->[i]);
		else
			func_464(&uParam0->[i], false);
	}

	return;
}

void func_464(Object* pobParam0, BOOL bParam1) // Position - 0x33EA5
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		if (!bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
		else
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*pobParam0);
	}

	return;
}

void func_465(Object* pobParam0) // Position - 0x33EE0
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		OBJECT::DELETE_OBJECT(pobParam0);
	}

	return;
}

void func_466(var uParam0, BOOL bParam1) // Position - 0x33F0B
{
	func_467(&(uParam0->f_35), bParam1);
	return;
}

void func_467(var uParam0, BOOL bParam1) // Position - 0x33F1D
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (bParam1)
			func_6(&uParam0->[i]);
		else
			func_343(&uParam0->[i]);
	}

	return;
}

void func_468(var uParam0, int iParam1) // Position - 0x33F5A
{
	func_469(&(uParam0->f_28), iParam1);
	return;
}

void func_469(var uParam0, int iParam1) // Position - 0x33F6C
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (iParam1 == 1)
			func_8(&uParam0->[i]);
		else
			func_299(&uParam0->[i], false, 1, 0);
	}

	return;
}

void func_470() // Position - 0x33FAD
{
	func_299(&pedLocal_625, true, 0, 1);
	func_299(&pedLocal_626, true, 0, 1);
	func_299(&pedLocal_627, true, 0, 1);
	func_299(&pedLocal_628, true, 0, 1);
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_a@cpr_def");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_b@cpr_def");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_a@cpr_str");
	STREAMING::REMOVE_ANIM_DICT("mini@cpr@char_b@cpr_str");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1");
	PATHFIND::SET_PED_PATHS_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, true, 0);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, false);
	return;
}

BOOL func_471() // Position - 0x3404E
{
	int num;

	num = func_265();

	if (num == -1)
		return false;

	if (!Global_113056[num /*10*/].f_4)
		return false;

	Global_113056[num /*10*/].f_4 = 0;
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	HUD::CLEAR_ADDITIONAL_TEXT(2, true);

	if (!_IS_MISSION_REPEAT_ACTIVE(false))
	{
		if (Global_113056[num /*10*/].f_5 && Global_113056[num /*10*/].f_6)
			Global_113056[num /*10*/].f_6 = 0;
	
		if (!Global_113056[num /*10*/].f_6 && !Global_113056[num /*10*/].f_5)
			Global_113056[num /*10*/].f_6 = 1;
	}

	return true;
}

void func_472(BOOL bParam0) // Position - 0x340EF
{
	int num;

	func_490();

	if (!func_489())
	{
		num = func_265();
	
		if (num == -1)
			return;
	
		if (!Global_113056[num /*10*/].f_4)
			return;
	
		if (Global_113056[num /*10*/].f_5)
			return;
	
		if (Global_113056[num /*10*/].f_6)
			return;
	
		if (Global_95688 == Global_101570)
			Global_113969.f_18577[num /*6*/].f_4 = Global_113969.f_18577[num /*6*/].f_4 + 1;
	
		Global_95688 = Global_101570;
	
		if (bParam0)
		{
			func_222(num, true, false);
			func_473(SCRIPT::GET_THIS_SCRIPT_NAME(), num);
		}
		else
		{
			if (Global_113056[num /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_235(&(Global_113056[num /*10*/].f_9));
			}
		
			func_221(num, 1, true, false);
		}
	
		Global_113056[num /*10*/].f_6 = 1;
	}

	return;
}

void func_473(const char* sParam0, int iParam1) // Position - 0x341BF
{
	if (Global_101533 != 12)
		if (func_474(sParam0, 6, iParam1))
			Global_101533.f_1 = iParam1;

	return;
}

BOOL func_474(const char* sParam0, int iParam1, int iParam2) // Position - 0x341E7
{
	Vehicle vehiclePedIsIn;
	var unk;
	int unk2;

	func_83();
	func_488();
	Global_101533 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_101533.f_3), sParam0, 32);
	Global_101533.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(true);
	MISC::SET_FADE_OUT_AFTER_ARREST(false);
	MISC::SET_FADE_OUT_AFTER_DEATH(false);
	func_292(1);
	func_486(true);
	func_483(0);
	func_482(1);
	MISC::CLEAR_BIT(&(Global_101533.f_20), 9);
	MISC::CLEAR_BIT(&(Global_101533.f_20), 6);
	MISC::CLEAR_BIT(&(Global_101533.f_20), 20);
	MISC::CLEAR_BIT(&(Global_101533.f_20), 21);
	MISC::CLEAR_BIT(&(Global_101533.f_20), 5);

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(vehiclePedIsIn))
					MISC::SET_BIT(&(Global_101533.f_20), 5);
			}
		}
	}

	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	func_481(false);
	func_86(1);
	Global_101533.f_2 = Global_101570;

	if (func_480())
	{
		if (func_479())
		{
			if (Global_101570 >= func_476())
				if (!IS_BIT_SET(Global_92301[iParam2 /*34*/].f_15, 16))
					if (Global_113969.f_9088.f_330[iParam2 /*6*/].f_1 >= 2)
						Global_95689 = 1;
		}
		else if (Global_101533.f_11 == 6)
		{
			func_224(iParam2, &unk);
		
			if (unk.f_31 == 1)
				if (Global_113969.f_18577[iParam2 /*6*/].f_4 >= 2)
					Global_95689 = 1;
		}
		else
		{
			num = func_475(SCRIPT::GET_THIS_SCRIPT_NAME());
		
			if (num > -1)
				if (Global_113969.f_24989.f_4[num] >= 2)
					Global_95689 = 1;
		}
	}

	return true;
}

int func_475(const char* sParam0) // Position - 0x34376
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
		return 0;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
		return 1;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
		return 2;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
		return 3;

	return -1;
}

int func_476() // Position - 0x343D0
{
	int num;
	int num2;

	num = func_477(&(Global_101533.f_3), false);
	num2 = 0;

	if (num == 53)
		num2 = 1;

	return num2;
}

int func_477(const char* sParam0, BOOL bParam1) // Position - 0x343F4
{
	Hash hashKey;
	int num;

	hashKey = MISC::GET_HASH_KEY(sParam0);
	num = func_478(hashKey, true);
	num == -1 && !bParam1;
	return num;
}

int func_478(Hash hParam0, BOOL bParam1) // Position - 0x3441E
{
	int i;

	for (i = 0; i < 94; i = i + 1)
	{
		if (Global_92301[i /*34*/].f_6 == hParam0)
			return i;
	}

	!bParam1;
	return -1;
}

BOOL func_479() // Position - 0x34454
{
	if (Global_101533.f_11 == 0 || Global_101533.f_11 == 1 || Global_101533.f_11 == 2 || Global_101533.f_11 == 3 || Global_101533.f_11 == 4)
		return true;

	return false;
}

BOOL func_480() // Position - 0x344A4
{
	if (Global_101533.f_11 == 0 || Global_101533.f_11 == 1 || Global_101533.f_11 == 2 || Global_101533.f_11 == 6 || Global_101533.f_11 == 3)
		return true;

	if (Global_101533.f_11 == 5)
		if (func_475(&(Global_101533.f_3)) > -1)
			return true;

	return false;
}

void func_481(BOOL bParam0) // Position - 0x34510
{
	HUD::DISPLAY_HUD(bParam0);
	HUD::DISPLAY_RADAR(bParam0);
	return;
}

void func_482(int iParam0) // Position - 0x34524
{
	if (iParam0 == 1)
	{
		HUD::THEFEED_PAUSE();
		MISC::SET_BIT(&(Global_101533.f_20), 3);
	}
	else if (IS_BIT_SET(Global_101533.f_20, 3))
	{
		HUD::THEFEED_RESUME();
		MISC::CLEAR_BIT(&(Global_101533.f_20), 3);
	}

	return;
}

void func_483(int iParam0) // Position - 0x3455E
{
	if (iParam0 == 1)
	{
		if (IS_BIT_SET(Global_101533.f_20, 4))
		{
			func_485();
			MISC::CLEAR_BIT(&(Global_101533.f_20), 4);
		}
	}
	else
	{
		func_484();
		MISC::SET_BIT(&(Global_101533.f_20), 4);
	}

	return;
}

void func_484() // Position - 0x34598
{
	Global_23692.f_5 = 1;
	return;
}

void func_485() // Position - 0x345A6
{
	Global_23692.f_5 = 0;
	return;
}

void func_486(BOOL bParam0) // Position - 0x345B4
{
	if (bParam0)
	{
		func_487();
	
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
			MISC::SET_BIT(&Global_8801, 16);
	
		Global_20930.f_1 = 1;
	
		if (func_295(0))
			func_292(0);
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!(Global_20930.f_1 == 0))
			Global_20930.f_1 = 3;
	}

	return;
}

void func_487() // Position - 0x34617
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = false;
		Global_22335 = 1;
	}

	return;
}

void func_488() // Position - 0x34640
{
	Global_95689 = 0;
	Global_95690 = false;
	return;
}

BOOL func_489() // Position - 0x34652
{
	if (Global_101533 == 13 || Global_101533 == 10 || Global_101533 == 11 || Global_101533 == 12)
		return false;

	return true;
}

void func_490() // Position - 0x34690
{
	Global_101568 = 1;

	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79622))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_MARRE" /*~s~Michael was arrested.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_FARRE" /*~s~Franklin was arrested.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_TARRE" /*~s~Trevor was arrested.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79626, "", 16);
		}
	
		Global_101568 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_79622))
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_MDIED" /*~s~Michael died.*/, 16);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_FDIED" /*~s~Franklin died.*/, 16);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_79622, "CMN_TDIED" /*~s~Trevor died.*/, 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_79626, "", 16);
		}
	
		Global_101568 = 0;
		MISC::SET_BIT(&(Global_101533.f_20), 25);
	}

	return;
}

void func_491(char* sParam0) // Position - 0x34785
{
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
	return;
}

void func_492(var uParam0) // Position - 0x34797
{
	func_493(&(uParam0->f_28));
	func_493(&(uParam0->f_35));
	func_493(&(uParam0->f_41));
	return;
}

void func_493(var uParam0) // Position - 0x347B7
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->[i]))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->[i], false, true);
	}

	return;
}

Hash func_494(eCharacter echParam0) // Position - 0x347F1
{
	if (!func_3(echParam0))
		return func_33(echParam0);
	else
		echParam0 != _CHAR_NULL;

	return 0;
}
