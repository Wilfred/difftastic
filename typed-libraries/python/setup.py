import pathlib
from setuptools import setup, find_packages

# The directory containing this file
HERE = pathlib.Path(__file__).parent

# The text of the README file
README = (HERE / "README.md").read_text()

REQUIREMENTS = (HERE / "requirements.txt")

requirements = [x for x in map(str.strip, REQUIREMENTS.read_text().split("\n")) if x != ""]

setup(
    name="tree-sitter-solidity",
    version="0.0.1",
    description="A tree-sitter based typed parser for the solidity language",
    long_description=README,
    long_description_content_type="text/markdown",
    url="https://github.com/joranhonig/tree-sitter-solidity/",
    author="Joran Honig",
    author_email="joran.honig@gmail.com",
    classifiers=[
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.7",
    ],
    packages=find_packages(),
    include_package_data=True,
    install_requires=requirements,
)