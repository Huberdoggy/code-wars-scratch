"""
Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
"""


def remove_exclamation_marks(s):
    purged_str = s.replace("!", "")
    return purged_str


print(remove_exclamation_marks("Hello there Kyle!!"))
