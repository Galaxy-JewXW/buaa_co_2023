import os


class ISE_Handler:
    def __init__(self, ISE_path: str, project_path: str, testpoints: str, answers: str):
        self.__ISE_path = ISE_path
        self.__project_path = project_path
        self.__testpoints = testpoints
        self.__answers = answers

    def get_v_file(self):
        files = os.listdir(self.__project_path)
        files = [x for x in files if x[-2:] == ".v"]
        return files
    
    def get_prj(self):
        pass


class Tester:
    def __init__(self, ISE_path: str, project_path: str, testpoints: str, answers: str, outputs: str):
        pass

