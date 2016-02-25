
PREP(addCanInteractWithCondition);
PREP(addLineToDebugDraw);
PREP(addSetting);
PREP(addToInventory);
PREP(assignedItemFix);
PREP(assignObjectsInList);
PREP(ambientBrightness);
PREP(ASLToPosition);
PREP(binarizeNumber);
PREP(blurScreen);
PREP(cachedCall);
PREP(canGetInPosition);
PREP(canInteractWith);
PREP(changeProjectileDirection);
PREP(checkFiles);
PREP(checkPBOs);
PREP(claim);
PREP(codeToString);
PREP(createOrthonormalReference);
PREP(currentChannel);
PREP(debug);
PREP(debugModule);
PREP(defineVariable);
PREP(deviceKeyFindValidIndex);
PREP(deviceKeyRegisterNew);
PREP(disableAI);
PREP(disableUserInput);
PREP(displayIcon);
PREP(displayText);
PREP(displayTextPicture);
PREP(displayTextStructured);
PREP(doAnimation);
PREP(dropBackpack);
PREP(endRadioTransmission);
PREP(eraseCache);
PREP(errorMessage);
PREP(execNextFrame);
PREP(execPersistentFnc);
PREP(execRemoteFnc);
PREP(executePersistent);
PREP(filter);
PREP(findUnloadPosition);
PREP(firedEH);
PREP(fixCollision);
PREP(fixFloating);
PREP(fixLoweredRifleAnimation);
PREP(fixPosition);
PREP(getAllDefinedSetVariables);
PREP(getAllGear);
PREP(getDeathAnim);
PREP(getCaptivityStatus);
PREP(getDefaultAnim);
PREP(getDefinedVariable);
PREP(getDefinedVariableDefault);
PREP(getDefinedVariableInfo);
PREP(getFirstObjectIntersection);
PREP(getFirstTerrainIntersection);
PREP(getForceWalkStatus);
PREP(getGunner);
PREP(getInPosition);
PREP(getMapGridData);
PREP(getMapGridFromPos);
PREP(getMapPosFromGrid);
PREP(getMarkerType);
PREP(getMGRSdata);
PREP(getName);
PREP(getNumberFromMissionSQM);
PREP(getNumberMagazinesIn);
PREP(getPitchBankYaw);
PREP(getSettingData);
PREP(getStaminaBarControl);
PREP(getStringFromMissionSQM);
PREP(getTargetAzimuthAndInclination);
PREP(getTargetDistance);
PREP(getTargetObject);
PREP(getTurnedOnLights);
PREP(getTurretDirection);
PREP(getUavControlPosition);
PREP(getVehicleCargo);
PREP(getVehicleCodriver);
PREP(getVersion);
PREP(getWeaponAzimuthAndInclination);
PREP(getWeaponIndex);
PREP(getWeaponState);
PREP(getWindDirection);
PREP(getZoom);
PREP(goKneeling);
PREP(hadamardProduct);
PREP(handleModifierKey);
PREP(handleModifierKeyUp);
PREP(handleScrollWheel);
PREP(hasItem);
PREP(hasMagazine);
PREP(headBugFix);
PREP(hideUnit);
PREP(insertionSort);
PREP(interpolateFromArray);
PREP(inTransitionAnim);
PREP(isAutoWind);
PREP(isAwake);
PREP(isEngineer);
PREP(isEOD);
PREP(isFeatureCameraActive);
PREP(isInBuilding);
PREP(isModLoaded);
PREP(isPlayer);
PREP(isUnderwater);
PREP(lightIntensityFromObject);
PREP(loadPerson);
PREP(loadPersonLocal);
PREP(loadSettingsFromProfile);
PREP(loadSettingsOnServer);
PREP(loadSettingsLocalizedText);
PREP(map);
PREP(moduleCheckPBOs);
PREP(moduleLSDVehicles);
PREP(muteUnit);
PREP(muteUnitHandleInitPost);
PREP(muteUnitHandleRespawn);
PREP(numberToDigits);
PREP(numberToDigitsString);
PREP(numberToString);
PREP(onAnswerRequest);
PREP(owned);
PREP(parseList);
PREP(player);
PREP(playerSide);
PREP(positionToASL);
PREP(progressBar);
PREP(readSettingFromModule);
PREP(readSettingsFromParamsArray);
PREP(receiveRequest);
PREP(removeCanInteractWithCondition);
PREP(removeSpecificMagazine);
PREP(requestCallback);
PREP(resetAllDefaults);
PREP(restoreVariablesJIP);
PREP(runAfterSettingsInit);
PREP(sanitizeString);
PREP(sendRequest);
PREP(serverLog);
PREP(setAllGear);
PREP(setApproximateVariablePublic);
PREP(setCaptivityStatus);
PREP(setDefinedVariable);
PREP(setDisableUserInputStatus);
PREP(setForceWalkStatus);
PREP(setHearingCapability);
PREP(setName);
PREP(setParameter);
PREP(setPitchBankYaw);
PREP(setProne);
PREP(setSetting);
PREP(setSettingFromConfig);
PREP(setVariableJIP);
PREP(setVariablePublic);
PREP(setVolume);
PREP(showHud);
PREP(statusEffect_addType);
PREP(statusEffect_get);
PREP(statusEffect_localEH);
PREP(statusEffect_resetVariables);
PREP(statusEffect_respawnEH);
PREP(statusEffect_sendEffects);
PREP(statusEffect_set);
PREP(stringCompare);
PREP(stringToColoredText);
PREP(stringRemoveWhiteSpace);
PREP(switchToGroupSide);
PREP(throttledPublicVariable);
PREP(toBin);
PREP(toBitmask);
PREP(toHex);
PREP(toNumber);
PREP(unhideUnit);
PREP(uniqueElements);
PREP(unloadPerson);
PREP(unloadPersonLocal);
PREP(unmuteUnit);
PREP(useItem);
PREP(useMagazine);
PREP(waitAndExecute);
PREP(waitUntilAndExecute);
PREP(waveHeightAt);

