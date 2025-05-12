DELETE FROM `command` WHERE `name`='debug play objectsound';
INSERT INTO `command` (`name`, `help`) VALUES 
('debug play objectsound', 'Syntax: .debug play objectsound #soundKitId\nPlay object sound with #soundKitId.\nSound will be played only for you. Other players will not hear this.');