PREP(translateToWeaponSpace);
PREP(translateToModelSpace);

// Model and drawing helpers
PREP(worldToScreenBounds);

// config items
PREP(getConfigType);
PREP(getItemType);
PREP(getWeaponType);
PREP(getWeaponModes);
PREP(getWeaponMuzzles);

// config objects
PREP(getConfigTypeObject);
PREP(getConfigGunner);
PREP(getConfigCommander);
PREP(getSelectionsWithoutHitPoints);
PREP(getReflectorsWithSelections);
PREP(getLightProperties);
PREP(getLightPropertiesWeapon);
PREP(getVehicleCrew);
PREP(getVehicleUAVCrew);

// turrets
PREP(getTurrets);
PREP(getTurretIndex);
PREP(getTurretConfigPath);
PREP(getTurretGunner);
PREP(getTurretCommander);
PREP(getTurretCopilot);
PREP(getDoorTurrets);
PREP(getTurretsFFV);
PREP(getTurretsOther);
PREP(hasHatch);

// missing inventory commands
PREP(binocularMagazine);
PREP(removeBinocularMagazine);

// ACE_Debug
PREP(getChildren);
PREP(getDisplayConfigName);
PREP(monitor);
PREP(showUser);

PREP(dumpPerformanceCounters);
PREP(dumpArray);

PREP(globalEvent);
PREP(_handleNetEvent);
PREP(addEventHandler);
PREP(objectEvent);
PREP(targetEvent);
PREP(serverEvent);
PREP(localEvent);
PREP(removeEventHandler);
PREP(removeAlLEventHandlers);

// Synchronized Events
PREP(syncedEventPFH);
PREP(addSyncedEventHandler);
PREP(removeSyncedEventHandler);
PREP(requestSyncedEvent);
PREP(syncedEvent);

PREP(_handleSyncedEvent);
PREP(_handleRequestSyncedEvent);
PREP(_handleRequestAllSyncedEvents);

// other eventhandlers
PREP(addActionEventHandler);
PREP(addActionMenuEventHandler);
PREP(addScrollWheelEventHandler);
PREP(addMapMarkerCreatedEventHandler);

PREP(removeActionEventHandler);
PREP(removeActionMenuEventHandler);
PREP(removeScrollWheelEventHandler);
PREP(removeMapMarkerCreatedEventHandler);

// hashes
PREP(hashCreate);
PREP(hashSet);
PREP(hashGet);
PREP(hashHasKey);
PREP(hashRem);
PREP(hashListCreateList);
PREP(hashListCreateHash);
PREP(hashListSelect);
PREP(hashListSet);
PREP(hashListPush);

PREP(timePFH);
